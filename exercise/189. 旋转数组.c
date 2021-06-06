//189. 旋转数组
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//
//
//
//进阶：
//
//尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
//你可以使用空间复杂度为 O(1) 的 原地 算法解决这个问题吗？
//
//
//示例 1:
//
//输入: nums = [1,2,3,4,5,6,7], k = 3
//输出: [5,6,7,1,2,3,4]
//解释:
//向右旋转 1 步: [7,1,2,3,4,5,6]
//向右旋转 2 步: [6,7,1,2,3,4,5]
//向右旋转 3 步: [5,6,7,1,2,3,4]
//示例 2:
//
//输入：nums = [-1,-100,3,99], k = 2
//输出：[3,99,-1,-100]
//解释:
//向右旋转 1 步: [99,-1,-100,3]
//向右旋转 2 步: [3,99,-1,-100]
//
//
//提示：
//
//1 <= nums.length <= 2 * 104
//-231 <= nums[i] <= 231 - 1
//0 <= k <= 105
//https://leetcode-cn.com/problems/rotate-array/

//方法一
void reverse(int* nums,int begin, int end)
{
    while(begin<end)
    {
        int temp = nums[begin];
        nums[begin]=nums[end];
        nums[end]=temp;
        begin++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k){

    //右移先逆转整个数组
    //123456  2
    //654321
    //56 1234

    //右移
    k %= numsSize;
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k - 1);
    reverse(nums,k ,numsSize-1);


    //左移最后逆转数组
    //123456 2
    //21 6543
    //345612

    // //左移
    // k %= numsSize;
    // reverse(nums,0,k - 1);
    // reverse(nums,k ,numsSize-1);
    // reverse(nums,0,numsSize-1);

}

//方法2
//一次移动一个，共移动k次
//有一个例题特别大，所以此种方法会超时
void rightmove(int* nums,int numsSize)
{
    int end = numsSize - 1;
    int tmp = nums[end];
    int i = 0;
    for(i=0; i<numsSize - 1; i++)
    {
        nums[end - i] = nums[end - 1 - i];
    }
    nums[0]=tmp;
}

void rotate(int* nums, int numsSize, int k){
    int i = 0 ;
    for(i =0;i<k%numsSize;i++)
    {
        rightmove(nums,numsSize);
    }
}

//方法3
//创建两个相同的数组，在进行拼接

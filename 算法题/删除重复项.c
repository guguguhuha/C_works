// 强调！！！
//调试请加setbuf(stdout,NULL)!!!
//给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//
// 
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
int removeDuplicates(int* nums, int numsSize){
    if(nums == NULL||numsSize == 0)
    {
        //如果传过来什么都没有，就退出
        return 0;
    }
    int temp = nums[0];
    int k=1;
    for(int i=1;i<numsSize;i++)
    {
        //因为是有序数组，所以只需要进行前后比对即可
        if(temp != nums[i])
        {
            //temp移位
            temp = nums[i];
            //不重复就添加
            nums[k] = nums[i];
            //k自增
            k++;
        }
        //如果等于就跳过
    }
    return k;
}
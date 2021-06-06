//88. 合并两个有序数组
//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。你可以假设 nums1 的空间大小等于 m + n，这样它就有足够的空间保存来自 nums2 的元素。
//
//
//
//示例 1：
//
//输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//输出：[1,2,2,3,5,6]
//示例 2：
//
//输入：nums1 = [1], m = 1, nums2 = [], n = 0
//输出：[1]
//
//
//提示：
//
//nums1.length == m + n
//nums2.length == n
//0 <= m, n <= 200
//1 <= m + n <= 200
//-109 <= nums1[i], nums2[i] <= 109
//https://leetcode-cn.com/problems/merge-sorted-array/

//方法一：合并后排序
int com_int(const void *s1, const void *s2)
{
    return *((int *) s1) - *((int *) s2);
}

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int ret = n;
    int i = 0;
    while (ret--)
    {
        nums1[m++] = nums2[i++];
    }
    qsort(nums1, nums1Size, sizeof(int), com_int);

}

//方法二：直接按大小来合并
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int end1 = m - 1;//nusm1的末尾
    int end2 = n - 1;//nums2的末尾
    int end = m + n - 1;//新数组的末尾

    //最后所有的元素都放在nums1中

    while (end1 >= 0 && end2 >= 0)//有一个头结束就结束
    {
        //从尾部比较，哪个大就放在末尾
        if (nums1[end1] > nums2[end2])
        {
            nums1[end--] = nums1[end1--];
        }
        else
        {
            nums1[end--] = nums2[end2--];
        }
    }

    //nums2还没结束，还有数据，就需要全移动过去
    //此时，nums2的数据都小于nums1的第一个元素
    //所以直接插在头部
    while (end2 >= 0)
    {
        nums1[end--] = nums2[end2--];
    }
    //但是此时要不要考虑nums1未走完的情况下呢，
    //因为我们是在nums1中进行合并nums2的，
    //如果此时nums2走完，nums1未走完
    //说明nums1剩余的元素，就应该在它原来的位置
    //如：nums1=[1,2,3] nums2=[5,6,7]
    //最后合并为[1,2,3,5,6,7]
    //我们会发现nums1中的元素并没有动
    //[1,2,4] [3,5,6]
    //[1,2,3,4,5,6]
}



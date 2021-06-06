#include <stdio.h>
//面试题 17.04. 消失的数字
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//https://leetcode-cn.com/problems/missing-number-lcci/submissions/
int missingNumber(int* nums, int numsSize){
    int ret1=0,ret2=0;
    int i=0;
    for(i=0;i<numsSize+1;i++)
    {
        ret1+=i;
    }
    for(i=0;i<numsSize;i++)
    {
        ret2+=nums[i];
    }
    return ret1 - ret2;
}

int missingNumber_2(int* nums, int numsSize){
    int i=0;
    int ret=0;
    for(i=0;i<numsSize+1;i++)
    {
        ret^=i;
    }

    for(i=0;i<numsSize;i++)
    {
        ret^=nums[i];
    }

    return ret;
}

////python解法//
//class Solution(object):
//def missingNumber(self, nums):
//    """
//    :type nums: List[int]
//    :rtype: int
//    """
//    ret = max(nums)
//    for i in range(0,ret+2):
//        if i not in nums:
//            return i

int main()
{
    int arr[4]={0,1,2,4};
    int ret=missingNumber(arr,4);
    printf("%d",ret);
    return 0;
}
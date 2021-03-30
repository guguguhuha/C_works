#include<stdio.h>
#include <stdlib.h>

//剑指 Offer 56 - I. 数组中数字出现的次数
//一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。
// 请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。
//https://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof/submissions/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *singleNumbers(int *nums, int numsSize, int *returnSize) {
    int x = 0;
    int y = 0;
    int ret = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        ret ^= nums[i];
    }

    int j = 0;
    for (j = 0; j < 32; j++) {
        if (ret & ((unsigned int) 1 << j)) {
            break;
        }
    }

    int k = 0;
    for (k = 0; k < numsSize; k++) {
        if (nums[k] & ((unsigned int) 1 << j)) {
            x ^= nums[k];
        } else {
            y ^= nums[k];
        }
    }

    *returnSize = 2;

    int *num = (int *) malloc(8);
    num[0] = x;
    num[1] = y;

    return num;
}

int main() {
    int arr[4] = {1, 2, 5, 2};
    int ret = 0;
    int *res = singleNumbers(arr, 4, &ret);
    for (int i = 0; i < 2; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}

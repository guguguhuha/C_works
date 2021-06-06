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
        ret ^= nums[i];//将整个数组异或
    }

    int j = 0;//在异或最终的结果，肯定至少有一位不同，现在就在找那一位
    for (j = 0; j < 32; j++) {
        if (ret & ((unsigned int) 1 << j)) {
            break;
        }
    }
    //分组，在那一位相同的分为一组，不同的分为一组，两组分别进行异或，最终抑或出只出现一次的数字，因为前面已经把这两个只出现一次的数字分开了，最终异或只剩下自己
    int k = 0;
    for (k = 0; k < numsSize; k++) {
        if (nums[k] & ((unsigned int) 1 << j)) {
            //1一定要是无符号的（或者long long，不然当一向左移动31位，该怎么算，或者将数组元素右移也可以
            x ^= nums[k];
        } else {
            y ^= nums[k];
        }
    }

    *returnSize = 2;//告诉后台返回了几个值

    int *num = (int *) malloc(8);//leetcode返回值要求，自己动态开辟一个内存
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

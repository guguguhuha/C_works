//989. 数组形式的整数加法
//对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组。例如，如果 X = 1231，那么其数组形式为 [1,2,3,1]。
//
//给定非负整数 X 的数组形式 A，返回整数 X+K 的数组形式。
//
//示例 1：
//
//输入：A = [1,2,0,0], K = 34
//输出：[1,2,3,4]
//解释：1200 + 34 = 1234
//示例 2：
//
//输入：A = [2,7,4], K = 181
//输出：[4,5,5]
//解释：274 + 181 = 455
//示例 3：
//
//输入：A = [2,1,5], K = 806
//输出：[1,0,2,1]
//解释：215 + 806 = 1021
//示例 4：
//
//输入：A = [9,9,9,9,9,9,9,9,9,9], K = 1
//输出：[1,0,0,0,0,0,0,0,0,0,0]
//解释：9999999999 + 1 = 10000000000
//
//
//提示：
//
//1 <= A.length <= 10000
//0 <= A[i] <= 9
//0 <= K <= 10000
//如果 A.length > 1，那么 A[0] != 0
//https://leetcode-cn.com/problems/add-to-array-form-of-integer/
/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
if(K==0)
    {
        *returnSize = ASize;
        return A;
    }
    int count = 0;
    int i =0;
    //统计人家有多少位
    count = ASize;
    long long sum = 0;
    for(i=0;i<count;i++)
    {
        sum = sum*10+A[i];//累计求和
    }
    sum += K;//加上最后的
    long long ret = sum;
    int count_size=0;
    while(ret)
    {
        count_size++;
        ret/=10;
    }
    int *arr=(int*)malloc(sizeof(int)*count_size);
    for(i=0;i<count_size;i++)
    {
        arr[count_size-1-i]=sum%10;
        sum/=10;
    }
    *returnSize = count_size;
    return arr;
*/
int *addToArrayForm(int *A, int ASize, int K, int *returnSize)
{
    int ksize = 0;//来存储k的长度
    //算k的长度
    int ret = K;
    while (ret)
    {
        ret /= 10;
        ksize++;
    }

    //求出最后创建的总长度
    int len = ksize > ASize ? ksize + 1 : ASize + 1;//加一来放进位的空间

    //创建返回的数组
    int *rearr = (int *) malloc(sizeof(int) * len);

    int Ai = ASize - 1;//取数组的最后位
    int ki = 0;

    int next = 0;//来放进位信息
    int reti = 0;// 最后的总长度

    while (Ai >= 0 || ki < ksize)//当Ai<0并且ki>=ksize循环才会停止，也就是最后循环会走完数组的每一个元素
    {
        //取出数组的最后一位
        int aval = 0;
        if (Ai >= 0)
        {
            aval = A[Ai--];
        }

        //取出k的最后一位
        int kval = K % 10;
        K /= 10;
        ki++;

        //算和
        ret = aval + kval + next;
        if (ret >= 10)//如果ret>=10，就说明需要进位
        {
            next = 1;//进位
            ret -= 10;
        }
        else
        {
            next = 0;//不需要进位
        }

        //给返回的数组赋值
        rearr[reti++] = ret;
    }
    //最后处理最后一次进位的过程
    if (next == 1)
    {
        rearr[reti++] = 1;
    }
    else
    {
        //不需要进位，就不需要处理
    }
    //我们数组中存储的值是反着的，我们需要将其逆序一下
    int begin = 0;
    int end = reti - 1;

    while (begin <= end)
    {
        int tmp = rearr[begin];
        rearr[begin] = rearr[end];
        rearr[end] = tmp;
        begin++;
        end--;
    }
    //传递位数
    *returnSize = reti;
    return rearr;
}
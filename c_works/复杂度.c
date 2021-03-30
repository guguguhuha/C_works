#include <stdio.h>
#include <time.h>

//void Func1(int N)
//{
//    int start = clock();
//    int count = 0;
//    for (int i = 0; i < N ; ++ i)
//    {
//        for (int j = 0; j < N ; ++ j)
//        {
//            ++count;
//        }
//    }
//    for (int k = 0; k < 2 * N ; ++ k)
//    {
//        ++count;
//    }
//    int M = 10;
//    while (M--)
//    {
//        ++count;
//    }
//    int end = clock();
//    printf("%d\n", end - start);//单位为毫秒
//}
//
//int main()
//{
//    Func1(0);//0
//    Func1(100);//0
//    Func1(10000);//386
//    return 0;
//}

////描述：传递一个数组，给定一个数，查找该数组中是否含有这个数
//int FindNum(int* arr,int len,int search_num)
//{
//    int i = 0;
//    for(i=0;i<len;i++)
//    {
//        if(search_num == arr[i])
//            return 1;//找到则返回 1
//    }
//    return 0;//找不到则返回 0
//}
//// 计算Func2的时间复杂度？
//void Func2(int N)
//{
//    int count = 0;
//    for (int k = 0; k < 2 * N ; ++ k)
//    {
//        ++count;
//    }
//    int M = 10;
//    while (M--)
//    {
//        ++count;
//    }
//    printf("%d\n", count);
//}

////3. 计算Func4的时间复杂度？
//void Func4(int N)
//{
//    int count = 0;
//    for (int k = 0; k < 100; ++ k)
//    {
//        ++count;
//    }
//    printf("%d\n", count);
//}

//// 4.计算BubbleSort的时间复杂度？
//void BubbleSort(int* a, int n)
//{
//    assert(a);
//    for (size_t end = n; end > 0; --end)
//    {
//        int exchange = 0;
//        for (size_t i = 1; i < end; ++i)
//        {
//            if (a[i-1] > a[i])
//            {
//                Swap(&a[i-1], &a[i]);
//                exchange = 1;
//            }
//        }
//        if (exchange == 0)
//            break;
//    }
//}

//// 5.计算BinarySearch的时间复杂度？
//int BinarySearch(int* a, int n, int x)
//{
//    assert(a);
//    int begin = 0;
//    int end = n-1;
//    while (begin < end)
//    {
//        int mid = begin + ((end-begin)>>1);
//        if (a[mid] < x)
//            begin = mid+1;
//        else if (a[mid] > x)
//            end = mid;
//        else
//            return mid;
//    }
//    return -1;
//}
//// 6.计算阶乘递归Factorial的时间复杂度？
//long long Factorial(size_t N)
//{
//    return N < 2 ? N : Factorial(N-1)*N;
//}

////7. 计算斐波那契递归Fibonacci的时间复杂度？
//long long Fibonacci(size_t N)
//{
//    return N < 2 ? N : Fibonacci(N-1)+Fibonacci(N-2);
//}

////1. 计算BubbleSort的空间复杂度？
//void BubbleSort(int* a, int n)
//{
//    assert(a);
//    for (size_t end = n; end > 0; --end)
//    {
//        int exchange = 0;
//        for (size_t i = 1; i < end; ++i)
//        {
//            if (a[i-1] > a[i])
//            {
//                Swap(&a[i-1], &a[i]);
//                exchange = 1;
//            }
//        }
//        if (exchange == 0)
//            break;
//    }
//}

////2. 计算生成的Fibonacci数组的空间复杂度？
//long long* Fibonacci(size_t n)
//{
//    if(n==0)
//    {
//        return NULL;
//    }
//
//    long long * fibArray =
//            (long long *)malloc((n+1) * sizeof(long long));
//
//    fibArray[0] = 0;//斐波那契数的第一个
//    fibArray[1] = 1;//斐波那契数的第二个
//    for (int i = 2; i <= n ; ++i)//利用循环来生成斐波那契数
//    {
//        fibArray[i ] = fibArray[ i - 1] + fibArray [i - 2];
//    }
//
//    return fibArray ;
//}

//3. 计算阶乘递归Factorial的空间复杂度？
long long Factorial(size_t N)
{
    return N < 2 ? N : Factorial(N-1)*N;
}
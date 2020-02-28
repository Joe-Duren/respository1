#include<stdio.h>
#include<stdlib.h>
long long Fib(long long first,long long second ,long long N)
{
    if (N < 3)
        return 1;
    if (N == 3)
        return first + second;
    return Fib(second, first + second, N - 1);
}
int main()
{
    long long num = 0;
    num=Fib(1,1,60);
    printf("β�ݹ飺%d\n", num);
    system("pause");
    return 0;
}

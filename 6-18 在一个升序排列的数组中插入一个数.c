#include <stdio.h>
#define N 11
void fun(int a[N],int number);
int main()
{
    int i,number,a[N]= {1,2,4,6,8,9,12,15,149,156};
    scanf("%d",&number);
    printf("The original array:\n");
    for(i=0; i<N-1; i++)
        printf("%5d",a[i]);
    printf("\n");
    fun(a,number);
    printf("The result array:\n");
    for(i=0; i<N; i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 *////这个11是扩大后的，而且题目也确实给了原来有10个元素，只到a[9]。
void fun(int a[N],int number)
{int i,pos=N-1;///要先设置在最后一个，防止number最大；
    ///要默认插入到最后一位
    for(i=0; i<N; i++)
    {
        if(number>a[i])

         {  pos=i;
        break;}
    }

    for(i=N-1; i>pos; i--)//
    {
        a[i]=a[i-1];
    }
    a[pos]=number;
}



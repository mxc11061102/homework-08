#include<stdio.h>
int fun()
{
    int a;
    a=3;
    printf("局部变量的a值%d\n",a);
    return a;
    }
int main()
{
    int a=4;
    fun();
    a++;
    printf("主函数的a值%d\n",a);
    }

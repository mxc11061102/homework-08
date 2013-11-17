#include "iostream.h"
int main()
{
   int size;
   float sum1=0;
   float sum2=0;
   int *heapArray;
   int stackArray[100];
   cout <<"请输入元素个数：";
   cin >>size;
   heapArray=new int[size];//创建堆内存数组 
   cout <<"请输入各元素：" <<endl;
   for (int i=0;i<size;i++)
   {
      cin >>heapArray[i];
      stackArray[i]=heapArray[i];
      sum1=sum1+heapArray[i];
      sum2=sum2+stackArray[i];
   }
   cout <<"这些数的平均值为(堆内存)" <<sum1/size <<endl;
   cout <<"这些数的平均值为(栈内存)" <<sum2/size <<endl;
   delete [] heapArray;
   return 0;
}

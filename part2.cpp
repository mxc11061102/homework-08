#include "iostream.h"
int main()
{
   int size;
   float sum1=0;
   float sum2=0;
   int *heapArray;
   int stackArray[100];
   cout <<"������Ԫ�ظ�����";
   cin >>size;
   heapArray=new int[size];//�������ڴ����� 
   cout <<"�������Ԫ�أ�" <<endl;
   for (int i=0;i<size;i++)
   {
      cin >>heapArray[i];
      stackArray[i]=heapArray[i];
      sum1=sum1+heapArray[i];
      sum2=sum2+stackArray[i];
   }
   cout <<"��Щ����ƽ��ֵΪ(���ڴ�)" <<sum1/size <<endl;
   cout <<"��Щ����ƽ��ֵΪ(ջ�ڴ�)" <<sum2/size <<endl;
   delete [] heapArray;
   return 0;
}

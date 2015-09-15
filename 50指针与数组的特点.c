/*指针与数组的特点*/

#include <stdio.h>

int main(){
    
    /*
     
     2.指针可以运算.但仅限于加减运算.运算的实质就是地址运算.即地址的移动.

    int arr[3]={1,2,3};
    int *p=arr;//int *p=&arr[0]
    int a=*p;
    //a=*(p+1);//等效于:int *p1=&arr[1]; a=*p1;
     
    int *p1=&arr[1];
    a=*(p1+1);//p1的值并没有改变.
    printf("p1=%p\n",p1);
     
    p1=p1+1;//赋值之后才改变了
    printf("p1=%p\n",p1);
    a=*(p1-1);
    
    printf("%d\n",a);
     
     */
    
    /*
     
     3.地址(+1)向高位移动,而(-1)向低位移动.
     不同指针类型移动一位(+1或-1)的字节数不同.
     
    

   
    char arr[3]={'a','b','c'};
    char *c=&arr[2];//char *c=arr;
     //printf("c=%p\n",c);
   // printf("%c\n",*c);
   // c=c+1;
    // printf("%c\n",*c);
   // c=c-1;
     //printf("c=%p\n",c);
   // printf("%c\n",*c);
    
    //指针也可以有指针名[移动数量].c[1]等效于:*(c+1)
    printf("%c--%c--%c\n",*c,c[-1],arr[1]);//arr[下标]
    //指针名[移动数量],并且以这个指针开始的位置为基准
     */
    
    int a=0;
    int b=1;
    int *p=&a;
    printf("%d---%d\n",*p,p[-1]);//p[-1]等效于:*(p-1)
    //指针不受限制,可以任意在内存中移动.
    
    
    
    
    
    
    
 
    
    
   
    
}





/*宏定义的用法*/
#include <stdio.h>
#define kLength 5
//宏定义函数
#define kAdd(a,b) ((a)*(b))
int add(int a,int b);

int main(){
    
    int arr1[kLength];
    int arr2[kLength];
    int arr3[kLength];

    printf("%d\n",kLength);
    printf("%d\n",kLength+10);
    
 //#undef kLength
   // #undef kAdd(a,b)
    
  //  int kLength=10;//int 5=10;
    printf("%d\n",kLength+10);
    
    
    //被双引号的引起来的不会被替换

   // printf("kLength\n");
    int b=add(2,3);
    int c=kAdd(2,3);//int c=2+3;
    
//宏定义只会做代码替换,不会关注任何逻辑,容易出现优先级错误(加括号解决).

    int d=kAdd(2,3)/kAdd(4,5);
   // int d=(2+3)/(4+5);
    int f=kAdd(2+3,3+4);
    //int f=(2+3)*(3+4);
    printf("%d,c=%d,d=%d,f=%d\n",b,c,d,f);
    
    
   // 替换可以设置作用域.如果不设置,作用域则是这行代码出现到代码的最后一行
    #undef kLength
    
    return 0;
    
}

int add(int a,int b){
    return a+b;
}

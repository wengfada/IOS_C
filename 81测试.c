
#include <stdio.h>

int main() {
    int a=5;
    int *p=&a;
    printf("%d--%d\n",*p,p[0]);
    
    double d=1.2;
    double *pd=&d;
  
    char c='a';
    char *pc=&c;
   
    char **pcs=&pc;
    
    
    char ***pcss=&pcs;
    
    
    
    int arr[3]={2,3,4};
    
    //这是一个数组的首元素的指针
    
    int *p6=arr;//==&arr[0]

    
    
    //+1或-1.指针移动的步长(字节数),由当前这个指针类型决定.这个类型占几个字节就表示这个步长为几个字节.
    
    //表示(一个int长度为3的数组 )的指针
    int (*pArr)[3]=&arr;
    
   // printf("%p--+1=  %p\n",pArr,pArr+1);
    //*pArr==arr;
    
    int (**pArrs)[3]=&pArr;
 
    //*pArrs===pArr
    
    
    //**pArrs===arr
    
   // printf("%d\n",(**pArrs)[2]);
    
    

    
    
    return 0;
}
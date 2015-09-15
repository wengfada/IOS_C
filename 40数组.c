/*数组*/
#include <stdio.h>

int arrMy(int arr[],int size);
int add(int d);

int main(){
    
    int a=70;
    int b=80;
    int c=90;
    
    /*
     定义: 数据类型 数组名[长度(数量)] ;
      int arr[3];
     */
 
    /*初始化:类型 数组名[(长度)]:={元素1,元素2,…}*/
    int arr[3]={70,80,90};
    
    /*初始化的第二种方式,单独初始化*/
    int arr2[3];
//    arr2={70,80,90};//错误
    
    arr2[0]=70;
    arr2[1]=80;
    arr2[2]=90;
    
     /*初始化的第三种方式,省略长度*/
    int arr3[]={70,80,90};
//    printf("arr3[1]=%d\n",arr3[1]);
//    数组必须要定义长度(正整数),
//    int arr4[-1]={};//错误
    
    
//    定义时可初始化(长度必须是常量)或之后单独初始化
    int count=3;
//    int arr5[count]={70,80,90};//错误
    int arr5[count];
    arr5[0]=70;
    arr5[1]=80;
    arr5[2]=90;
    
//    如果省略长度,那么表示,后面初始化几个元素,长度就为几.
    int arr6[3]={1,2};
    arr6[2]=3;
    int arr7[]={1,2,3};
    
//    arr7[2]=3;//错误
//    int arr8[];//错误.当没有在定义数组时赋值.不能省略长度.
    
//    类型一致.不然可能丢失精度.
//    arr7[0]=2.2;
    
//    数组第一个元素的地址就是这个数组的地址.二者是一致的
//    printf("%p---%p\n",arr7,&arr7[0]);
    
//    地址传递时,函数里可以直接改变变量的数据.
//    printf("%d\n",arr7[0]);//=arr7[0]=1;
//    int num= arrMy(arr7);
    
//    printf("%d\n",arr7[0]);//=arr7[0]=10;
    
//    printf("%d---%lu\n",num,sizeof(arr7));//arr7代表是整个数组.
//    int d=5;
//    add(d);
    
//    printf("%d\n",d);
   
    
//    计算一个数组的长度
     int size=sizeof(arr7)/sizeof(int);
     printf("arr7的长度是=%d\n",size);
     arrMy(arr7,size);
    
    
     return 0;
}


//把数组的第一个元素的值改为10.并且打印这个数组.
int arrMy(int arr[],int size){
    
//这里传递过来的是数组的地址.而地址是指针类型,指针类型在当前环境下占8字节
    arr[0]=10;
    
    for (int i=0; i<size; i++) {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    
   return sizeof(arr);
    
}

int add(int d){
    return d+10;
}





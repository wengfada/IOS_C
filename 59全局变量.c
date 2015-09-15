/*全局变量*/
#include <stdio.h>
int add();
/*
 
 1.生命生期跟随程序.程序启动创建,程序退出其才会销毁
 2.作用域是其所在位置之下的所有函数,都可以共享并改变.
 3.变量的使用遵循就近原则如果函数内有同名变量,那么用函数自已的.
 4.如果没有初始化赋值,默认值是0;

 */

//int add2(){
//    a++;
//    return 0;
//}

int a;//全局变量
double b;
char c;
int arr[3];
int *p;

int main(){
    //add();
    //add();
    //a=10;//外部全局变量的a;
    
    printf("%p\n",p);
    
    int a;//mian函数自已定义的a;
    printf("%d\n",a);
    
    {
        int a;//main函数自已的子作用域定义的a;
        a=0;
        printf("%d\n",a);
    }
    
    //printf("%d\n",a);
    return 0;
}

int add(){
   // int a;
    a++;
    return 0;
}
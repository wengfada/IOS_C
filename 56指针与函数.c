/*指针与函数*/
#include <stdio.h>
int *add(int *p);
int add1(int a);
int add2(int (*p3)(int));

int main(){
    
    int a=1;
    int *p=&a;
    int*p1=add(p);
    printf("p=%p---P1=%p\n",p,p1);
    
    /*
     定义:函数返回值类型 (*指针名)(参数类型);赋值:指针名=函数名;
     如:先定义函数int add(int a){ //...}. int (*p)(int)=add;
     使用:指针名(实参); 如:p(3);等效于add(3);
     */
    
    //定义:函数返回值类型 (*指针名)(参数类型);
    int (*p3)(int);
    
    //赋值:指针名=函数名;
    p3=add1;
    
    //使用:指针名(实参); 如:p(3);等效于add(3);
    int b=p3(3);
    printf("%d\n",b);
    
    //1.函数指针做加减运算可以,但没有意义.不建议.
    add2(p3);
    return 0;
    
}

//2.函数指针可以当作参数传递.因为其是一个指针类型.
int add2(int (*p3)(int)){
    
    p3(5);//等效于:add1(5);
    return 0;
    
}

int add1(int a){
    
    printf("hello\n");
    return 0;
    
}

/*
 一,什么是指针型函数?
 是函数. 这个函数的返回值类型是指针;
 定义:类型 * 函数名(参数){return 指针类型;}
 如:int  *add(int *a){return &a;}.
 表示定义一个返回值是int指针类型的add函数.
 
 */

int *add(int *p){
    
    return p;
}

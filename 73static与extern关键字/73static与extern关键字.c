/*static 与 extern 关键字*/

/*
函数分两种:内部函数与外部函数
 
 如果一个函数前面什么不加.表示这个默认就是外部函数,
 跟加上extern.效果是一致的
 
 那么.如果前面加了static 就表示这是一个内部函数
 :意思是这个函数只能被本文件访问,别的文件就算声名了也不能访问.
 
 */

/*
 变量: 分为局部变量与全局变量
 
 全局变量:
 1.外部的全局变量:extern 修饰.表示可以被其它文件访问操作.
    同时所有定义的同名变量都是同一个.
 
 2.内部的全局变量:static 修饰.表示当前这个全局变量只能被本文件访问.
    外部文件无法操作它的值.
 
 */

extern int b;
extern int b;

static int a;
static int a;

#include <stdio.h>

void test();
void test2();

int main(){
    
    //只能作为声名,不能定义赋值
   // extern int f=5;//错误
    
    extern int f;//正确;
    f=20;
    
    
    test();
    test();
    //test2();
    
    while (a<100) {
        a++;
        test();
    }
    
    return 0;
}

int f;

/*只能在本文件内访问*/
//static void test(){
//    
//}

extern void test(){
    
    /*
     
    局部变量一旦被static修饰,那么它只会在函数执行第一次时候创建.
    如果函数再次执行,其将会复用之前创建的变量.
    同时这个变量的生命周期直到程序结束.
     
     */
    
    static int c=0;
    c++;
    printf("c=%d\n",c);
    
    //函数每次执行都会被创建
    int d=0;
    d++;
    printf("d=%d\n",d);
    
    a++;
    printf("test执行了--%d\n",a);
}





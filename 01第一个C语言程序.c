/*
  01第一个C语言程序.c
  
  需求:在控制台打印Hello World!
  第一步:编写代码
  第二步:编译成汇编语言程序 命令:cc -c 文件名(注意:一定进入这个文件的目录)
  第三步:链接编译成机器语言程序 命令:cc 文件名
  第四步:执行 直接运行就可以了 文件的全路径(注意:当前路径可以用./表示)

*/

#include <stdio.h>

//让一个整数与10相加
int hello2(int a){
    printf("hello World---2!\n");
    return 10+a;
}

int hello1(){
    printf("hello World---1!\n");
    printf("hello World---1-2!\n");
    printf("hello World---1-3!\n");
    int a=2;
    hello2(a);
    return 0;
}

int main(){
    printf("hello World!\n");
    hello1();//打印3行hello world;
   // hello1();
    //int a=2;
   // hello2(a);
    return 0;
}




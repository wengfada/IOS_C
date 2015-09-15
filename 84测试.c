//属于:预处理指令
#include <stdio.h>  //拷贝
#include <string.h>
#define    kLength  6            //替换
#define    kAdd(a,b)   ((a)+(b))
int add(int (*p)[3]);
int add2(int (*ps)(int (*)[3]));
int add2(int (*ppp)(int (*p)[3]));
#define  M(x,y,z) x*z+y+z
typedef int Arr [3];
int main(){
    int x[3][2]={1,5,4,2,1,6}; int i;
    for(i=0;i<3;i++)
        printf("%d\n",x[i][2-i]);
    int  a=2,b=1, c=4;
    //2+1*4+2+1+4+2+4
    
    printf("----%d\n", M(a+b,b+c, c+a));
    
    char str[]="12\019";
    printf("%lu\n",strlen(str));
//
//
//    struct student{
//        
//        char *name;
//        char sex;
//        int age;
//    };
//
//   // car1.color = "green";
//    printf("%lu\n",sizeof( struct student));


    /*
    const int a=1;
    int b=2;
    int c=2;
    //const int  *pa=&a;//常量的指针
    // *pa=2;错误 指针指向的空间是常量,空间里存的值不能改变.
    int  * const pa=&b;//指针常量
    //pa=&c;//错误. 指针是常量,其里面存的地址不能改变
    
     const int * const pb=&a; //指针的类型是一个常量,指针本身也是常量
    */

    /*
    struct Person{
        char *name;
        int age;
        double high;
     
    }
  int5*  p;abc;
    abc per={};
    struct Person per={"haha",12,12.3};
    per.name;per.age;per.high;
    struct Person *p=&per;
    struct Person arr[2]={per,per};
    (*p).name; p->name;
    struct {
        char *p;
        int age;
        double high;
    } per={"hehe",23,23.5};
    
    int a=kAdd(2,3);
    int a=2+3;
     
    int add2(int (*ppp)(int (*p)[3]));//函数的声名
    int arr[3]={1,2,3};
    int (*p)[3]=&arr;//数组的指针
    //定义函数的指针的方式:
    //函数去掉大括号,把函数名改成指针名,加*,用小括号括起来.
    int (*ps)(int (*)[3])=add;//函数的指针
    int (*ppp)(int (*p)[3])=add;
    int (*fff)(int (*ppp)(int (*p)[3]))=add2;
    add(p);//函数名调用函数的用法
    ps(p);//函数的指针调用函数的用法
    ppp(p);//函数的指针调用函数的用法
     */
    return 0;

}
//任意类型如何当参数.首先定义这个类型,把=左边拷贝到参数的位置就可以了.
//函数的指针当参数
int add2(int (*ppp)(int (*p)[3])){
    printf("hello--add2\n");
    return 0;
}
//int数组的指针当参数
int add(int (*p)[3]){
     printf("hello---\n");
     //int a=kAdd(2,3);
    return 0;
}
//git 测试

#include <stdio.h>

int a;
int a;

//extern void test();//内部函数定义了,同名外部函数不能声名使用.

static void test();
//static void test2(){
//    test();
//    printf("test2执行了\n");
//}

/*表示一个外部函数可以被别的文件访问*/
extern void test2(){
    a++;
    test();
    printf("test2执行了--%d\n",a);
}
static void test(){
    
}
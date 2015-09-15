/*第一阶段总结*/

/*
 1.注释
    单行注释:command+/
    多行注释:里面不能够嵌套多行注释
    核心功能:
        1.临时取消一部分代码,让其不执行.主要用于试调
        2.解释说明
 2.常量与变量
    int a;声名了一个变量
        1.变量的值是可以变化的
        2.变量名要取的有意义(遵循标识符的命名规则:0~9 a~Z _ $)
        3.变量的作用域.要注意所的的变量只在作用域内有效果.(向上找第一个出现的大括号)
    变量在内存中的分配
        1.变量类型占几个字节,则变量占几个字节.
        2.变量是从当前剩余内存区域的最高位开始寻址.
        3.变量的地址是其所占的第一个字节的地址.
 3.数据类型
    基本数据类型
    char int float double
    1.便于区别识别.
    2.合理分配内存.
 4.输出与输入 printf与 scanf
    输出:printf();
    输入:scanf();
 
 
 */
#include <stdio.h>
int main(){
    //int a=10;
    /*
    printf("%d\n",a);
    printf("%c\n",'a');
    printf("%.1f\n",1.2);
    printf("%p\n",&a);//地址
    printf("%s\n","瞄瞄");//字符串
     */
    /*
    printf("%d\n",a);
    scanf("%f",&a);
    printf("%d\n",a);
     */
    
    /*
    1.定义两个变量 一个是int 型 一个是double 型.用scanf函数给double赋值,并强制转换赋值给int型.
     */
    int a;
    double d;
    scanf("%lf",&d);
     printf("%f\n",d);
    a=(int)d;
    printf("%d\n",a);


}
/*变量的内存分析*/

#include <stdio.h>

int main(){
    
    //int a;变量内存分配与赋值与否没有关系.
    
    /*sizeof(数据类型)是一个关键字 也是一个单目操作符.打印占位用lu.
     
    //sizeof用于计算当前环境下占用的内存字节数
    printf("char类型在当前环境占用内存字节数为:%lu\n", sizeof(char));
    printf("int类型在当前环境占用内存字节数为:%lu\n", sizeof(int));
    printf("float类型在当前环境占用内存字节数为:%lu\n", sizeof(float));
    printf("double类型在当前环境占用内存字节数为:%lu\n", sizeof(double));
     
    */
    
    /*
     
     变量的内存分配 从大到小
    int num;
    int num1;
    int num2;
    printf("num的地址是：%p\n", &num);
    printf("num1的地址是：%p\n", &num1);
    printf("num2的地址是：%p\n", &num2);
     
     */
    
    //在变量未经初始化赋值之前,不要使用变量的值.(没有意义).
    int a=0;
    printf("%d\n",a+5);
    
    return 0;
}
/*类型说明符*/

#include <stdio.h>

int main(){
    
    /*
     
     说明一个变量的类型,从而便于区分及优化内存.

    var a="sss";
    8个字节
    'a'
    1个字节
    1234567
     */
    
    // int b=2;
    double c=1.1;
    long long count=0;//==long long int count;
    short b=0;//==short int  b;
    long l=0;//==long int l;
    long double d=0;//正确
    
    //long long double g=0;//错误
    //short double h=0;//错误
    //short float s=0;//错误
    //long long float q=0;//错误
    //long float t=0;//错误
   // long char g=0;//错误
    
    
    /*
     
     signed --->能修饰int char %d
     unsigned--->能修饰int char %u
     short--->能修饰int %d
     long--->能修饰int %ld 和double %Ld
     long long--->能修饰int lld%
     
     */
    
    printf("%lld\n",count);
     printf("%d\n",b);
     printf("%ld\n",l);
    printf("%Lf\n",d);
    
    /*类型说明符可以累加.如果省略了基本数据类型,那么基本数据类型是int*/
    unsigned long r=0;//== unsigned long int r;
    
   // long e=0;//===signed long int e;
    unsigned short o=0;//表示无符号的短整型
    unsigned long long q1=0;
    
    /*
     
    long short a3=0;//错误的.long 和 short只能修饰基本数据类型.
    有符号的char类型是-128~127;signed char;(signed可以省略)
    如果是无符号的char类型:0~255;unsigned char;
    浮点型只有有符号类型.没有无符号类型.
     
    */
    
    char cc=127;
    printf("%d\n",cc);
    
    return 0;
    
}


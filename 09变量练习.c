
/*
 
 变量练习
 交换整型变量a、b的值。比如a=8、b=10；交换之后a的值是10，b的值是8.
 
 */


#include <stdio.h>

int main(){
    
    int a,b,c;//批量定义,以逗号分隔.
    a=8;
    b=10;
    printf("a的值是:%d b的值是%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("交换后a的值是:%d b的值是%d\n",a,b);
    
    return 0;
    
}



/*
 
 需求:编写一个程序打出以下图形(两种方式).
 ************
 * itheima *
 ************
 
步骤:
 
 方法一:
 一次性打印.用\n去作换行符.
 
#include <stdio.h>
 
int main(){
 
    printf("************\n* itheima *\n************\n");
    return 0;
}
 
*/

//第二种方式:分三个函数打印
#include <stdio.h>

int main(){
    
    printf("************\n");
    printf("* itheima *\n");
    printf("************\n");
    
    return 0;
}

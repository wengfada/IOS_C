/*预处理指令思考练习*/
#include <stdio.h>

/*
 
#define A a

#if
#elif
#else
#endif

#ifdef
#endif

#ifndef
#endif

*/

/*1.用宏定义实现取两个数的最小值.*/

#define min(a,b) ((a)<(b)?(a):(b))

//int min(int a,int b);


/*2.用预处理指令实现防止出现文件重复包含及交叉包含*/

#ifndef _71预处理指令思考练习_c
#define _71预处理指令思考练习_c 

/*在这里面放上你需要的代码*/

#endif



int main(){
    int a=10;
    int b=5;
    int minTemp=min(a,b);
    printf("当前最小的数是:%d\n",minTemp);
    return 0;
}

//int min(int a,int b){
//    
//    return a<b?a:b;
//}
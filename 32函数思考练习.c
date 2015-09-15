#include <stdio.h>

int add(int a,int b);

int main(){
    
   //double a= add(3,4);
   // printf("%f\n",a);
/*
 11.实现一个加法计算器,可以反复使用,当两个要相加的数都为0时,程序退出
 
 思路:
    1定义加法函数
    2.定义两个变量
    3.用scanf()函数接收用户输入
    4.调用函数计算得到结果
    5.打印输出结果.
    6.用循环让用户可以继续下一次输入
    7.用if()判断当两个输入的数都为0的时候,程序退出(循环退出break).
 
    while (1) {
 
        printf("请输入两个整数用逗号隔开,可以得到两个数的和\n");
        int a;
        int b;
        scanf("%d,%d",&a,&b);
 
        if(0==a&&0==b){
            break;
        }
 
        int count=add(a,b);
        printf("%d+%d=%d\n",a,b,count);
 
    }
 
    */
    
    
    int a;
    int b;
    
    while (1) {
        
        printf("请输入两个整数用逗号隔开,可以得到两个数的和\n");
        scanf("%d,%d",&a,&b);
        
        if(0==a&&0==b){
            break;
        }
        
        int count=add(a,b);
        printf("%d+%d=%d\n",a,b,count);
        
    }
    
    return 0;
    
}

int a=2;//全局变量
//1定义加法函数

int add(int a,int b){
    return a+b;
}


/*
 
int add(int b){
 
    if(3==a){
        return 0;
    }
    a++;
    printf("haha---\n");
    add(3);
    return a+b;
 
}

void hello(){
    
}

int add(){
 
    return 2;
}
*/



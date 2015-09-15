/*条件编译*/
#include <stdio.h>
#define kA 0
int a=5;


/*
 3.条件编译一般跟宏定义配合使用,防止重复包含及交叉包含
*/

#include "A.h"
//等效于下面代码
//#ifndef k_A_h
//#define k_A_h
//int add();
//#endif


#include "A.h"
//等效于下面代码
//#ifndef k_A_h
//#define k_A_h
//int add();
//#endif


int main(){
    
    /*
     1.条件编译不能访问需要编译后才能执行的代码.
     
    //int a=5;
#if (a==0)
    printf("a====\n");
#else 
     printf("====\n");
#endif
    
  */
   
    /*
2.条件编译不需要用大括号,所以必须加上结束标识,否则涵盖下面的所有代码


#if (kA==0)
    printf("a====\n");
#else
    printf("====\n");

 */
    
    
    /*
     通用用法
     
//#if (kA==5)
//    printf("kA===5\n");
#if (kA==5)
    printf("kA===5\n");
#elif (kA==3)
    printf("kA===3\n");
#else
    printf("else===\n");
//结束条件编译 只对离其最近一个#if起作用
#endif
     
  */
    
    /*
     与宏定义相关的用法
    
#ifdef kA//kA这个宏有定义
    printf("ifdef kA===\n");
#endif
#ifndef kA//kA这个宏没有定义
    printf("ifndef  kA===\n");
#endif
     
  */
    
    
    /*
     用普通方式实现宏定义的判断
    
#if defined(kA)//==#ifdef kA
     printf("defined kA===\n");
#endif
    
#if !defined(kA)//==#ifndef kA
    printf("!defined kA===\n");
#endif
     
   */
    
    return 0;
}
int add(){
    return 2;
}




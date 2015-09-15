/*C语言函数*/
#include <stdio.h>

/*
 
 定义:
 返回值类型 函数名(形式参数类型 参数名1,……){
    具体代码
    return 返回值
 }
 
 调用:
 函数名(实际参数1,实际参数2,…..);
 
 1.返回值类型不定义默认是int.如果不需要具体返回值类型用void(return可以省略).
 2.是否要定义参数看是否有未知内容参与运算,调用时参数必须对应.参数传递的是值.
 3.return可以有多个,但是如果执行到return就不会再执行后面的代码,函数执行结束.
 4.函数不调用不执行,执行顺序看调用顺序.定义了返回值类型可以不返回.(不建议).
 5.函数必须定义才能调用,但不能重复定义.不能嵌套定义.不能自已调用自已(死递归).

*/


void hello(){
    
    printf("hello world\n");
    
    //hello();//不能自已调用自已
    
    //不能嵌套定义
    
//    int a(){
//        return 0;
//    }
    
}

//void hello(){
//    printf("你好\n");
//}


//计算两个数的和,并且打印.
 int add(int a,int b){
     
   // int a=0;
    //int b=0;
     
     a++;
     b++;
     
     if(a>0){
         return 0;
     }
     
    printf("%d+%d=%d\n",a,b,a+b);
     hello();//可以调用别的函数
     
    return 0;//同一作用域,return下面不能写代码,没有意义.
     return 0;return 0;
     
}

int main(){
    
    //add(4,"aa");
    //add(4,'a');
    int c=0;
    int d=0;
//    int a=0;
//    int b=0;
//    printf("%d+%d=%d",a,b,a+b);
   // add();
    int a=3;
    int b=2;
    
//参数传递的是值,而不是变量本身.函数里对参数的任何运算跟外部变量没有关系.
   // add(a,b);
    //printf("a=%d,b=%d",a,b);
    add(-2,1);
    hello();
    return 0;
    
}



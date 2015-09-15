/*指针思考练习*/

#include <stdio.h>

int add(int a,int b,int *p4,int *p5,int *p6);

int main(){
    
    /*
     
    int *p;
    char c1='a';
    char *c=&c1;
    char **cs=&c;
   // c==&c1; cs==&c;
     
    printf("c=%p---cs=%p---&c=%p\n",c,cs,&c);
     
    int a=10;
    int b=12;
   // int c3=add(a,b);
    int c4;
    int c5;
    int c6;
    int *p4=&c4;
    int *p5=&c5;
    int *p6=&c6;
    int c3=add(a,b,p4,p5,p6);
     
    printf("a+b=%d,a-b=%d,a*b=%d,a/b=%d\n",c3,c4,c5,c6);
     
    */
    
    /*
     
     2.已知int a=5;int *p=&a;请输出指针本身的地址,及指针的值,及其所指内存空间的值.

     */
    
    int a=5;
    int *p=&a;
    
    printf("指针p本身的地址=%p,指针p的值=%p,指针所指内存空间的值=%d\n",&p,p,*p);
    
}

/*1.实现一个函数能够实现两个整数的加减乘除.*/
int add(int a,int b,int *p4,int *p5,int *p6){
    
    *p4=a-b;//c4=a-b;
    *p5=a*b;//c5=a*b;
    *p6=a/b;//c6=a/b;
    
    return a+b;
}
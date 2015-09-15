/*函数的与指针思考练习*/
int *add(int *p);
int add1(int a);
int add2(int (*p3)(int));

#include <stdio.h>

int main(){
    
    int b=2;
    int a=1;
    int *p=&a;
    printf("%p\n",p);
    return 0;
    
}

//函数指针可以当作参数传递.因为其是一个指针类型.
int add2(int (*p3)(int)){
    
    p3(5);//等效于:add1(5);
    return 0;
    
}

int add1(int a){
    
    printf("hello\n");
    return 0;
    
}

//指针型函数
int *add(int *p){
    
    return p;
    
}
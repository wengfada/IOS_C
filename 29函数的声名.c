/*函数的声名*/
#include <stdio.h>

//void hello(){
//    printf("hello\n");
//}

void hello();//1.仅声明可以不创建函数,但要调用必须定义函数.

//声名区域可以在其它函数里或函数外.只要放在本函数调用之前就可以.
int add(int,int);
int add(int,int);

int main(){
    
    //hello();
    //int add(int,int);在函数调用之前声名就可以
    add(3,4);
   
    return 0;
}

//void hello(){
//    printf("hello\n");
//}


int add(int a,int b){
    
    printf("%d\n",a+b);
    return a+b;
}

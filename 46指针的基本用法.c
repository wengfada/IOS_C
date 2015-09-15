/*指针的基本用法*/
#include <stdio.h>

void add(int a);
void add2(int *a);

int main(){
    
    int a=5;
    printf("a=%d\n",a);
    add(a);
    printf("a=%d\n",a);
    int *p=&a;
    add2(p);
    printf("a=%d\n",a);
    
    //定义:  类型 *指针名;
    int *pi=&a;
   // 赋值:  指针变量名=指针(地址).注意:指针获取方法(&变量名).
    pi=&a;
    printf("pi=%p---p=%p\n",pi,p);
    
    return 0;
}

void add(int a){
    
    a=a+10;
}

void add2(int *a){
    
    *a=*a+10;
}

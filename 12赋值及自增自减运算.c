/*赋值及自增自减运算*/

#include<stdio.h>

int main(){
    
    int a=1;
    
    /*
     
    a+=2;//==a=a+2;3
    printf("a=%d\n",a);
    a-=1;//a=a-1;2
    printf("a=%d\n",a);
    a++;//a=a+1;3
    printf("a=%d\n",a);
    a--;//a=a-1;2
    printf("a=%d\n",a);
    ++a;//a=a+1;3
    printf("a=%d\n",a);
    --a;//a=a-1;2
    printf("a=%d\n",a);
     
   // 1++;常量不能变化的
    
    int b=a++;//a++这个整体的值没有变化,首先把b=a;再执行a++;
    printf("a=%d b=%d\n",a,b);
     
      */
    
    int b=++a;//++a表示整体的值变化了,先a+1;再赋值给b;
    printf("a=%d b=%d\n",a,b);
    
    
    return 0;
    
}

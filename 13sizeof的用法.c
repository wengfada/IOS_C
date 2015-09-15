/*sizeof的用法*/
#include <stdio.h>

int main(){
    
    /*
     有几部分内容参与运算,就叫几目操作符
     
    int a=0;
    int b=a++;//只有一部分内容参与运算,就是单目操作符.
    int c=1+1;//"+"有两部分内容参与运算.叫:双目操作符.
    printf("%lu\n",sizeof(int));//单目操作符
     
      */
    
    
    int a=0;
    
   // printf("%lu\n",sizeof 2);
    
    //如果不加括号的话,不能用于数据类型.
   // printf("%lu\n",sizeof int);
    
    //需求是:用int字节数,乘以10的值
     //printf("%lu\n",sizeof(int)*10);
    
    //任何的一个字符参与运算的时候都会转换成对应的ASCII码表对应的int值.
     //printf("%lu\n",sizeof('a'));
    
    int d='a';
   // printf("%d\n",d);
    char c='a';
   // printf("%lu\n",sizeof(c));
    
    //sizeof 运算结果是一个无符号的长整型.用lu占位,但是可以跟int互相转换.
    int f=sizeof 2;
    printf("%d\n",f);
    
    //lu :无符号的长整型:表示正整数.有符号的长整型包括所有范围内的整数.
    //且可以与int互相转换
    
    long unsigned  e=sizeof 2;
    f=e;
    printf("%lu\n",sizeof 2);
    
    return 0;
    
}



/*register 与volatile 关键字*/
#include <stdio.h>

/*
 全局变量与加了static局部变量除外.
 */

//register int a;
int main(){
    
    //register 表示让程序优先把这个数据存在寄存器中.提高效率
    
    //如果一个变量使用相当频繁且占用内存又不是很大.可以使用.
    register int a=0;
    
    while(a<1000){
        a++;
        printf("%d--\n",a);
    }
    
//register static  int b=1;//错误
    

    
 /*
  
  volatile 表示让编译器不要去优化代码,不能用缓存,
  每次使用都必须去内存中获取.
  如果需要让计算机严格按写的指令指执行,
  且能关注变量每一次值的变化,
  这个时候可以使用,则编译器不会对执行指令作优化.
  
*/
    volatile int c=1;
    while(c<10000){
        c++;
        //printf("%d--\n",c);
    }
    
    //下面二者的效果是一致的
    int c=1;
    while(c<1000){
        c++;
     }
    //编译器优化之后可能是这样的.
    int c=999;
    
    return 0;
}


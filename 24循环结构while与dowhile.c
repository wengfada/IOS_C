/*循环结构while与do while的用法*/
#include <stdio.h>

int main(){
    
    /*while的用法
     
     while(条件){
        需要反复执行的代码
     }
    
    int a=0;
     
    while (a<10) {
        a++;
        printf("hello world!\n");
    }
     
      */
    
    
    
    /*
     
     do{
     
     需要反复执行的代码
     
     }while(条件);
     
    
     int a=0;
     
    while (a<10) {
        a++;
        printf("----hello world!\n");
    }
     
    do{
        a++;
        printf("hello world!\n");
        
    }while (a<0);
     
      */
    
    /*
     特点
     
     注意死循环的出现.会一直循环执行下去,除非程序强制退出.
     在终端下必须安control+c才能强制退出程序.终止死循环
     
    while(1){
        
    }
     
     如果碰到continue,则跳出本次循环继续下一次判断,如果条件成立继续执行循环.
     如果碰到break无论条件满足与否,循环立刻结束.
     continue与break跳出的都是当前所在的循环作用域.如果外层有循环,不受影响.
     do while至少执行一次.而while不一定.
     
    */
    
    
    int a=0;
    int b=1;
    
    while(b<3){
        
        while (a<10) {
            
            if(5==a){
                a++;
                continue;
                // a++;//在同一个作用域下continue下面不能写代码.因为不会执行.
            }
            
            //如果碰到break无论条件满足与否,循环立刻结束.
            if (8==a) {
                break;
            }
            
            printf("第%d次 ",a);
            printf("----hello world!\n");
            a++;
        }
        
        if (2==b) {
            break;
        }
        
        printf("外循环打印了\n");
        b++;
    }
        return 0;
    
}



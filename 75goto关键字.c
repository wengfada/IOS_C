/*goto 关键字*/
//让指令能够不受条件跨越执行.简化代码
#include <stdio.h>
int main(){
    
    int a=0;
    if(a==0){
        goto heima;
    }
    printf("itcast\n");//这行不会执行
     printf("itcast\n");//这行不会执行
     printf("itcast\n");//这行不会执行
     printf("itcast\n");//这行不会执行
    int b=0;
    
heima:printf("heima--%d\n",b);//直接跳到这里执行

    int c=0;
    
//    for (int i=0; i<10; i++) {
//         printf("i~~\n");
//        if(c==5){
//            break;
//        }
//        c++;
//        for (int f=0; f<10; f++) {
//             printf("f~~\n");
//            if(c==5){
//                break;
//            }
//            c++;
//            for (int e=0; e<10; e++) {
//                 printf("e~~\n");
//                c++;
//                if(c==5){
//                    break;
//                }
//                   
//            }
//        }
//    }
    
    for (int i=0; i<10; i++) {
        printf("i~~\n");
        c++;
        for (int f=0; f<10; f++) {
            printf("f~~\n");
            c++;
            for (int e=0; e<10; e++) {
                printf("e~~\n");
                c++;
                if(c==5)goto haha;
            }
        }
    }
    
      printf("哈哈,我跳出了~~\n");
 haha:printf("哈哈,我跳出了~~\n");
    
    return 0;
}
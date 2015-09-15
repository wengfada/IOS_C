/*选择结构之switch语句*/
#include <stdio.h>

int main(){
    
    /*
     
     1.条件结果只能是整数,而case只能是整型常量.注意:case ‘a’;
     2.break 可有可无,有则执行完跳出,没有则继续执行,直到遇到下一个break或执行完.
     3.default可有可无,有则如果条件都不满足,会执行这句,无则条件都不满足,执行结束.
     4.case下面要定义变量必须加{}.且case后的常量值不能重复
     5.switch语句可以全部用if语句替代.但if语句不能全用switch替代.

     */
    
    int a=5;
    
    switch (a) {
            
            //int b=2;
        case 'a'://==case 97:
            printf("a=1\n");
            break;
        case 2:
            printf("a=2\n");
            break;
        case 3:
            printf("a=3\n");
            break;
        case 4:
            
            printf("a=4\n");
            break;
//        default:
//            printf("没有匹配的int值\n");
//            break;
    }
    
    printf("------------\n");
 
    
    if(1==a){
         printf("a=1\n");
    }else if(2==a){
         printf("a=2\n");
    }else if(3==a){
         printf("a=3\n");
    }else if(4==a){
         printf("a=4\n");
    }else{
         printf("没有匹配的int值\n");
    }


        return 0;
}


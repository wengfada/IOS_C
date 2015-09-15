/*if语句练习*/

#include <stdio.h>

int main(){
    
    /*
     
    if(4){
        printf("A\n");
    }
     
    int a=0;
     
    if(a=0){
       printf("A\n");
    }
    
    int a=0;
     
    if(0==a)
        int b=0;
       printf("A\n");
     
    int a=0;
     
    if (a=0)
         printf("A\n");
     printf("B\n");
    
    int a=0;
    if (a++) {
        printf("A\n");
    }else{
        printf("a=%d\n",a);
    }
   
     
    int a=0;
     
    if (a++) {
        printf("A\n");
    }else if(a++){
        printf("a=%d\n",a);
    }else if(a>1){
         printf("---a=%d\n",a);
    }
     
      */
    
    
    /*
     
     1.任意输入一个整数成绩,如果大于等于80在控制台上打印优秀,
     大于等于70小于80分打印良好.大于等于60分小于70分打印及格,
     小于60分打印不及格.

     
    printf("请在控制台上输入一个整数\n");
    int a;
     
    scanf("%d",&a);
     
    if(a>=80){
        printf("优秀\n");
    }else if (a>=70&&a<80) {
        printf("良好\n");
    }else if(a>=60&&a<70){
        printf("及格\n");
    }else{
         printf("不及格\n");
    }
     
     */
    
    
    /*
     2.在屏幕上提示用户输入数字 ,输入1输出打印你好! 输入2 打印hello!
     */
    printf("请在控制台上输入0或1\n");
    int a;
    scanf("%d",&a);
    if (1==a) {
        printf("你好!\n");
    }else if(0==a){
          printf("hello!\n");
    }
    
    return 0;
    
}


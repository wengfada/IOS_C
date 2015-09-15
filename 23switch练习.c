/*switch练习*/
#include <stdio.h>

int main(){
    
    /*
     1.任意输入一个整数成绩,如果大于等于80在控制台上打印优秀,大于等于70小于80分打印良好.大于等于60分小于70分打印及格,小于60分打印不及格.
     
     思路:利用整数运算结果只能是整数如:80/10=8 81/10=8 84/10=8
  
    int a=0;
    printf("输入一个整数\n");
    scanf("%d",&a);
    a=a/10;
     
    switch (a) {
     
        case 10:
           
        case 9:
            
        case 8:
            printf("优秀\n");
            break;
        case 7:
            printf("良好\n");
            break;
        case 6:
            printf("及格\n");
            break;
            
        default:
            printf("不及格\n");
            break;
    }
     
        */
    
    
    printf("请输入0或1\n");
    int a=0;
    scanf("%d",&a);
    
    switch (a) {
        case 1:
            printf("你好!\n");
            break;
        case 0:
            printf("Hello!\n");
            break;
        
    }
    
    return 0;
    
}


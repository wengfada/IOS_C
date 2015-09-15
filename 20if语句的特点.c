/*选择控制语句if的特点*/

#include <stdio.h>

int main(){
    
    /*1.一次if语句只能执行给出的所有操作中的一个.
     
    int a=5;
     
    if (a>1) {
        printf("a>1\n");
    }else if(a++){
        printf("a>2\n");
    }else if(a>3){
        printf("a>3\n");
    }else if(a>4){
        printf("a>4\n");
    }else if(a>5){
        printf("a>5\n");
    }else if(a>6){
        printf("a>6\n");
    }else{
         printf("都不满足\n");
    }
     
     
    int a=3;
     
    if (a>1) {
     
        printf("a>1\n");
     
        if (a>2) {
            printf("a>2\n");
            if(a++){
                 printf("a++\n");
            }
        }
    }
     
     
     int a=1;
     
    if (a>1) {
     
         printf("a>1\n");
        if (a++) {
            printf("a>2\n");
        }
    }
   
     
    printf("a=%d\n",a);
     
     */
    
    
    /*
     if();这种用法时if语句只有紧跟后面一句有效.
     (读到下一个;号结束).且不能定义变量

    int a=0;
     
    if (a>1){
        int b=2;
    }
     
    printf("a=%d\n",a);
    printf("---a=%d\n",a);
     
     */
    
    
    
    /*
     
     3.除了if();这种用法,所有的if()与{}之间不能有;号
     
    int a=0;
    if(a>0);{
        
    }else{
        
    }
    
    int a=-1;
    if(a>0);{
        printf("sssss\n");
    }
      
     */
    
    
    /*
     
     if(条件判断){},里面的条件判断如果是与常量的等于判断,
     则常量写在前面(建议);

    int a=0;
    if(2==a){
        printf("sssss\n");
    }else{
        printf("a不等于2\n");
    }
     
     */
    
    
    
    /*
     以下两种写法都可以,但是,去了公司,以公司代码规范为准.
     
    if (<#condition#>) {
        <#statements#>
    }
    
    if (<#condition#>)
    {
        <#statements#>
    }
     
     */
    
        return 0;
}


/*
 scanf()函数的用法
 可以按用户指定的格式从键盘上把数据输入到指定的变量之中.

 1.可以单个或批量输入,但两个%%之间的分割内容必须按原样输入.
 2.格式化字符串不能用\n作换行.直接回车就可以表示结束并自动换行.


#include <stdio.h>
 
int main(){
 
    int a=0;
    int b;
    char c;
   // printf("a的值是:%d\n",a);
   // printf("请输入两个整数用逗号分隔\n");
    scanf("%d,%d,%c",&a,&b,&c);
    printf("a的值是:%d b的值是:%d c的值是:%c\n",a,b,c);
    return 0;
}
 
*/

/*练习*/

/*
 
#include <stdio.h>
int main(){
    int a=0;
    {
        int a=2;
        {
            a=3;
        }
    }
    printf("a的值是: %d\n",a);
}
 
 */


/*写一个整数乘法计算器,在控制台上输入任意两个整数会计算得出二者的乘积*/

#include <stdio.h>

int main(){
    
    int a,b;
    printf("请输入两个整数,用*号分隔\n");
    scanf("%d*%d",&a,&b);
     printf("这两个整数的乘积是:%d*%d=%d\n",a,b,a*b);
    
    return 0;
    
}

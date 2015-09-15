/*基本运算练习*/
#include <stdio.h>
int main(){
    
    
    /*
     
     1.int a=1.1;请问a打印的结果是什么?
     
    int a=1.1;
    printf("a=%d\n",a);
     
     */
    
    
    /*
     
     2. float a=1,请问a打印的结果是什么?
     
    float a=1;
    printf("a=%f\n",a);
     
     */
    
    
    /*
     
     3.double a=1/3;请问a打印的结果是什么?
     
     double a=(double)1/3;
     printf("a=%f\n",a);
     
     */
    
    
    /*
     
    4.int a=3++;这个正确吗?
     
    int a=3++;
    printf("a=%d\n",a);
     
     */
    
    
    /*
     
     5.int a=1; int b=a++;int c=++a; 请问a b c 三个的值是多少?
     
    int a=1;
    int b=a++;
    int c=++a;
     
    printf("a=%d b=%d c=%d\n",a,b,c);
     
     */
    
    
    /*
     
     6.int a=3!=2>1; 请问a的值是多少?
     
    int a=3!=2>1;
    printf("a=%d\n",a);
     
     */
    
    
    /*
     
     7.int a=0;  int b=1>2||a++; 请问a和b的值是多少?
    
    int a=0;  int b=1<2||++a;
    printf("a=%d b=%d \n",a,b);
     
      */
    
    /*
     
     8.int a=!-4<0||3&&2>5; 请问a的值是多少?
     
     小括号() > 负号( -) > ! > 算术运算符 > 关系运算符 > && > ||
     
    int a=!-4<0||3&&2>5;
     printf("a=%d\n",a);
     
     */
    
    
    /*
     
     9.int a=3?2>3:5+5;请问a的值是多少?
     
    int a=3?2>3:5+5;
     printf("a=%d\n",a);
     
     */
    
    
    /*
     
     10.int a=‘a’; a的结果是多少?  sizeof ‘a’ ==sizeof(char),对还是错?
     
     */
    
    int a='a';
     printf("a=%d\n",a);
    
    
    /*
     
     11.警告(warning) 与错误(error)的有什么区别?
     1.warning可以忽略.但是error不可以
     2.出现warning依然可以编译并运行.但是出现error编译不成功.无法运行.
     
     */
    
     return 0;


}



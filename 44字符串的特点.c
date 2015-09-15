/*字符串的特点*/
#include <stdio.h>
#include <string.h>
int main(){
    
    /*
     
1.后面必须有’\0’结尾.否则只算普通的字符数组.但’\0’不会输出,只表示字符串结束.
2.字符串输出占位用%s必须遇到\0.才能结束,否则会继续输出更高位地址值的字符.

    
    char arr[]="heima";
    char s[]="abc";//等效于:char s[]={'a','b','c','\0'};
    //没有定义长度,则后面初始化几个元素,长度为几.
    char s1[]={'a','b','c'};
    char ss[]="haha";
    char s3[3]="abc";//这个表示的是一个字符数组.因为长度不够,没法加'\0';
    char s4[4]={'a','b','c'};
    printf("s=%s,s1=%s,ss=%s,s4=%s\n",s,s1,ss,s4);
    printf("%lu\n",sizeof s);
     */
    
    
    /*
     
3.strlen函数用于计算一个字符串的长度(字符数量),使用必须引入<string.h>.
4. strlen不会计算\0.且碰到\0结束,但是sizeof不受\0影响,且长度会包含\0.
     
     */
    
    char s5[]="abc";
    int a=strlen(s5);
    int b=sizeof(s5);
    char s6[]="你好he\0llo";//中文字符==3个英文字符.
    int c=strlen(s6);
    int d=sizeof(s6);
    
    //printf("a=%d,b=%d\n",a,b);
    printf("c=%d,d=%d\n",c,d);
    
    return 0;
    
}
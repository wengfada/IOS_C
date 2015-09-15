/*进制*/
#include <stdio.h>

//二进制:0b或者0B开头 八进制:0开头 十进制:直接写 十六进制:0x或0X开头

int main(){
    
    int a=010;
    
     //%o:表示输出不带符号八进制整数
    printf("%o\n",a);
    int b=0xf;
    
    //%x:表示输出不带符号十六进制整数
    printf("%x\n",b);
    int c=-5;
    
     //%u:表示输出不带符号十进制整数
    printf("%d---%u\n",c,c);
    int d=1;
    1byte=8bit;
    float f=16f;//16.0f才是正确的
    
    printf("%f\n",f);
    
    return 0;
    
}
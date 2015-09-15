/* 39进制及内存分析思考练习.c*/
#include <stdio.h>
void printfBinary(int a);
int main(){
    
    /*
     
    //00000000 00000000 00000000 00000001
    //1.变量寻址,从大到小.以所在的内存中第一个字节(地址值最小的那一个)为当前变量的地址.
        二进制表现形式是高位字节对应高位二进制
    int a=1;
    int b=3;
    char c='a';
     
    //二进制:0b;八进制:0开头 十六进制:0x.不区分大小写
    //8.-128~127 unsigned 0~255;
    
    unsigned long int;short;long long
    long long>long >int>short
     
    printf("%c\n",200);
     
    */
    
    
    /*
     
     1.用位运算实现两个整数值的互换.
     2.用位运算判断一个整数的奇偶性.
     3.编写一个函数输出一个整数的二进制表现形式.

     */
    
    
    /* 
     1.用位运算实现两个整数值的互换.
     
     方法一:用临时变量
     
    int a=1;
    int b=2;
    printf("a=%d,b=%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d\n",a,b);
     */
    
    
    /*
     方法二
     
    int a=1;
    int b=2;
     printf("a=%d,b=%d\n",a,b);
    a=b-a;
    b=b-a;
    a=b+a;
     printf("a=%d,b=%d\n",a,b);
     
     */
    
    
    /*
     
     方法三:用位运算
     
    //printf("1^8^8=%d\n",1^8^8);
    int a=1;
    int b=2;
    printf("a=%d,b=%d\n",a,b);
    a=a^b;//1^2;
    b=a^b;//==a^b^b;==1^2^2
    a=a^b;//==a^b^a;==1^2^1
    printf("a=%d,b=%d\n",a,b);
     
     */
    
    /* 
     2.用位运算判断一个整数的奇偶性.
     
    int a=4;//4%2=0 5%2=1 6%2=0 7%2=1
     
    if(0==a%2){
        printf("a=%d是偶数\n",a);
    }else{
        printf("a=%d是奇数\n",a);
    }
     
    //0==a%2?printf("a=%d是偶数\n",a):printf("a=%d是奇数\n",a);
    !(a%2)?printf("a=%d是偶数\n",a):printf("a=%d是奇数\n",a);
    
    0011 1111
   &0000 0001
    ---------
    0000 0001
    1 0001
    2 0010
    3 0011
    4 0100
     
     !(a&1)?printf("a=%d是偶数\n",a):printf("a=%d是奇数\n",a);
     
    */
    
    
    printfBinary(12);
    printf("%d\n",~0);
    
    return 0;
    
}

/*
 3.编写一个函数输出一个整数的二进制表现形式.
 
 int a=3;
    0               0000000 00000000 00000000 00000011
 &  00000000 00000000 00000000 00000001
   --------------------------------------
    00000000 00000000 00000000 00000001
  000000....1
 
  30&1  29&1  28&1 27&1....0
 
 思路:
 1.把每一个二进制位取出来,输出打印不换行,就可以了.
 2.需要从高位(从前向后取)向低位取二进制.
 3.取出每一位二进制.
 4.用右移把二进制从最高位开始,一个一个的与&1.得出当前这一位的值.打印输出
 5.直到取出最后一位二进制去打印.这个时候不用右移.即>>0为最后一次
 
 */


//输出一个整数的二进制表现形式
void printfBinary(int a){
    
    //打印符号位
    if(a<0){
       printf("1");//负数
    }else{
        printf("0");//正数
    }
    
    //int count =30;//是以4个字节来计算.
    int count =(sizeof(int)*8)-2;
    int temp=0;
    
    while (count>=0) {
        
        temp=a>>count&1;
        printf("%d",temp);
        //if(0==count%8){//每8个空一格
        if(0==count%4){//每4个空一格
            printf(" ");
        }
        count--;
    }
    
    printf("\n");
    
    
}

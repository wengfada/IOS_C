/*算术运算*/
#include<stdio.h>

int main(){
    
    /*
     
    int a=4;
    int b=2;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n",a%b);//取余数%.101%2=1,1001%2=1;
     
    printf("%d\n",1.1%1.2);//取余数只能是整数
   
    int a=1.8;//高精度向低精度转换,会丢失精度
    printf("%d\n",a);
    double d=1;//低精度向高精度转换,会自动提升精度.(double)1;
    printf("%f\n",d);
     
   //强制类型转换
    int a=(int)1.8;//不会提示警告
    printf("%d\n",a);
  
    //运算优先级是.从左到右 但: * = / = % > + = -  如果要人为改变则加().
    int a=(2+3)*4/5%6;
    printf("%d\n",a);
     
    //运算时两个数据精度不一样,会自动类型转换,且是低精度向高精度转换
    int a=1.2+3;//1.2+3.0=4.2---4;
    double d=1.2+3;//1.2+3.0=4.2;
     printf("%.1f\n",d);
     
      */
    
    
    //强制提升一个精度.另一个精度会自动提升.
    
    double d=(double)2/3;//2/3=0.666--0--d;
     printf("%f\n",d);
    
 
    
    return 0;
    
}


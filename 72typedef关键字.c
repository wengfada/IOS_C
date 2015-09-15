/*typedef*/
#include <stdio.h>
typedef long int Lint;

//结构体
typedef struct Person{
    char *name;
    int age;
} StPerson;



//数组
//typedef int  arr [5];

//这种方式定义:既可以用类型本身的方式,也可以用别名的方式定义.
typedef enum Status{
    NO,
    YES,
} eStatus;

//这种只能用别名的方式
typedef enum{
    WRONG,
    RIGHT,
} eStatus1;

#define  Lint1 long int

#define String char *

typedef char * str;

int main(){

    
    //基本数据类型
    Lint a=10;
    printf("%ld\n",a);
    
    //结构体
    //struct Person per={"张三",20};
    StPerson per={"张三",20};
    printf("name=%s,age=%d\n",per.name,per.age);
    
    //指针
    char *name="heima";
    str name1="heima";
    printf("%s---%s\n",name,name1);
    
    //数组
//    int arr0[5]={1,2,3,4,5};
//    arr arr1={1,2,3,4,5};
//    
//    for (int i=0; i<5; i++) {
//        printf("%d\n",arr1[i]);
//    }

    
    //定义在函数内
    typedef int  arr [5];
    arr arr1={1,2,3,4,5};
    for (int i=0; i<5; i++) {
            printf("%d\n",arr1[i]);
      }
    
    
    //枚举
    eStatus es=YES;
    enum Status es1=NO;
    printf("es=%d,es1=%d\n",es,es1);
    
    
    //这个时候typedef与宏定义可以互换
    Lint1 b=15;
    printf("b=%ld\n",b);
    
    
    /*
     宏定义可以实现一些typedef的功能,但是不能完全替换,
     因为typedef本自具有类型的含义.这是二者最大的区别.
    */
    
    //char *s1,s2;//这个表示:s1是指针类型,但是s2是char类型
    String s1,s2;//宏定义的方式
    s1="hello";
    s2='a';
    printf("%s---%c\n",s1,s2);
    
    str s3,s4;//typedef的方式
    s3="hello";
    s4="你好";
    printf("%s---%s\n",s3,s4);
    
    eStatus1 es2=WRONG;
    printf("es2=%d\n",es2);
    
    return 0;
}





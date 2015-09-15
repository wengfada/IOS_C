/*结构体的特点*/
#include <stdio.h>

int add();

int main(){
    
    /*
     最基本的定义方式
    struct Person{
        char *name;
        int age;
    };
    struct Person per={"itcast",20};
    */
    
    
    
    /*
     第二种
     
    struct Person{
        char *name;
        int age;
    } per={"itheima",18};
     
    或
     
    struct Person{
        char *name;
        int age;
    } per;
    per.name="itheima";
    per.age=18;
      */
    
    
    /*
     错误
    struct Person{
        char *name;
        int age;
    } per;
    per={"itheima",18};//错误
     */
    
    
    /*
     错误

    struct {
        char *name;
        int age;
    };
    struct per={"heima",19};
      */
    
    
    /*错误
    struct {
        char *name;
        int age;
        int a;
    };
   */
    
    
    /*正确.第三种方式--匿名类型结构体(*注意必须同时初始化变量)
     这种结构体定义方式,不能重用.--不推荐 了解就好.
     
    struct {
        char *name;
        int age;
    } per={"heima",19};
    struct {
        char *name;
        int age;
    } per1={"heima",19};
     */
    
    
    /*2. 同一作用域内不可重复定义结构体类型和结构变量.匿名类型结构体除外;
    struct Person{
        char *name;
        int age;
    };
     
     //错误,重名了.
    struct Person{
        char *name;
        int age;
        int a;
    };
 
    struct Person per1={"heima",19};
    struct Person per2={"itcast",19};
     */
    
    
    //struct Person per2={"itcast",19};
    add();
    
    return 0;
}

/*全局结构体*/
struct Person{
    char *name;
    int age;
    int a;
};

struct Person per1={"heima",19,8};


/*
 
3.可在函数内也可在函数外,效果及用法类似于局部变量和全局变量.也可嵌套定义.
4.可同时在函数内外定义同一个类型,使用同样遵循就近原则,结构体变量也是如此.
 
*/


int add(){
    
    struct Sun{
        char *name;
        int age;
        
    };
    
    /*嵌套定义.*/
    struct Person{
        char *name;
        int age;
        struct Sun baby;
        
    };
    
    struct Person per1={"heima",19,{"baby",1}};
    printf("name=%s--age=%d--a=%d\n",per1.name,per1.age,per1.baby.age);
    
   // printf("name=%s--age=%d--a=%d\n",per1.name,per1.age,per1.a);
    
    return 0;
    
}








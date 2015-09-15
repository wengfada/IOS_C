/*结构体的基本用法*/
#include <stdio.h>

int main(){
    
    /*
     指针字符串及字符数组字符串区别的补充
     char *p="haha";
     p="heihei";//正确
     //p[0]='q';//错误
     char arr[]="haha";
     arr[0]='q';//正确
     arr="heihei";//错误
     arr[0]='h';//正确
     ...
     printf("%s\n",arr);

     */
    
    
    /*
     定义:1.定义结构体类型 struct 结构体类型
            {数据类型1 名称;数据类型2 名称;…};
    
     */
    
    struct Person{
        char *name;
        int age;
        
    };
    
    // 2.定义结构体变量及赋值: struct 结构体类型 变量名={数据1,数据2….};
    struct Person p1={"itheima",18};
    
    //使用
    
    //取值:变量名.结构体元素变量名;	赋值:变量名.结构体元素变量名=新值;
    printf("name=%s---age=%d\n",p1.name,p1.age);
    
    //赋值:变量名.结构体元素变量名=新值;
    p1.name="itcast";
    p1.age=20;
    printf("name=%s---age=%d\n",p1.name,p1.age);
    
        return 0;
}









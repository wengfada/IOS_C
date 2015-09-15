/*结构体数组*/

#include <stdio.h>

int main(){
   
    

//定义及初始化赋值:  struct 结构体类型 数组名[长度]={结构体1,结构体2};
    struct Person{
        char *name;
        int age;
    };
    
    struct Person per={"itheima",2};
    struct Person per1={"itcast",3};
    struct Person arr[2]={per,per1};
    
    //取值:数组名[角标];单独赋值:数组名[角标]=新的结构体;
    printf("%s---%d\n",arr[1].name,arr[1].age);
    
    return 0;
}
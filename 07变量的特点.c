
/*
 
 变量的特点:
 1.创建一个变量相当于在内存中占用了一块空间
 2.这个空间的大小是固定的,但里面的数据可以改变
 3.同一个作用域内不能有相同的变量名.
 4.初始化时创建,在函数作用域执行完后失效,且内存空间释放.

 
#include <stdio.h>
 
int add(){
 
    int num;
    return 0;
}
 
int main(){
 
    int num;
    num =2;
   // int num=3;不能在同一个作用域下定义同一个变量
    int a=100;
    return 0;
 
}
 
 */


/*
 
 作用域
 
 1.不同函数属于平行作用域.平行作用域没有干扰.
 2.同一个函数下的作用域可以有多个.嵌套作用域.子作用域内部创建变量跟外部没有关系.但是可以用外部的变量.(就近原则)
 3.子作用域定义的变量,只在本作用域内有效.在父作用域内是用不了的.
 
 */


#include <stdio.h>

int add(){
    
    int num;
    return 0;
}

int main(){
    
    //int num;
    add();
    // num =2;
    
    {
        int num=3;
        
        {
            //内部作用域可以使用并修改外部作用域定义的变量.
            num=4;
        }
        
       // printf("内部的num是: %d\n",num);
        
    }
    
    //外部作用域不能使用内部作用域定义的变量
    printf("外部的num是: %d\n",num);
    int a=100;
    return 0;
    
}

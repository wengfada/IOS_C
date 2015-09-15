/*结构体的指针*/
#include <stdio.h>

int main(){
    
    //定义及初始化赋值: struct 结构体类型 *指针名=&结构体变量
    struct Person{       
        char *name;//8字节
        int age;//8字节(如果下面char c没有注释掉,那么是4个字节)
        //char c;//4个
    };
    
    struct Person per={"itheima",2};
    struct Person *p=&per;
    
    /*
     
     操作
     取值: (*指针名).结构体元素名;等效于:	
            指针名->结构体元素名; (结构体独有的用法)
     
     赋值: (*指针名).结构体元素名=新值;	指针名->结构体元素名=新值
     
     */
    
    
    //printf("%s==%d\n",(*p).name,(*p).age);
    // printf("%s==%d\n",p->name,p->age);
    
    p->name="itcast";
    p->age=3;
    (*p).name="heima";
    (*p).age=4;
    
     //printf("%s==%d\n",p->name,p->age);
    //结构体名并不包含第一个元素的地址.
   // char **ps=per;//这是错误的
    
    char **ps=&(per.name);
    int *pi=&per.age;
    
    //int a=5;
    //int *p3=&a;//*p3==a;
    //per.name;
    
    char *p4="heima---";
    printf("name=%s-p4=%s--age=%d\n",*ps,p4,*pi);
    
    struct Person2{
        char c;//4个字节
        int a;//4个字节
    };
    
    /*
     
     结构体分配内存空间遵循两个原则  -对齐原则或对齐算法.(增加cpu寻址效率)
     
     1.每个元素的偏移量(当前元素首地址距离整个结构体首地址的字节数)
     必须是自已所占有字节数的整数倍.如果不够补齐上一个元素的字节数.
     
     2.整个结构体的字节数必须是其最大元素所占字节的整数倍.如果不够,
     最后一个元素填充字节.
     (注意:如果是数组,比较的是里面存的元素类型的字节数,而不是整个数组的
     如:int arr[20];arr是80个字节,而char *p是8个字节,但是arr里的元素是int字节
     占4个字节,所以是以char *p为最大元素.那么整个结构体应为8的整数倍,而不是80的)
     
     */
    
    printf("%lu\n",sizeof(struct Person));
    return 0;
    
}






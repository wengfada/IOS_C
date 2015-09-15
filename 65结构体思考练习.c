/*结构体思考练习*/

#include <stdio.h>

int main(){
    
    /*
     联合体或共同体与结构体的区别---了解
     
        1.联合体只能够存一个元素.里面有多个少元素的声名只是表示这块空间能够存这些类型的元素.结构体可以同时存在多个
        2.联合体的字节总长度是里面能定义的最大字节数元素的长度.结构体是最大元素的倍数.
       */
    
    union Person5{
        char *name;
        int age;
        char c;
    } per5;
     
    per5.name;
    per5.age;
    per5.c='a';
       printf("name=%s,age=%d,%d\n",per5.name,per5.age,per5.c);
   
    
    
    
    /*
     
     结构体与数组有什么区别?
     
     1.结构体可以存不同类型的元素,而数组只能存同一类型
     2.结构体类型需要我们自已定义.数组是用别的类型加[]
     3.结构体内存分配方式很特别,使用对齐原则,不一定是所有元素的字节数和,而数组一定是所有元素的字节数和.
     4.结构体指针可以指针名->结构体元素名(取元素);数组不行.
     
     */
    
    
    
    /*
     
    1.定义一个结构体,然后打印里面的每一个元素.(两种方式:结构体变量和指针)
    
    2.用结构体定义一个三口之家.家里每个成员都有:姓名,年龄,身份(如:父亲).
    
    3.打印这个三口之家的所有成员信息.
     
     */
    
    struct Person{
        char *name;
        int age;
        char *status;
    } per={"张三",18};
    
    
    /*
     
    printf("name=%s,age=%d\n",per.name,per.age);
    struct Person *p=&per;
    printf("name=%s,age=%d\n",p->name,p->age);
     
    */
    
    
    struct Person f={"成龙",60,"老爸"};
    struct Person m={"林凤娇",58,"老妈"};
    struct Person s={"房祖名",30,"龙太子"};
    struct Person pers[3]={f,m,s};
    
    for (int i=0; i<3; i++) {
        
         struct Person *p=pers+i;
         printf("name=%s,age=%d,status=%s\n",p->name,p->age,p->status);
    }
    
    return 0;
    
}

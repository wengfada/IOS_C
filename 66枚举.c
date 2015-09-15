/*枚举*/
#include <stdio.h>

int main(){
    
    /*
     
     1.定义枚举类型 enum 枚举类型{元素1 , 元素1 , …}; 
     或{元素1=0,元素2=1,}

     */
    
    enum Day{
        
        MONNING,//0
        NOON,//1
        NIGHT,//2
        
    };
    
    
    //2.定义枚举变量及赋值: enum 枚举类型 变量名=对应枚举里的一个元素名;
    enum Day daystatus=MONNING;
    
   // 取值:变量名=枚举元素名;
    daystatus=MONNING;
    printf("daystatus=%d\n",daystatus);
    
    daystatus=NOON;
    printf("daystatus=%d\n",daystatus);
    
    daystatus=NIGHT;
    
    /*用普通变量*/
    
    int status=0;//这个0表示早上
        status=1;//如果等于1表示中午
        status=2;//如果等于2表示晚上.
    
    printf("daystatus=%d\n",daystatus);
    /*注意:枚举一旦类型定义成功之后里面的数据常量不能再更改*/
    
    int a;//0表示关 1表示开,没有其它的取值
    a=1;
    a=0;
    
   // 等效于:
    enum Status{
        CLOSE,
        OPEN,
    } nowStatus;
    
    //3.同一个作用域内不能出现重复的元素.不同的枚举类型也不行.
    enum Status2{
        CLOSE,
        OPEN=0,
    } nowStatus;
    
    /*
     
    enum Status{
        CLOSE=1.2,//错误
        1,//错误
    } nowStatus;
     
     */
    
    //nowStatus=OPEN;
    nowStatus=CLOSE;
    printf("a=%d---nowStatus=%d\n",a,nowStatus);
    
    
    return 0;
}



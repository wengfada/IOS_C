/*while语句思考练习*/

#include <stdio.h>

int main(){
    
    /*
     
     计算1+2+3+….+100的值.
     
     需要两个变量:一个是累加值,一个累加数
     1+2+3+4+5.....+100;
     ((0+1 + 2)+3)+4
    
    int count=0;//累加值
    int num=1;//累加数;
     
    while (num<=100) {
        count+=num;//===count=count+num;
        num++;
    }
     
    printf("1+2+3+..+100的值是:%d\n",count);
     
      */
    
    
    /*
     
     计算出100以内所有的积数的个数.
     
     1.需要知道有几个变量:个数.累加数
     2.找规律:1%2=1 2%2=0;3%2=1;4%2=0;
     3.让每个数去%2,如果结果等于1表示是积数.让个数加1;

    int count=0;//计数器-个数
    int num=0;//累加数
     
    while (num<=100) {
        if (1==num%2) {
            count++;
        }
        num++;
    }
     
    printf("100以内积数的个数是:%d\n",count);
     
     */
    
    
   /* 以下循环的次数是多少?-死循环*/
    
    int i=0;
    
    while(i<10){
        //i++;
        if(i<1)
            continue;
        if(i==5)
            break;
        i++;
    }

    return 0;
    
}

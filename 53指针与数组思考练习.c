/*指针与数组思考练习*/

#include <stdio.h>

int main(){
    
     /*
      
      int a=1;
      int b=2;
      int *p=&a;
      p=p+1;
      p-=1;
      p*=1;
      p/=1;
    
   
     1. 定义一个指针数组,并把它的值赋值给一个指针.
    
    int *p1=&a;
    int *p2=&b;
    int *arr[2]={p1,p2};
    int **p=arr;//需要一个二级指针类型去接收它.(指针的指针)
      
     */
    
    
    /*
     
     2.用指针实现数组(int arr[3]={1,2,3})所有元素的打印.
    
    int arr[3]={1,2,3};
    int *p=arr;
    int (*p1)[3]=&arr;//表示整个数组的指针.
     
    for (int i=0; i<3; i++) {
        //printf("%d\n",arr[i]);
       // printf("%d\n",*(p+i));//方法一
        //printf("%d\n",p[i]);//方法二:p[i]==p[0+i];
        
        //方法三:
        printf("%d\n",(*p1)[i]);//(*p1)等效于arr;
    }
     
    */
    
    
    /*
     
     经典面试题.
     下面打印出来的结果是什么？答案:2,5
     int a[] = {1, 2, 3, 4, 5};
     int *p = (int*)(&a + 1);
     printf("%d, %d\n", *(a+1), *(p-1));

     */
    
    int a[] = {1, 2, 3, 4, 5};
    int *p = (int*)(&a + 1);
    printf("%d, %d\n", *(a+1), *(p-1));//整个数组的指针与数组元素的指针的区别

    return 0;
}






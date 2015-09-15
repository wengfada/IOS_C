/*指针与二维指针数组*/

#include <stdio.h>

int main(){
    
    /*
     一,什么是二维指针数组?
     是一个数组.里面的每一个子数组存的元素的类型是指针.

    
    int a=0,b=1,c=2,d=3,e=4,f=5;//定义int型变量
     
    //获取所有变量的指针
    int *pa=&a;
    int *pb=&b;
    int *pc=&c;
    int *pd=&d;
    int *pe=&e;
    int *pf=&f;
     
    //定义这个二维指针数组.
   
    int *p[2][3]={{pa,pb,pc},{pd,pe,pf}};
   int * ptemp= p[1][1];
    printf("pe=%p,ptemp=%p,e=%d\n",pe,ptemp,*ptemp);
     
     */
    
    /*
     
     一,什么是二维数组的指针?
     是一个指针,只是指针类型是二维数组.

     */
    
    //int arr[2][3]={{1,2,3},{4,5,6}};//这是一个二维数组
    //int arr[2][3]={1,2,3,4,5,6};//等效于上面的方式.
    //printf("%d\n",arr[1][2]);
    //int (*p)[2][3]=&arr;//就是一个二维数组的指针.
    
    //操作.
    //int a=arr[1][0];
    //arr[1][0]=10;
    //a=arr[1][0];
    //arr[1][0]=10;
    //printf("%d\n",arr[1][0]);
    //(*p)[1][0]=10;
    //printf("%d\n",(*p)[1][0]);
    
    /*指针的指针:二级指针*/
    
    int a=10;
    int *p1=&a;
    int **p=&p1;
    // p1==*p;二者等效
    //*p1==a;二者等效
    //*(*p)==a;二者等效
    
    printf("%d\n",**p);
    
    return 0;
    
}





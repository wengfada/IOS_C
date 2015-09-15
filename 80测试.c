#include <stdio.h>
int main(){
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    
    
    
    //在控制台上输入整数,创建一个长度为3的int数组,
    //并且,用int指针数组的方式求最大值
    
    //1.在控制台上输入整数,创建一个长度为3的int数组
    int a=3;
    int intArr[3];
    for (int i=0; i<3; i++) {
       
        scanf("%d",&a);//把控制台输入的数赋值给a;
        intArr[i]=a;//再把a的值存到数组中去.
        //循环执行三次就放了三个数
    }
    //去遍历(打印)数组里的每一个值
    for (int i=0; i<3; i++) {
        printf("%d\t",intArr[i]);
    }
    
   // 2.用int指针数组的方式求最大值
      //定义好了一个int指针数组
    int *p1=&(intArr[0]);
    int *p2=&(intArr[1]);
    int *p3=&(intArr[2]);
    
    int *arr[3]={p1,p2,p3};//(int指针类型)的组数`
    
    //用指针取一个数组的最大值
    int tempMax=*(arr[0]);
    //printf("tempMax==%d\n",tempMax);

    for (int i=0; i<3; i++) {
       // printf("%p\n",arr[i]);//打印里面的元素,元素类型是指针
        
        if (tempMax<*(arr[i])) {
            tempMax=*(arr[i]);
        }
        
       // printf("%d\n",*(arr[i]));
    }
    printf("tempMax=%d\n",tempMax);
     */
    return 0;
}





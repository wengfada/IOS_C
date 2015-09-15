/*数组思考练习*/
#include <stdio.h>

int main(){
    
    /*
     
    int arr[]={1,2};//==int arr[2]={1,2};
    int arr2[3]={1,2,2};
     
    for (int i=0; i<3; i++) {
        printf("%d\n",arr2[i]);
    }
     
    */
    
    
    /*
     
     已知有一个int数组:int arr[6]={1,2,4,3,8,5};
     
     1.编写一个函数求这个数组的最大值:

    
    int arr[6]={1,2,4,3,8,5};
    int tempMax=arr[0];
     
    for (int i=1; i<6; i++) {
        if(arr[i]>tempMax){
            tempMax=arr[i];
        }
    }
     
    //printf("arr数组的最大值是:%d\n",tempMax);
     
   */
    
    
    
    /*
     2.给这个数组从大到小排序.(两种方式)--选择排序.冒泡排序(自已实现)
     
    int arr[6]={1,2,4,3,8,5};
    int tempIndexMax=0;//定义一个变量保存角标
     
    for (int i=0; i<6-1; i++) {
        tempIndexMax=i;//每一次把要操作的角标先设置为第一个值的.
        for (int j=i+1; j<6; j++) {
            if(arr[tempIndexMax]<arr[j]){//然后开始与剩余的数据挨个比较
                tempIndexMax=j;//把值较大的角标先存着
            }
        }
     
    printf("%d\n",tempIndexMax) ;//循环一次,当前存的角标为当前最大值的角标.
     
     //让其与当前比较范围的第一个数作交换.
        int temp=arr[i];
        arr[i]=arr[tempIndexMax];
        arr[tempIndexMax]=temp;
     
     //交换成功.打印当前这数组.当整个外循环执行完后的最后一次打印的为排序后的数组.
        for (int i=0; i<6; i++) {
            printf("%d\t",arr[i]) ;
        }
        printf("\n");
        
    }
     
*/
    
/*
     3.用一个二维数组实现打印右边的星形.
 
     思路:
     1.定义一个二维数组.
     2.发现只有两种态对于每个元素.要么星星,要么空格.
     3.所以用0表示空格.用1表示星星.
 
*/
    
    int arr[4][7]={{0,0,0,1,0,0,0},{0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,1,1,1,1}};
    
    for (int i=0; i<4; i++) {
        
        for (int j=0; j<7; j++) {
            if (0==arr[i][j]) {
                printf(" ");//如果元素是0,则打印空格,否则打印星星.
            }else{
                 printf("*");
            }
        }
        
        printf("\n");
    }
    
    return 0;
    
}






/*
 递归
 是指在函数的定义中使用函数自身的方法,说白了就是一个函数自已调用自已.
 当有一些反复的操作,但没有告知明确次数的时候可以用递归.

 */
#include <stdio.h>

int add(int a);

int main(){
//    int count=add(3);
//
//    printf("%d\n",count);
//    int a=1;
//    for (int i=0; i<5; i++) {
//        a++;
//    }
    
    
    //可以用循环实现递归的所有操作.
    int b=100;
    int count=0;
    //5+4+3+2+1+0
    while (b>0) {
        count+=b--;
        //b--;
    }
     printf("%d\n",count);
    return 0;
}


/*
 
 让任意一个整数倒序累加至0的值,如:为3时:3+2+1+0;

0 0         add(0);
1 1+0       add(1)=1+ add(0);
2 2+1+0     add(2)=2+ add(1);
3 3+2+1+0   add(3)=3+ add(2);
4 4+3+2+1+0 add(4)=4+ add(3);
.....
 递归能够正常结束的必要条件是:必须在一个节点能返回一个确切的值,不再继续调用
 
 */

int add(int a){
    
    printf("%d\n",a);
    //必须要有明确有结束节点
    if(a==0)return 0;
    
    return a+add(a-1);
}	


/*
 
 死递归,要极力避免
int add(){
    add();
}
 
*/
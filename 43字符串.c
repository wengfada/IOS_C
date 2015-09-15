/*字符串的用法*/
#include <stdio.h>
#include <string.h>

int main(){
    
    /*
     定义及初始化:  char arr[]=“abc”;
     或char arr[4]={‘a’,’b’,’c’,’\0’}
     */
    
    //'\0'的ASCII是0.所以这里也可以写义为:char arr[]={'a','b','c',0};
    char arr[]={'a','b','c','\0'};
    char arr1[]="abc0";//这里的0表示字符0.(*注意)
    printf("%s----%s---%d\n",arr,arr1,'\0');//输出字符串变量.
    printf("你好\n");//输出字符串常量.
    
    //arr1[]="abc";//错误.
    
    /*以下全是错误的
    int arr[4];
    arr={1,2,3,4};
    int arr[4]={1,2,3,4};
    arr={2,2,3,4};
     
    这样才正确.批量赋值只能在初始化的时候
    arr[0]=1;
    arr[1]=2;
     
     */
    
    
    /*
     正确,但是麻烦.只有改变字符串中某一个字符时,或需要取字符串中某一个元素的时候比较适用.
    arr1[0]='s';
    arr1[1]='d';
    arr1[2]='f';
     
     */
    
    
    //赋值:strcpy(字符变量名,“字符串");需要引入#include <string.h>.
    strcpy(arr1,"1234");
    printf("%s\n",arr1);
    
    return 0;
    
}

/*字符串思考练习*/
#include <stdio.h>
#include <string.h>

int isHasChar(char arr[],char c);

int main(){
    char arr[]="abc";
    
    //printf("%c\n",arr[0]);
    
    /*
     
     1.定义一个字符串数组.并打印所有字符串.
     思路:
     1.需要去定义一个字符串数组
     2.因为字符串是字符数组.所以字符串数组是一个二维数组.
     3.打印每个二维数组元素.
     
     */
    
    char strs[3][10]={"hahah","haha","heima"};
    
    //等效于:char strs[3][10]={{'h','a','h','a','h'},...};
    
    /*
     
     等效于:
     strs[0][0]='h';
     strs[0][1]='a';
     strs[0][2]='h';
     .....
     
     .*/
    
    
    /*
     
     错误的
    char strs1[3][10];
    strs1[0]="haha";
     
     */
    
    
//    for (int i=0; i<3; i++) {
//        printf("%s\n",strs[i]);
//    }
//    
    
    
    /*
     
     2.编写一个函数判断一个字符串中是否包含某个字符,包含返回1,不包含返回0.
     (用两种方法).
     思路:
        1.定义一个函数.返回值是int 参数是:字符串,字符
     
     */
    
    
    char s6[]="hello";
    int d=isHasChar(s6,'l');
    printf("%d\n",d);
    
    return 0;
}

/*
int isHasChar(char arr[],char c){

    int result=0;
    for (int i=0; i<strlen(arr); i++) {
        if(arr[i]==c){
            result=1;
            break;
            //return 1;
        }
    }
    return result;
}
*/

/*方式二*/
int isHasChar(char arr[],char c){
    
    int i=0;
    //'\0'.对应的int值=0;
    while (arr[i++]!='\0') {
       if(arr[i]==c){
           return 1;
        }
       
    }
    
    return 0;
}









/*指针与字符串思考练习*/
#include <stdio.h>
#include <string.h>
int main(){

    
    /*
     编程题:
     1.char *str=“123abc”;请用指针遍历这个字符串的每一个字符.
     
     
    char *str="123abc";
    for (int i=0; i<strlen(str); i++) {
        printf("%c\n",str[i]);
    }
     
     */
    
     /*
      
      2.把 char *str=“123abc”;变成一个字符数组.
      
      */
    
    char *str="123abc";
    char arr[strlen(str)+1];
    
    for (int i=0; i<strlen(str); i++) {
        //printf("%c\n",str[i]);
        arr[i]=str[i];
    }
    
    printf("str=%s,arr=%s\n",str,arr);
    
    return 0;
    
}
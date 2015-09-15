/*文件操作
 
 typedef struct
 {
 int fd;//文件号
 int cleft;//缓冲区中剩下的字符
 int mode;//文件操作模式
 char *nextc;//下一个字符位置
 char *buff;//文件缓冲区位置
 }FILE;

 
 */
#include <stdio.h>

int main(){
    
    /*
     
     操作文件的三个步骤:
     1.打开一个文件.同时确定你想操作的方式.
     2.开始操作.
     3.操作完成,关闭文件
     
     */
    
    /*
     
     对字符的读和写
    
    
    //打开要操作的文件
   FILE *readFile= fopen("78文件操作.c","r");//确定要读取的文件
    FILE *readWrite= fopen("test.c","w");//确定要写入的文件
    
    //操作文件
    char c=fgetc(readFile);//读取第一个字符
    //NULL:表示文件打开错误,只有在文件正确(成功)打开时,才对文件操作.
    if(readFile!=NULL&&readWrite!=NULL){
        
        //EOF:表示这个文件读取到了最后一个字符或文件读取出错.
        while (c!=EOF) {        //printf("%c\n",c);
            fputc(c,readWrite);//写入字符
            c=fgetc(readFile);//读取下一个字符
        }
        
    }
    //操作完成,关闭文件.
    fclose(readFile);
    fclose(readWrite);
     
      */
    
    
    /*
     
     字符串读写函数：fgets(字符缓存,数量,文件指针)读
     和fputs(字符缓存,文件指针)写;

     */
    //打开要操作的文件
    FILE *readFile= fopen("78文件操作.c","r");//确定要读取的文件
    FILE *readWrite= fopen("test.c","w");//确定要写入的文件

    //操作
    const int SIZE=512;
    char buffer[SIZE];
    //NULL:表示读取出错或读取到了最后
    while (fgets(buffer,SIZE,readFile)!=NULL) {
        fputs(buffer,readWrite);
    }
    
    //操作完成,关闭文件.
    fclose(readFile);
    fclose(readWrite);

    
    return 0;
}





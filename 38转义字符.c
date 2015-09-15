/*转义字符*/
#include <stdio.h>
int main(){
    //转义字符的核心是:"\",任何字符在前面加"\",都会被转义.
    printf("%c转义后:%c-%c-\\\"\n",'0','\0','\a');
    return 0;
}
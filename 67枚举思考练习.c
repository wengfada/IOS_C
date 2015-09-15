/*枚举思考练习*/
#include <stdio.h>

int main(){
    
    enum LoveType{
        MAN,
        WOMEN,
        MANANDWOMEN,
    } myLoveType;
    
    myLoveType=MAN;
    printf("%d\n",myLoveType);
    
    myLoveType=WOMEN;
    printf("%d\n",myLoveType);
    
    myLoveType=MANANDWOMEN;
    printf("%d\n",myLoveType);
    
    return 0;
    
}

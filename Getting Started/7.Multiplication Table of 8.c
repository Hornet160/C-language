#include <stdio.h>
int main(void){
    int i;
    int num1=0;
    int num2=8;
    int total=0;
    for(i=0 ;i<11 ;i++){
        printf("%dx%d = %d\n",num1,num2,total);
        num1=num1+1;
        num2=num2*1;
        total=num1*num2;


    }
    return 0;
}

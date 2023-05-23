#include <stdio.h>
int main(void){
    int i,num1=0,num2=0,total=0;
   // printf("");
    scanf("%d",&num2);


    for(i=0;i<11;i++){
        printf("%dx%d = %d\n",num1,num2,total);
        num1=num1+1;
        total=num1*num2;
    }
    return 0;
}

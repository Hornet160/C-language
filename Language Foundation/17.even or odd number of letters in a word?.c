#include<stdio.h>
int main(void){
    //!showArray (name,cursors=[i])
    int i=0;
    char name[51];
    scanf("%s",name);
    while(name[i]!='\0'){
        i++;
    }if(i%2==0){
        printf("1");
    }else{
        printf("2");
    }
    return 0;
}

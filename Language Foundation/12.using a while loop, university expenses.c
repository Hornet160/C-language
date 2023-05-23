#include<stdio.h>
int main(void){
    int expenses;
    int sum=0;
    scanf("%d",&expenses);
    while(expenses!=-1){
        sum=sum+expenses;
        scanf("%d",&expenses);
        
    }
    printf("%d",sum);
    return 0;
    
}

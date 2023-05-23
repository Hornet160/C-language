#include<stdio.h>
int main(void){
    int population;
    int day=1;
    int affected=1;
    scanf("%d",&population);
    while(affected<population){
        day++;
        affected=2*affected+affected;
    }
    printf("%d",day);
    return 0;
}

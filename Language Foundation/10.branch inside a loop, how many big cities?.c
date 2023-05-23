#include<stdio.h>
int main(void){
    int i,nbcities,population,big=0;
    scanf("%d",&nbcities);
    for(i=0;i<nbcities;i++)
    {
        scanf("%d",&population);
        if(population>10 * 1000){
            
            big=big+1;
        }
    }
    printf("%d",big);
    return 0;
}

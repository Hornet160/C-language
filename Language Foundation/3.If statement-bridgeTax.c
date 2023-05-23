#include<stdio.h>
int main(){
        int sum,die1,die2;
        scanf("%d %d",&die1,&die2);
        sum =die1+die2;
        if(sum>=10)
        {
            printf("Special tax\n%d",36);
        }else
        {
            printf("Regular tax\n%d",sum*2);
        }


    return 0;
}

#include<stdio.h>
int main(void)
{
    int population,sum=0;
    double percentage,new;
    scanf("%d",&population);
    scanf("%lf",&percentage);
    new=percentage/100*population;
    sum=(int) new;
    sum+=population;
    printf("%d",sum);
    return 0;

}


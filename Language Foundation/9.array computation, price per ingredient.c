#include<stdio.h>
int main(void)
{
    int i,ingredients;
    double price[10];
    double readprice,weights,total=0.0;
    scanf("%d",&ingredients);
    for(i=0;i<ingredients;i++)
    {
        scanf("%lf",&readprice);
        price[i]=readprice;
    }for(i=0;i<ingredients;i++)
    {
        scanf("%lf",&weights);
        total=total+price[i]*weights;
    }
    printf("%.6lf",total);
    return 0;
}

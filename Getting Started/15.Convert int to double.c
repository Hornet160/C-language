#include<stdio.h>
int main(void)
{
    int num,i;
    int sum=0;
    int numberRead;
    double sum2;
    scanf("%d",&numberRead);
    for( i=0;i<numberRead;i++){
        scanf("%d",&num);
        sum+=num;
    }


    sum2=(double) numberRead;
    printf("%.2lf",sum/sum2);
    return 0;

}

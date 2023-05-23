#include<stdio.h>
#include<math.h>
int main(void)
{
   double amount,total;
   int costing;
   scanf("%lf",&amount);
   //printf("%lf",amount/120);
   total= ceil(amount/120);
   costing=(int) total;
   printf("%d",costing*45);


    return 0;

}

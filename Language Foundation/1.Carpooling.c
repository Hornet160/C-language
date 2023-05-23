#include<stdio.h>

int main(){
    int passenger;
    double cost,totalCost1;
    scanf("%d",&passenger);
    scanf("%lf",&cost);
    if(passenger==0){
            printf("%.2lf",cost);
    }else{
            totalCost1 = (1+cost) / (passenger+1);
            printf("%.2lf",totalCost1);
    }


    return 0;
}

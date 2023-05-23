#include<stdio.h>

int main(){
    int nHours,price;
    scanf("%d",&nHours);
     price=nHours*5+10;
    if(price<53){
        printf("%d",price);
    }else{

        printf("%d",53);

    }




    return 0;
}

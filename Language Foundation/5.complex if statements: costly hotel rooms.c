#include<stdio.h>

int main(){
    int age,weight;

    scanf("%d %d",&age,&weight);

    if(age==60){
        printf("%d",0);
    }else if(age<=10)
    {
        printf("%d",5);
    }
    else if(weight>20)
    {
        printf("%d",30+10);
    }
  else
    {
        printf("%d",30);
    }

    return 0;
}

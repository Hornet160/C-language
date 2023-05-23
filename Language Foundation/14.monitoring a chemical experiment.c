#include<stdio.h>
int main(void)
{
    int min,max,temparature;
    scanf("%d %d",&min,&max);
    scanf("%d",&temparature);
    while(temparature>=min && temparature <=max ){
        scanf("%d",&temparature);
        printf("Nothing to report\n");
        
    }if(temparature!=-999){
             printf("Alert!\n");
    }
    
    return 0;
}

#include<stdio.h>
int main(void)
{
    char name1[101],name2[101];
    int i,num;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%s %s",name1,name2);
        printf("%s %s\n",name2,name1);
    }
    return 0;
}

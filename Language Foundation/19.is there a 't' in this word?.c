#include<stdio.h>
int main(void)
{
    char word[51];
    int i=0,l=0,index,found;
    scanf("%s",word);
    while(word[l]!='\0')
        l++;
        if(l%2==0)
            index=l/2-1;
        else

        index=l/2;

    found=0;
    i=0;
    while(!found && i<l){
        if(word[i]=='t' || word[i]=='T')
            found=1;
        else

            i++;

    }
    if(!found){
        printf("-1");
    }else if(i<=index){
    printf("1");
    }else{
    printf("2");
    }return 0;
}

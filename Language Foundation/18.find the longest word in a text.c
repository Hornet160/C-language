#include<stdio.h>
int main(void){
    int nbWords=0;
    int i=0,l=0;
    int large=0;
    char word[101];
    scanf("%d",&nbWords);
    for(i=0;i<nbWords;i++){
        scanf("%s",word);
        l=0;
        while(word[l]!='\0'){
            l++;
        }
        if(l>large){
            large=l;
        }
    
    }
    printf("%d\n",large);
    return 0;
}

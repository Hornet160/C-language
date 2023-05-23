#include<stdio.h>
int main(void)
{
    char word[51];
    scanf("%s",word);
    int i=0,j=0,length=0,swap=0,repeat=0;
    while(word[length]!='\0')
    length++;
    //sorting the letters alphabetically
    for(j=0;j<length-1;j++){
    for(i=0;i<length-1;i++){
        if(word[i]>word[i+1]){
            swap=word[i];
            word[i]=word[i+1];
            word[i+1]=swap;
        }
    }
    }//checking the repeating words
    i=0;
    while(i<length-1){
        if(word[i]==word[i+1]){
            repeat++;
            j=i+2;
        
    //continuing throung the word to meet a new character
    while(j<length && word[i]==word[j])
        j++;
        i=j;
    }else{
        i++;
    }
    }
    
    printf("%d",repeat);
    return 0;
    }

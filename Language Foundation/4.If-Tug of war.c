#include<stdio.h>

int main(){
    int i,team1=0,team2=0,members=0,weights=0;
    scanf("%d",&members);
    for(i=0;i<members;i++){
        scanf("%d",&weights);
        team1+=weights;
        scanf("%d",&weights);
        team2+=weights;
    }

       if(team1>team2){
            printf("Team 1 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d",team1,team2);

          }else{
              printf("Team 2 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d",team1,team2);
          }

    return 0;
}

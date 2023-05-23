#include <stdio.h>
#include <stdlib.h>

int main()
{  int boxcars,ncars,store=0;
    double average=0.0;
    double weight[51];
    scanf("%d",&boxcars);
    for(ncars=0;ncars<boxcars;ncars++){
        scanf("%lf",&weight[ncars]);
        store=store+weight[ncars];
        //printf("%.1lf\n",22.0-array[store]);
    }
     average= store/boxcars;
     for(ncars=0;ncars<boxcars;ncars++){
     printf("%.1lf\n",average-weight[ncars]);
     }


    return 0;

}

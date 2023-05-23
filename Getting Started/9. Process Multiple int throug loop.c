#include <stdio.h>
int main()
{
    int howMany=0;
    int height=0;
    int weight=0;
    int enginePower=0;
    int resistance=0;
    int sum=0;

    scanf("%d\n",&howMany);
     sum= (enginePower + resistance) * (weight - height);
    for(int i=0;i<howMany;i++){

     //sum= (enginePower + resistance) * (weight - height);

     scanf("%d %d %d %d",&height,&weight,&enginePower,&resistance);

     sum=sum + (enginePower + resistance) * (weight - height);
        //printf("%d\n",sum);
    }
     //sum=sum + (enginePower + resistance) * (weight - height);
    printf("%d\n",sum);

    return 0;
}

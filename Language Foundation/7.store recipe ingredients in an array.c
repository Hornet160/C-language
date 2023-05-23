#include <stdio.h>

int main(void)
{
    int array [10];
    int i=0;
    int quantity=0;
    int number=0;
    for(i=0;i<10;i++){
        scanf("%d",&quantity);
        array[number]=quantity;
        number=number+1;
    }
    scanf("%d",&number);
    printf("%d",array[number]);

    return 0;
}

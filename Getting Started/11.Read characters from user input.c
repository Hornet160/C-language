#include<stdio.h>
int main(void)
{
    char base;
    scanf("%c",&base);
    printf("++++%c++++\n",base);
    printf("+++%c%c%c+++\n",base,base,base);
    printf("++%c%c%c%c%c++\n",base,base,base,base,base);
    printf("+%c%c%c%c%c%c%c+\n",base,base,base,base,base,base,base);
    printf("%c%c%c%c%c%c%c%c%c\n",base,base,base,base,base,base,base,base,base);
    return 0;
}

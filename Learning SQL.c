#include<stdio.h>
int main()
{
    int R,C,E;
    scanf("%d%d%d",&R,&C,&E);
    int j = R*C+C*E;
    printf("%d",j);
    return 0;
}
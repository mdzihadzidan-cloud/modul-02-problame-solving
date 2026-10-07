#include <stdio.h>
int main ()
{
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d",&b);
    if ( a % b == 0 || b % a == 0)
    {
        printf ("Yes\n");
    }else {
        printf("No\n");
    }

    return 0;
}
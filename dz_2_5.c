#include <stdio.h>

int main()
{   
    int x, y, z, max, min, mid, null;
    scanf("%d %d %d", &x, &y, &z);

    max = x;
    if (y > max) max = y;
    if (z > max) max = z;

    min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    mid = x+y+z-max-min;
    
    printf("%d %d %d", min,mid,max);

    scanf("\n%d",&null);
    return 0;
}
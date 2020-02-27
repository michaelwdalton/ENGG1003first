#include <stdio.h>
#include <stdlib.h>

main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = (x+2)/(x-2);
    printf("y: %f\n", y); //you can't see me
    return 0;
}

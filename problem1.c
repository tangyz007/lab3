#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{

        float n = 1.0;
        float a;
        printf("Please enter the radius ");
        fflush(stdout);
         scanf("%f",&n);
        a=n*n*pi;
        printf("%f   %f\n",a, n);
        return 0;
}
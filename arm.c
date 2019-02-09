#include <stdio.h>
#include <math.h>
 
void main()
{
    int n, s= 0, r=0, c=0,temp;
    scanf("%d", &n);
    temp = n;
    while (n!= 0)
    {
        r = n% 10;
        c = pow(r, 3);
        s = s+ c;
        n= n/ 10;
    }
    if (s== temp)
        printf ("Yes");
    else
        printf ("No");
}

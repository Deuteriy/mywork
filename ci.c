#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int nod(int a,int b)
{
    if (a<b)
	{ 
            int c;
            c=a;
            a=b;
            b=c;
	}
    if (a%b==0)
        return b;
    else
        return nod(a%b,b);
}
 
int main()
{
    int m, k, i;
    const int nmax=20;
    int n[nmax];
    printf ("\nВведите количество числе в данной последовательности:\n");
    scanf ("%d", &m);
    printf ("\nВведите числа последовательности\n");
    for (i=0; i<m; i++)
        scanf ("%d", &n[i]);
    k=nod (n[0], n[1]);
    for (i=2; i<m; i++)
        k=nod(k, n[i]);
    printf ("НОД = %d\n", k);
    return 0;
}
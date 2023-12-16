#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand () % 101 - 100;
}

int main()
{ int max1, max2, max3, ind1, ind2, ind3, a, b, f;

    srand(time(NULL));
    int n;
    printf("n -> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    int i;
    for (i = 0; i < n; i++)
max1 = -101;
max2 = -102;
max3 = -103;
 for (i = 0; i < n; i++)
 {
    if (A[i] > max1)
   { 
    max3 = max2;
    ind3 = ind2;
    max2 = max1;
    ind2 = ind1;
    max1 = A[i];
    ind1 = i;
    }
    if (A[i] > max2 && A[i]< max1)
    {
    max3 = max2;
    ind3 = ind2;
    max2 = A[i];
    ind2 = i;
    }
    if (A[i] > max3 && A[i]< max2)

    { 
    max3 = A[i];
    ind3 = i; 
    }
}
        
      a = max1 * max2 * max3;
        b = abs( ind1 + ind2 + ind3 );
        f = a - b;

    
    printf("%d" , f );
}





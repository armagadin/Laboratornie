#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand () % 101 - 50;
}

int main()
{ int max1, max2, max3, ind1, ind2, ind3;

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
    if (arr[i] > max1)
    max3 = max2;
    ind3 = ind2;
    max2 = max1;
    ind2 = ind1;
    max1 = arr[i];
    ind1 = i;
 }
        
        
        
        
        printf("%4d", A[i]);
    printf("\n");
    return 0;
}


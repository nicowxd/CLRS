#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000

void printArray(const char *s, int *A, int n)
{
    printf("%s", s);

    for (int i = 0; i < n; i++)
        printf("%d%c", A[i], i == n - 1 ? '\n' : ' ');
}

void merge(int *A, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];
    
    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[q + i + 1];
    
    L[n1] = INF;
    R[n2] = INF;

    int i = 0, j = 0;

    for (int k = p; k <= r; k++) 
    {
        if (L[i] <= R[j]) 
        {
            A[k] = L[i];
            i++;
        }
        else 
        {
            A[k] = R[j];
            j++;
        }
    }
}

void mergesort(int *A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(A, p, q);
        mergesort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main()
{

    int A[8] = {7, 2, 9, 16, 8, 3, 4, 2}, n = 8;
    
    printArray("Before: ", A, n);

    mergesort(A, 0, n-1);
    
    printArray("After: ", A, n);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}

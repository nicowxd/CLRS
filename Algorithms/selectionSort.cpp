#include <cstdio>

using namespace std;

void printArray(const char *s, int *v, int n)
{
    printf("%s", s);

    for (int i = 0; i < n; i++)
        printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
}

void selectionSort(int *v, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int menor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[menor])
                menor = j;
        }
        int tmp = v[i];
        v[i] = v[menor];
        v[menor] = tmp;
    }
}

int main()
{

    int A[6] = {5, 2, 4, 6, 1, 3}, n = 6;

    printArray("Before: ", A, n);

    selectionSort(A, n);

    printArray("After: ", A, n);

    return 0;
}

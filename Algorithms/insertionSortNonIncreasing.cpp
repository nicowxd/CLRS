#include <cstdio>

using namespace std;


void printArray (const char *s, int *v, int n)
{
    printf("%s", s);

    for (int i = 0; i < n; i++)
        printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
}

void insertionSort (int *v, int n)
{
    for (int j = 1; j < n; j++)
    {
        int key = v[j], i = j - 1;

        while (i >= 0 && v[i] < key)
        {
            v[i + 1] = v[i];
            i--;
        }

        v[i + 1] = key;
    }
}

int main()
{

    int A[6] = {5, 2, 4, 6, 1, 3}, n = 6;
    
    printArray("Before: ", A, n);

    insertionSort(A, n);

    printArray("After: ", A, n);

    return 0;
}

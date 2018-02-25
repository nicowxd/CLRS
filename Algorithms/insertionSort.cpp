#include <cstdio>

using namespace std;

int v[6] = {5, 2, 4, 6, 1, 3};

void printArray (const char *s, int n)
{
    printf("%s", s);

    for (int i = 0; i < n; i++)
        printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
}

void insertionSort (int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = v[i], j = i - 1;

        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

int main()
{

    int n = 6;
    
    printArray("Before: ", n);

    insertionSort(n);

    printArray("After: ", n);

    return 0;
}

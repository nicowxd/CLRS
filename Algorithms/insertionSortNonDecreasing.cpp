#include <cstdio>

using namespace std;

int v[6] = {5, 2, 4, 6, 1, 3}, n = 6;

void printArray (const char *s)
{
    printf("%s", s);

    for (int i = 0; i < n; i++)
        printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
}

void insertionSort ()
{
    for (int i = 1; i < n; i++)
    {
        int key = v[i], j = i - 1;

        while (j >= 0 && v[j] < key)
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

int main()
{

    printArray("Before: ");

    insertionSort();

    printArray("After: ");

    return 0;
}

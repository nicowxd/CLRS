#include <cstdio>

using namespace std;

int linearSearch(int *A, int v, int n)
{
    int ans = -1;

    for (int i = 0; i < n; i++) 
    {
        if (A[i] == v) 
        {
            ans = i;
            return ans;
        }
    }

    return ans;
}

int main()
{
    int A[6] = {31, 41, 59, 26, 41, 58}, n = 6, v = 30;
    
    printf("%d\n", linearSearch(A, v, n));
    return 0;
}

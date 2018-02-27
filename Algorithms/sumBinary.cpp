#include <cstdio>

using namespace std;

void printSum(int *A, int *B, int *C, int n)
{
    printf("A =  ");
    for (int i = 0; i < n; i++)
        printf(" %d", A[i]);
    printf("\n");

    printf("B =  ");
    for (int i = 0; i < n; i++)
        printf(" %d", B[i]);
    printf(" +\n");
    
    printf("C =");
    for (int i = 0; i < n + 1; i++)
        printf(" %d", C[i]);
    printf("\n");
}

void sumBinary(int *A, int *B, int *C, int n)
{
    int carry = 0;
    for (int i = n-1; i >= 0; i--)
    {
        int sum = carry + A[i] + B[i];
        C[i+1] = sum % 2;
        if (sum >= 2)
            carry = 1;
        else
            carry = 0;
    }
    C[0] = carry;
}

int main()
{
    int n = 3, A[3] = {0, 0, 1}, B[3] = {1, 0, 1}, C[4];
    
    sumBinary(A, B, C, n);
    
    printSum(A, B, C, n);

    return 0;
}


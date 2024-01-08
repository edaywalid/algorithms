#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printArray(int n, int T[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", T[i]);
    }
    printf("\n");
}

int getMax(int n, int T[])
{
    int max = T[0];
    for (int i = 1; i < n; i++)
    {
        if (T[i] > max)
            max = T[i];
    }
    return max;
}

void setZeros(int n, int T[])
{
    for (int i = 0; i < n; i++)
    {
        T[i] = 0;
    }
}

void countAndPrefixSum(int n, int T[], int j, int C[])
{
    for (int i = 0; i < n; i++)
    {
        C[T[i] - 1]++;
    }

    for (int i = 1; i < j; i++)
    {
        C[i] += C[i - 1];
    }
}

void setResult(int n, int T[], int result[], int C[])
{
    for (int i = 0; i < n; i++)
    {
        result[C[T[i] - 1]-- - 1] = T[i];
    }
}

int main()
{
    int T[] = {2, 1, 5, 6, 4, 3, 1, 5, 6, 7, 8};
    int inputSize = sizeof(T) / sizeof(int);
    int countSize = getMax(inputSize, T);

    int C[countSize];
    int result[inputSize];

    setZeros(countSize, C);

    countAndPrefixSum(inputSize, T, countSize, C);

    setResult(inputSize, T, result, C);

    printArray(inputSize, result);

    return 0;
}
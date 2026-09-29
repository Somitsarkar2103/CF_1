
#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
int *allocateUsingMalloc(int n);
int *allocateUsingCalloc(int n);
int *resizeArray(int *arr, int newSize);
void readElements(int *arr, int start, int end);
void printArray(int *arr, int n);
void freeMemory(int *arr);

int main()
{
    int n, new_n;
    int *mallocArray;
    int *callocArray;
    int *resizedArray;

    printf("Enter size: ");
    scanf("%d", &n);

    mallocArray = allocateUsingMalloc(n);
    callocArray = allocateUsingCalloc(n);

    if (mallocArray == NULL || callocArray == NULL)
    {
        printf("Memory allocation failed\n");
        freeMemory(mallocArray);
        freeMemory(callocArray);
        return 1;
    }

    printf("Enter elements for malloc array:\n");
    readElements(mallocArray, 0, n);

    printf("Malloc Array:\n");
    printArray(mallocArray, n);

    printf("Enter elements for calloc array:\n");
    readElements(callocArray, 0, n);

    printf("Calloc Array:\n");
    printArray(callocArray, n);

    printf("Enter new size: ");
    scanf("%d", &new_n);

    if (new_n < 0)
    {
        printf("Invalid size\n");
        freeMemory(mallocArray);
        freeMemory(callocArray);
        return 1;
    }

    resizedArray = resizeArray(mallocArray, new_n);

    if (resizedArray == NULL && new_n > 0)
    {
        printf("Memory reallocation failed\n");
        freeMemory(mallocArray);
        freeMemory(callocArray);
        return 1;
    }

    if (new_n > n)
    {
        printf("Enter additional elements:\n");
        readElements(resizedArray, n, new_n);
    }

    printf("Resized Array:\n");
    printArray(resizedArray, new_n);

    freeMemory(resizedArray);
    freeMemory(callocArray);

    return 0;
}

int *allocateUsingMalloc(int n)
{
    int *arr = (int *)malloc(n * sizeof(int));
    return arr;
}

int *allocateUsingCalloc(int n)
{
    int *arr = (int *)calloc(n, sizeof(int));
    return arr;
}

int *resizeArray(int *arr, int newSize)
{
    int *temp = (int *)realloc(arr, newSize * sizeof(int));
    return temp;
}

void readElements(int *arr, int start, int end)
{
    int i;

    for (i = start; i < end; i++)
    {
        scanf("%d", arr + i);
    }
}

void printArray(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");
}

void freeMemory(int *arr)
{
    free(arr);
}
#include <stdio.h>
#include <stdlib.h>

int **createArray(int row, int col[])
{
    int **p = (int **)malloc(row * sizeof(int *));

    for (int i = 0; i < row; i++)
    {
        p[i] = (int *)malloc(col[i] * sizeof(int));
    }
    return p;
}

int **initialize(int **arr, int row, int *col)
{
    printf("Enter the values:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    return arr;
}

int *findRowSum(int **arr, int row, int col[])
{
    int *rs = (int *)malloc(row * sizeof(int));
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col[i]; j++)
        {
            sum = sum + arr[i][j];
        }
        rs[i] = sum;
    }

    return rs;
}
int findBig(int *arr,int n){
    int big=arr[0];
    for(int i=0;i<n;i++){
        if(big<arr[i]){
            big=arr[i];
        }
    }
    return big;   
}

int main()
{
    int row = 3;
    int col[] = {5, 4, 3};
    int **arr = createArray(row, col);
    arr = initialize(arr, row, col);
    int *resSum = findRowSum(arr, row, col);
    for (int i = 0; i < row; i++)
    {
        printf("Row %d sum = %d\n",i+1, resSum[i]);
    }
    int result=findBig(resSum,row);
    printf("\nThe largest value is: %d",result);
    return 0;
}


#include <stdio.h>
#include<stdlib.h>
int *createArray(int n){
    int *p=(int *)malloc(n*sizeof(int));
    return p;
}

int *initialize(int *arr, int n){
    for(int i=0;i<n;i++){
        printf("Ebter the values: ");
        scanf("%d",&arr[i]);
    }
    return arr;
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

int main() {
	
    int n;
    int *arr;
    printf("Enter the value of n:");
    scanf("%d",&n);
    arr=createArray(n);
    initialize(arr,n);
    int result=findBig(arr,n);
    printf("\nThe largest value is: %d",result);
}
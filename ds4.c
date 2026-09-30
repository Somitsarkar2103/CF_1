#include<stdio.h>
void disp(void *arr,int n){
    for(int i=0;i<n;i++){
        printf("index %d = %d ",i,*((int*)arr+i));
    }
}

int main()
{
    int n=5;
    int a[5];
    for (int i=0;i<n;i++)
    {
        printf("enter value at %d: ",i+1);
        scanf("%d",(a+i));
    }
    disp(a,n);
    return 0;
}

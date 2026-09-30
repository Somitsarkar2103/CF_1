#include <stdio.h>

int disp(void *t)
{
    int k = *(int *)t;
    return k;
}
int main()
{
    int p = 10;
    int *t = &p;
    int res = disp(t);
    printf("%d", res);
    return 0;
}

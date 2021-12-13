#include<stdio.h>
#define MAX 49

int main(void)
{
    int n;
    int ints1[MAX],ints2[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ints1[i]);
    }
    
    for (int i = 0; i < n + 1; i++)
    {
        ints2[n - i - 1] = ints1[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ints2[i]);
    }
    printf("\n");
    
}
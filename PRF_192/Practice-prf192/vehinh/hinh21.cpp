#include <stdio.h>

//Dong Ho Cat
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == j || i + j == n + 1)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

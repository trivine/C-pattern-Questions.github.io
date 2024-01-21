/*

 */

#include <stdio.h>
int main()
{
    int n = 3, i, j;
    int row = 2 * n - 1;
    int x = 1;
    for (i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
        {
            printf(" ");
        }

        for (j = 1; j <= x; j++)
        {
            printf("* ");
        }
        if (i >= n)
        {
            x--;
        }
        else
        {
            x++;
        }
        printf("\n");
    }
    return 0;
}
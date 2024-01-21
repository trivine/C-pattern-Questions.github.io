/*question - 29 ->
1234567
123 567
12   67
1     7

*/
#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the row number : ");
    scanf("%d", &n);

    // first approach ----------->

    int k = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            int s = n - i + 1;
            if (j > s && j <= k - s)
            {
                printf(" ");
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }

    return 0;
}
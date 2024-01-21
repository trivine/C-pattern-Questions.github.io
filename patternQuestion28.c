/*question - 28 ->
for input n = 4
*******
*** ***
**   **
*     *

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d", &n);

    // first approach ----------->

    // int k = (2 * n) - 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= k; j++)
    //     {
    //         int s = n - i + 1;
    //         if (j > s && j <= k - s)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }

    //second approach ----------->

    for(int i = 1; i <= 2*n-1; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("*");
        }
        for(int j = 1; j <= 2*i -1; j++){
            printf(" ");
        }
        for(int j = 1; j <= n - i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
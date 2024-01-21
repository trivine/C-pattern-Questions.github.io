/*question - 22 ->
for input n = 4
   *
  ***
 *****
*******
Star Pyramid
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d", &n);

    // first approach----------->

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n+i-1; j++){
    //         if(j <= n - i){
    //             printf(" ");
    //         }else{
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }

    // second approach ---------->

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // third approach -------->

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for(int j = 1; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
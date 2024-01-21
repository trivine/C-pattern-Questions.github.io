/*question - 24 ->
for input n = 4
   A
  ABC
 ABCDE
ABCDEFG
Alphabet Pyramid->
*/
#include <stdio.h>
int main()
{
    int n= 0;
    printf("Enter the row number : ");
    scanf("%d", &n);

    // first approach----------->

    for(int i = 1; i <= n; i++){
            int k = 1;
        for(int j = 1; j <= n+i-1; j++){
            if(j <= n - i){
                printf("  ");
            }else{
                printf(" %c",64+k);
                k++;
            }
        }
        printf("\n");
    }

    // second approach ---------->

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++){
    //         printf("%c",64+j);
    //     }
    //     printf("\n");
    // }
    return 0;
}
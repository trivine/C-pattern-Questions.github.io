/*question - 20 ->
for input n = 4
   ****
  ****
 ****
****
Rhombus
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    //first approach ->
    // for(int i = 1; i <=n; i++)
    // {
    //     for(int j = 1; j <= (2*n)-i; j++)
    //     {
    //         if(j <= n - i){
    //             printf(" ");
    //         }
    //         else{
    //             printf("*");
    //         }
    //     }
    //     printf("\n");
    // }

    //seond approach ->
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
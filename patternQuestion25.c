/*question-25 ->
for input n = 4
   1
  121
 12321
1234321
Number Pyramid Mast
*/
#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the row number : ");
    scanf("%d", &n);


    // first approach ---------->

    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = 1; j <= n + i - 1; j++)
        {
            if(j <= n - i){
                printf(" ");
            }
            else{
                printf("%d",x);
                if(j >= n){
                    x--;
                }
                else{
                    x++;
                }
            }
        }
            printf("\n");
    }


    //second approach --------->

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= i; j++){
    //         printf("%d",j);
    //     }
    //     for(int j = 1; j < i; j++){
    //         printf("%d",i-j);
    //     }
    //     printf("\n");
    // }
    return 0;
}
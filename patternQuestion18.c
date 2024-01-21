/*question - 18 ->
1
01
101
0101
10101
0 & 1 Triangle.....
*/
#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the row number : ");
    scanf("%d", &n);
    //first approach......

    // int x;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i % 2 != 0){
    //         x = 1;
    //     }
    //     else{
    //         x = 0;
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", x);
    //         if (x == 1){
    //             x = 0;
    //         }
    //         else{
    //             x = 1;
    //         }
    //     }
    //     printf("\n");
    // }

    //second approach....
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
            printf("\n");
    }
    return 0;
}
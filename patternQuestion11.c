/*question - 11 ->
     *
     *
 * * * * *
     *
     *
 */
#include <stdio.h>
int main(){
    int n;
    printf("Ente the odd row number : ");
    scanf("%d", &n);
    //first approach..........
    // for (int i = 1; i <= n; i++){
    //     if (i != n / 2 + 1){
    //         for (int j = 1; j <= n; j++){
    //             if (j == n / 2 + 1){
    //                 printf("* ");
    //             }
    //             else{
    //                 for (int x = 1; x <= 2; x++){
    //                     printf(" ");
    //                 }
    //             }
    //         }
    //     }
    //     else{
    //         for (int j = 1; j <= n; j++){
    //             printf("* ");
    //         }
    //     }
    //     printf("\n");
    // }


    // second approach ...........
    int mid = n/2+1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == mid || j == mid)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
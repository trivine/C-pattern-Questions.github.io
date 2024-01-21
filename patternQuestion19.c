/*question - 19 ->
    *
   **
  ***
 ****
*****
Star Triangle Mast.....       
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    //first approach...
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         if(j >= n-i+1){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }


    //secnd approach....

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
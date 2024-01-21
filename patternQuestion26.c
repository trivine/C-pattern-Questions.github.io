/*question - 26 ->
for input n = 4
   A
  ABA
 ABCBA
ABCDCBA

Alphabet Pyramid Mast..........

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    

    // first approach ---------->

    // for (int i = 1; i <= n; i++)
    // {
    //     int x = 1;
    //     for (int j = 1; j <= n + i - 1; j++)
    //     {
    //         if(j <= n - i){
    //             printf(" ");
    //         }
    //         else{
    //             printf("%c",64+x);
    //             if(j >= n){
    //                 x--;
    //             }
    //             else{
    //                 x++;
    //             }
    //         }
    //     }
    //         printf("\n");
    // }

    //second approach.....
    

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1 ; j <= i; j++){
            printf("%c",64+j);
        }
        for(int j = 1; j < i; j++){
            printf("%c",64+i-j);
        }
        printf("\n");
    }

return 0;
}
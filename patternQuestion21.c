/*question - 21 ->
for input n = 4
   A
  AB
 ABC
ABCD
Alphabet Triangle
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    // for(int i = 1; i <= n; i++){
    //     char c = 'A';
    //     for(int j = 1; j <= n; j++){
    //         if(j <= n - i){
    //             printf(" ");
    //         }
    //         else{
    //             printf("%c",c);
    //             c++;
    //         }
    //     }
    //     printf("\n");
    // }

    //second approach ....

    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}
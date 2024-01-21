/*question - 10 ->
1 
A B 
1 2 3 
A B C D 
1 2 3 4 5
*/
#include <stdio.h>
int main(){
    int row, i, j;
    printf("Enter the row number : ");
    scanf("%d",&row);
    for(i = 1; i <= row; i++){
        if(i % 2 != 0){
            for(int j = 1; j <= i; j++){
                printf("%d ",j);
            }
        }else{
            for(j = 1; j <= i; j++){
                printf("%c",64+j); //why I can't use space after %c
                printf(" ");
            }
        }
        printf("\n");
    }
}
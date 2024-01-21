/* question - 9 ->
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        //the ascai value of A = 65 and a = 97; 
        for(int j = 1; j <= n; j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
return 0;
}
/*question - 30 ->
for input n = 4
ABCDEFG
ABC EFG
AB   FG
A     G
*/
#include<stdio.h>
int main(){
    int n = 0;
    printf("Enter the row number : ");
    scanf("%d",&n);
    for(int i = 0; i < 2*n-1; i++){
        printf("%c",65+i);
    }
    printf("\n");
    for(int i = 1; i <= n - 1; i++){
    char c = 'A';
        for(int j = 1; j <= n - i; j++){
            printf("%c",c);
            c++;
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf(" ");
            c++;
        }
        for(int j = 1; j <= n - i; j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
return 0;
}
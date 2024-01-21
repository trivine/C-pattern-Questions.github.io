/*
for input n = 4
1234321
123 321
12   21
1     1
*/
#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the row number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int count = 1;
        for(int j = 1; j <= 2*n-1; j++){
            if(j > (n - i) + 1 && j < (2*n-1 - (n - i)) ){
                printf(" ");
            }
            else{
            printf("%d",count);
            }
            if(j < n){
                count++;
            }
            else{
                count--;
            }
        }
        printf("\n");
    }
    return 0;
}
/*question - 15 ->
for input n = 4
1
2 3
4 5 6 
7 8 9 10
Floyd's Triangle
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    int a = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",a);
            printf(" ");
            a++;
        }
        printf("\n");
    }
    return 0;
}
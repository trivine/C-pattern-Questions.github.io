/*question - 17->
for input n = 4
1
3 5
7 9 11
13 15 17
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
            a+=2;
        }
        printf("\n");
    }
    return 0;
}
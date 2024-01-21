/*question - 14 ->
*   *
 * *
  *
 * *
*   *
Star Cross
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the odd row number : ");
    scanf("%d",&n);
    for(int i = 1; i<= n; i++){
        int l = n - i + 1;
        for(int j = 1; j <= n; j++){
            if(j == i || j == l) printf("*");// we can do j == l or j == n - i + 1 or we can do i + j == n + 1
            else printf(" ");
        }
        printf("\n");
    }
return 0;
}
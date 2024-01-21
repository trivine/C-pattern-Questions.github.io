// plus of star

#include<stdio.h>
int main(){
    int n;
    printf("Enter the row : ");
    scanf("%d",&n);

    int mid = n / 2 + 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == mid || j == mid){
                printf("* ");
            }
            else{
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}
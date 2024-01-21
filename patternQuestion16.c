/*question - 16 ->
for input n = 10
1
2 3
4 5 6 
7 8 9 10
Floyd's Triangle
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    //finding the row number....
    int r = 0;
    int sum = 0;
    for(int i = 1; sum < num; i++){
        sum+= i;
        r++;
    }
    //printing the pattern......
    int n = 1;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= i; j++){
            if(n > num){
                break;
            }
            else {
                printf("%d",n);
                printf(" ");
                n++;
            }
        }
        printf("\n");
    }
return 0;
}
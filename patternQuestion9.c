/* question - 9 ->
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }
    return 0;
}
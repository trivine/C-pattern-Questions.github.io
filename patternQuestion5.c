/* question - 5 ->
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
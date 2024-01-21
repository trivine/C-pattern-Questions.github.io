/* question - 27 ->
for input n = 4
   *
  ***
 *****
*******
 *****
  ***
   *
Star Diamond......
*/

#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the row number : ");
    scanf("%d", &n);

    //first approach ---------->

    int a = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int s = 1;
        for (int j = 1; j <= n + a - 1; j++) {
            if (s <= n - a){
                printf("  ");
                s++;
            }
            else{
                printf("* ");
            }
        }
        if (i < n){
            a++;
        }
        else {
            a--;
        }
        printf("\n");
    }

    //second approach ------------>


    
    return 0;
}
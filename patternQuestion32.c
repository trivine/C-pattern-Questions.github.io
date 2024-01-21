/*
for input n = 4
4444444
4333334
4322234
4321234
4322234
4333334
*/
#include <stdio.h>
int printArr(int arr[], int size){
    for(int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a = n;
    int l = 2 * n - 1;
    int arr[l];
    for (int i = 0; i < l; i++){
        arr[i] = n;
    }
    for (int i = 0; i < l; i++){
        for (int j = 0; j < l; j++){
            if (j == i && j != 0){
                if (j < n){
                    a--;
                    for (int k = j; k < l - i; k++){
                        arr[k] = a;
                    }
                }
                else{
                    a++;
                    for (int k = j; k >= l - i; k--){
                        arr[k] = a;
                    }
                }
            }
        }
        printArr(arr,l);
        printf("\n");
    }
    return 0;
}
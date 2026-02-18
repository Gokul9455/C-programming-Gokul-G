#include <stdio.h>

int main() {
    int m,n,i,j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        int max = arr[0][j];
        for(int j = 1; j < n; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }

        printf("Maximum element in row %d = %d\n", i + 1, max);
    }

    return 0;
}

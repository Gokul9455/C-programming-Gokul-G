#include <stdio.h>

int main() {
    int m,n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter the array of elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        int min = arr[i][0];

        for(int j = 1; j < n; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }

        printf("Minimum element in row %d = %d\n", i + 1, min);
    }

    return 0;
}

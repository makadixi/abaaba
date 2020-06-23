#include <stdio.h>
int main()
{
    int a[21][21] = {0};
    int n;
 while (scanf("%d", &n)){
        if (n == 0) return 0;
    a[1][1] = 1;
    for (int i = 2; i <= n; i++){
        for (int j = 1; j <= i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for ( int j = 1; j <= i; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");


    }

    return 0;
  }
}

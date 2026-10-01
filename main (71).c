
#include <stdio.h>

int main() {
    int r1, c2;
    scanf("%d %d", &r1, &c2);
    int a[r1][c2];
     for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

      int transpose[c2][r1];

     for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            transpose[j][i] = a[i][j]; 
        }
    }

        for (int i = 0; i < c2; i++) {
        for (int j = 0; j < r1; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    
        printf(" Transpose = %d ", trans);
    
    return 0;
}

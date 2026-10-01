#include <stdio.h>

int main() {
    int rc;
    printf ("Enter square matrix dimention ");
    scanf("%d ", &rc);

    int a[rc][rc];
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < rc; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int trans = 0;
        
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < rc; j++) {
            if(i==j)
            {
                  trans += a[i][j];
        }
              
        }
        
    }

    
        printf(" Transpose = %d ", trans);
    
    return 0;
}
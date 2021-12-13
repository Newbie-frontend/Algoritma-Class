
#include <stdio.h>


int main() {
    printf ("n i giriniz: ");
    scanf ("%d", &n);
    int x[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d. satir %d. elemanini giriniz :", i , j );
            scanf("%d" , x[i][j]);
        }
        
    }
    int toplam;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j ){

            printf("%d\t", x [i][j]);
            }
            else
            printf("0");
        }
        
    }
    

    return 0;
}

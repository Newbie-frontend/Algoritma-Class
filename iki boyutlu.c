#include <stdio.h>
#include <math.h>

int main() {
    int count;
    printf("Sayisini giriniz : ");
    scanf("%d", &count);
    int number[count][2];
    int i, j;
    for ( i = 0; i < count; i++)
    {
        printf("%d. ilin plakasi ve destek miktari : ", i+1);
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &number[i][j]);
        }
    }
    printf("------------------------------------\n");
    printf("En az destek alan ile gore , illerin fazlalari :\n");
    int enkucuksayi = number[0][1];
    for (i = 0; i < count; i++)
    {
        if (number[i][1] < enkucuksayi){
        	enkucuksayi = number[i][1];
		}
	}
	for( i = 0 ; i<count ; i++){
		number[i][1] = number[i][1]-enkucuksayi ;
	}
	printf("il\t: ");
	for (i = 0; i < count; i++)
    {
    	printf("%d\t",number[i][0]);
    }
    printf("\nFazla\t: ");
    	for (i = 0; i < count; i++)
    {
    	printf("%d\t",number[i][1]);
    }

    return 0;
}

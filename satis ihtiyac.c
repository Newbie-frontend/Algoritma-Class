#include <stdio.h>
#include <math.h>

int main() {
    int count;
    printf("Personal sayisini giriniz : ");
    scanf("%d", &count);
    int number[count][2];
    int i, j;
    int sicil , satis;
    for ( i = 0; i < count; i++)
    {
        printf("%d.personelin sicili ve satis miktari : ", i);
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &number[i][j]);
        }
    }
    printf("------------------------------------\n");
    printf("personel ne kadar satis yapacak\n");
    int enkucuksayi = number[0][1];
    for (i = 0; i < count; i++)
    {
        if (number[i][1] > enkucuksayi){
        	enkucuksayi = number[i][1];
		}
	}
	for( i = 0 ; i<count ; i++){
		number[i][1] = enkucuksayi - number[i][1];
	}
	printf("sicil\t: ");
	for (i = 0; i < count; i++)
    {
    	printf("%d\t",number[i][0]);
    }
    printf("\nihtiyac\t: ");
    	for (i = 0; i < count; i++)
    {
    	printf("%d\t",number[i][1]);
    }

    return 0;
}

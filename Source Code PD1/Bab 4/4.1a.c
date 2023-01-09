#include <stdio.h>

void main()
{
	int angka;	
	
	printf("Masukkan angka : ");
	scanf("%d", &angka);
	
	if (angka % 2 == 0)
		printf("\n%d merupakan bilangan Genap", angka);
	else
		printf("\n%d merupakan bilangan Ganjil", angka);
	
	getche();
}

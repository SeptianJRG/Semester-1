#include <stdio.h>

int main()
{
	int bilangan, dibalik;

	printf("Masukkan bilangan bulat: ");
	scanf("%d", &bilangan);

	printf("Hasil setelah dibalik: ");
	while (bilangan>0)
	{		
		dibalik = bilangan % 10;
		printf("%d", dibalik);
		bilangan = bilangan / 10;
	}
}

#include <stdio.h>
void main()
{

	int year, range;
	
	printf("Masukkan tahunnya : ");
	scanf("%d", &year);
	range = year;
	
	if (range >= 1600 && range <= 2400)
	{
		if (year % 400 == 0)
		{
			printf("Tahun %d merupakan Tahun Kabisat", year);
		}
		else if (year % 400 != 0 && year % 100 == 0)
		{
			printf("Tahun %d bukan Tahun Kabisat", year);
		}
		else if (year % 400 != 0 && year % 100 != 0 && year % 4 == 0)
		{
			printf("Tahun %d merupakan Tahun Kabisat", year);
		}
		else if (year % 400 != 0 && year % 100 != 0 && year % 4 != 0)
		{
			printf("Tahun %d bukan Tahun Kabisat", year);
		}
	}
	else
	{
		printf("Masukkan Tahun yang sesuai antara 1600 - 2400");
	}
}

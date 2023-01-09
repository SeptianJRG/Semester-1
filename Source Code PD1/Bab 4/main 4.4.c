#include <stdio.h>
#include <math.h>

void main()
{
	float A, B, C, D, x1, x2;
	printf("PROGRAM MENGHITUNG DETERMINAN (D)\n");
	printf("Masukkan nilai A: ");
	scanf("%f", &A);
	printf("Masukkan nilai B: ");
	scanf("%f", &B);
	printf("Masukkan nilai C: ");
	scanf("%f", &C);
	
	D = B * B - (4 * A * C);
	printf("Determinannya: %g", D);
	
	if (D == 0)
	{
		x1 = -B / (2 * A);
		x2 = x1;
		printf("\nPersamaan tersebut memiliki akar-akar yang kembar\n");
		printf("Maka nilai x1 = %g", x1);
		printf("\nMaka nilai x2 = %g", x2);
	}
		else if (D > 0)
		{
			x1 = ((-B + sqrt(D)) / (2 * A));
			x2 = ((-B - sqrt(D)) / (2 * A));
			printf("\nPersamaan tersebut memiliki akar-akar yang berbeda\n");
			printf("Maka nilai x1 = %g", x1);
			printf("\nMaka nilai x2 = %g", x2);
		}
		else if (D < 0)
		{
			x1 = ((-B + sqrt(-D)) / (2 * A));
			x2 = ((-B - sqrt(-D)) / (2 * A));
			printf("\nPersmaan tersebut memiliki akar-akar yang imajiner\n");
			printf("Maka nilai x1 = %g * j", x1);
			printf("\nMaka nilai x2 = %g * j", x2);
		}
}

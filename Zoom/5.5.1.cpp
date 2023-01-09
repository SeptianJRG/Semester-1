/* 5.5.1 */

#include <stdio.h>

int main()
{
	int baris, kolom, n;

	printf("Masukkan Ordo = ");
	scanf("%d", &n);

	printf("\n");

	for (baris=0; baris<n; baris++) {
		for (kolom=0; kolom<n; kolom++) {
			if(baris==kolom)
			printf(" 1 ");
			else
			printf(" 0 ");
		}
	printf("\n");
	}
}

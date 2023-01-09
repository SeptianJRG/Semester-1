/* 5.5.2 */

#include <stdio.h>

int main()
{
	int baris, kolom, angka, n;

	printf("Masukkan Ordo = ");
	scanf("%d", &n);

	printf("\n");

	for (baris=1; baris<=n; baris++) {
		for (kolom=1; kolom<=n; kolom++) {
			angka = baris*kolom;
			printf(" %3d ",angka);
		}
	printf("\n");
	}
}

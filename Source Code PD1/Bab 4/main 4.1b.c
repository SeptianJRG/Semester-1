#include <stdio.h>

void main()
{
	char karakter;
	printf("Masukkan karakter : ");
	scanf("%c", &karakter);
	
	if (karakter >= 'a' && karakter <= 'z')
		printf("%c merupakan Huruf Kecil", karakter);
	else if (karakter >= 'A' && karakter <= 'Z')
		printf("%c merupakan Huruf Kapital", karakter);
	else if (karakter >= '0' && karakter <= '9')
		printf("%c merupakan Angka", karakter);
	else
		printf("%c merupakan Karakter Khusus", karakter);
}

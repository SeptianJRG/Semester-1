#include <stdio.h>
void main()
{
	char karakter; 
	system("cls");
	printf("\nMempelajari penggunaan getche() dengan variable");
	printf("\nTekan tombol yang dikehendaki "); 
	karakter=getch();
	printf("\n\nAnda menekan tombol %f", karakter);
	getch();
}

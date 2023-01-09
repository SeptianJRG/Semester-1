#include <stdio.h>

void main()
{
char karakter; 
system("cls");
	printf("\nMempelajari penggunaan getche() dengan variable");
	printf("\nTekan tombol yang dikehendaki "); 
	karakter=getche();
	printf("\n\nAnda menekan tombol %d", karakter);
	getch();
}


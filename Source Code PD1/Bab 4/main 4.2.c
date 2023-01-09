#include <stdio.h>
#include <math.h>
void main()
{
	float a, b, hasil;
	char oper;
	
	printf("==========KALKULATOR SEDERHANA==========\n\n");
	printf("Masukkan angka diikuti dengan operator matematika\n");
	printf("Tekan 's' lalu enter untuk memulai perhitungan\n");
	printf("Tekan 'e' lalu enter untuk mengakhiri\n\n");
	printf("Masukkan angka jangan lupa tekan 's'\n");
	printf("= ");
	scanf("%f %c", &a, &oper);
	
	if(oper == 's')
	{
		printf("= %g ", a);
		
			ulangi:
			oper = getche();
			if (oper == 'e')
			{
				printf("\nPerhitungan Selesai\n");
			}
			else if(oper)
			{
				scanf("%f", &b);
				if (oper == '+') {hasil = a + b;}
				else if (oper == '-') {hasil = a - b;}
				else if (oper == '*') {hasil = a * b;}
				else if (oper == '/') {hasil = a / b;}
				else if (oper == '%') {hasil = (int)a % (int)b;}
				else if (oper == '&') {hasil = (int)a & (int)b;}
				else if (oper == '|') {hasil = (int)a | (int)b;}
				else {printf("Perhitungan Selesai");}
			
				printf("= %g ", hasil);
				a = hasil;
				goto ulangi;
			}
	}
	else {printf("Harap masukkan 's' setelah angka");}
	getche();
}

/* 5.5.4 */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

	float f,r,k;
	int nomor,suhu;
	suhu = 0;

	printf("| NO | CELSIUS | FAHRENHEIT | REAMUR | KELVIN |\n");
	for (nomor=1; nomor<=11; nomor++) {
		if(nomor==1) {
			suhu=0;
			f = (suhu * 9/5) +32;
			r = (suhu * 4/5);
			k = (suhu + 373);
			printf("| %2d | %7d | %10.f | %6.f | %6.f |\n", nomor, suhu, f, r, k);
			continue;
		}
		suhu = suhu + 10;
		f = (suhu * 9/5) +32;
		r = (suhu * 4/5);
		k = (suhu + 373);
	printf("| %2d | %7d | %10.f | %6.f | %6.f |\n", nomor, suhu, f, r, k);
	}
}


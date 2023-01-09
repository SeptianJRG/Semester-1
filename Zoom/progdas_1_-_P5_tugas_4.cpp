/* pemrograman dasar 1 - P5 - tugas 4 */


#include <stdio.h>
#include <math.h>

int main()
{
	int angka,hasil,sisa;
	
	printf("Masukan Angka: ");
	scanf("%d",&angka);
	
	
    for(;;){
	hasil = angka / 2;
	sisa = angka%2;
	
	printf("%4d / 2 = %3d sisa %d \n",angka,hasil,sisa);
	angka = hasil;
	if(angka==0)break;
    };
}

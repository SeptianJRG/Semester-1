/* pemrograman dasar 1 - P5 - tugas 6 */

#include <stdio.h>
#include <math.h>

int main()
{
	int hitung;
	float a=0,b=0,c,d,nilai;
	float akar=0;
	
	printf("Masukan nilai: ");
	scanf("%g",&nilai);
	
	for(int i=1;i<=6;i++){
		
		if(a==0){b=nilai;a = b / 2;}
		else{a=akar;}
		
		c = nilai/a;
		akar = (a+c)/2;
		printf("Akar = (%g + %g / %g)/2 = (%g + %g)/2 = %g \n",a,nilai,a,a,c,akar);
		a=b;
			
	}
}

/* 5.5.7 */

#include <stdio.h>

int main(){
	int faktor, hasil=1, hitung;
	
	printf("Masukan nilai faktorial: ");
	scanf("%d",&faktor);
	
	printf("\n");
	printf("%d! (%d faktorial) = ",faktor,faktor);
	for(hitung=1;hitung<=faktor;hitung++){
		if(hitung==faktor){printf("%d ",hitung);}
		else{printf("%dx",hitung);}
		hasil=hasil*hitung;
	}
	printf("= %d",hasil);
}

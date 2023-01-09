/* 5.5.6 */

#include <stdio.h>
#include <conio.h>

int main(){
	int bilangan,jumlah=0,hasil=0;
	char ketentuan = 'y';
	
	do{
		printf("Masukkan bilangan bulat positif: ");
		scanf("%d",&bilangan);
		
		printf("Jumlah angka dalam bilangan %d adalah: ",bilangan);
		while(bilangan!=0){
			jumlah = bilangan % 10;
			bilangan = bilangan / 10;
			hasil = hasil+jumlah;
			if(bilangan==0){printf("%d",jumlah);}
			else{printf("%d+",jumlah);}
		}
		printf(" = %d",hasil);
		
		printf("\n\n");
		printf("Coba lagi (y/n)?  ");
		ketentuan = getche();
		printf("\n\n");
		jumlah=0;
		hasil=0;
	}while(ketentuan=='y');
}

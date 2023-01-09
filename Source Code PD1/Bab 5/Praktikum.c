#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*Tugas 5.5.1*/

void tugas1()
{
	int baris, kolom, n;
    system("cls");
	printf("Masukkan Ordo = ");
	scanf("%d", &n);

	printf("\n");

	for (baris=0; baris<n; baris++) {
		for (kolom=0; kolom<n; kolom++) {
			if(baris==kolom)
			printf(" 1 ");
			else
			printf(" 0 ");
		}
	printf("\n");
	}
}


/*Tugas 5.5.2*/

void tugas2()
{
	int baris, kolom, angka, n;
    system("cls");
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


/*Tugas 5.5.3*/

void tugas3()
{
	int bilangan, dibalik;
    system("cls");
	printf("masukkan bilangan: ");
	scanf("%d",&bilangan);

	printf("bilangan dibalik : ");
	while (bilangan>0)
	{		
		dibalik=bilangan%10;
		printf("%d", dibalik);
		bilangan=bilangan/10;
	}
}


/*Tugas 5.5.4*/
// PR wira sableng = 212 farenheit
void tugas4()
{
	int i, j, f, r, k, c, baris;
	system("cls");
	printf("Masukkan jumlah baris = ");
	scanf("%d", &baris);

	printf("No\tCelcius\t\tFahrenheit\tReamur\t\tKelvin\n");
	c=0;
	f=(5/9*c)+32;
	r=c*4/5;
	k=c+273;

	for (i=1; i<=baris; i++)
	{
		printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i, c, f, r, k);
		c+=10;
		f=(5/9*c)+32;
		r=c*4/5;
		k=c+273;
	}
}


/*Tugas 5.5.5*/

void tugas5(){
	int data,nilai,jumlah=0;
	float rata;
	system("cls");
	printf("Masukan banyaknya data nilai: ");
	scanf("%d",&data);
	
	for(int i=1;i<=data;i++){
		printf("Masukan data nilai ke-%d: ",i);
		scanf("%d",&nilai);
		jumlah = jumlah+nilai;
	}
	rata = jumlah / data;
	printf("\njumlah seluruhnya adalah %d\n",jumlah);
	printf("jumlah rata-rata  adalah %g",rata);
}


/*Tugas 5.5.6*/

void tugas6(){
	int bilangan,jumlah=0,hasil=0;
	char ketentuan = 'y';
	system("cls");
	do{
		printf("Masukkan bilangan bulat positif: ");
		scanf("%d",&bilangan);
		
		printf("Jumlah angka dalam bilangan %d adalah: ",bilangan);
		while(bilangan!=0){
			jumlah = bilangan % 10;
			bilangan = bilangan / 10;
			hasil = hasil+jumlah;
			if(bilangan==0)
			{
				printf("%d",jumlah);
			}
			else
			{
				printf("%d+",jumlah);
			}
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


/*Tugas 5.5.7*/

void tugas7(){
	int faktor, hasil=1, hitung;
	system("cls");
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


/*Tugas 5.5.8*/

void tugas8(){
	int data,nilai1,nilain;
	int max,min,hasil;
	float rata;
	system("cls");
	printf("Jumlah data: ");
	scanf("%d",&data);

	printf("Nilai ke-1: ");
	scanf("%d",&nilai1);
	max=nilai1;
	min=nilai1;
	hasil=nilai1;
	
	for(int i=2;i<=data;i++){
		printf("Nilai ke-%d: ",i);
		scanf("%d",&nilain);
		hasil=hasil+nilain;
		if(nilain>max)max=nilain;
		if(nilain<min)min=nilain;
	}
	
	rata = hasil / data;
	printf("Nilai minimal   adalah %d\n",min);
	printf("Nilai maksimal  adalah %d\n",max);
	printf("Nilai rata-rata adalah %g",rata);
}

void main(){
	int pilih;
	do{
		system("cls");
		printf("Masukkan Tugas: ");
		scanf("%d", &pilih);
		switch(pilih){
			case 1:{
				tugas1();
				break;
			}
			case 2:{
				tugas2();
				break;
			}
			case 3:{
				tugas3();
				break;
			}
			case 4:{
				tugas4();
				break;
			}
			case 5:{
				tugas5();
				break;
			}
			case 6:{
				tugas6();
				break;
			}
			case 7:{
				tugas7();
				break;
			}
			case 8:{
				tugas8();
				break;
			}
			case 9:{
				return 0;
				break;
			}
		}
		getch();
	}while(pilih!=0);
}
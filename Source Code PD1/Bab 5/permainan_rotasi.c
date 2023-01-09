#include <stdio.h>
#include <stdlib.h>

void main(){
	int n,i,j,simpan,total=0;
	printf("Masukan jarak\n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	
	printf("Masukan array a\n");
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	printf("Masukan array b\n");	
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	
	do{
		system("cls");
		for(j=0;j<n;j++){
			printf("%2d ",a[j]);
		}puts(" ");
		for(j=0;j<n;j++){
			printf("%2d ",b[j]);
		}puts(" ");
		printf("jika i=0 maka akan muncul total\n");
		printf("i= ");
		scanf("%d",&i);
		if(i!=0){
			simpan=a[i-1];
			a[i-1]=a[i];
			a[i]=b[i];
			b[i]=b[i-1];
			b[i-1]=simpan;
		}		
	}while(i!=0);
	for(j=0;j<n;j++){
		total+=a[j];
	}
	printf("%2d ",total);
}
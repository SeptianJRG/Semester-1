/* 5.5.5 */

#include <stdio.h>

int main(){
	int data,nilai,jumlah=0;
	float rata;
	
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

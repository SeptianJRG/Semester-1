/* 5.5.8 */

#include <stdio.h>

int main(){
	int data,nilai1,nilain;
	int max,min,hasil;
	float rata;
	
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


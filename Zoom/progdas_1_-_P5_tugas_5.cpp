/* pemrograman dasar 1 - P5 - tugas 5 */

#include <stdio.h>
#include <math.h>

int main()
{
	int bil,batas;
	
	printf("Masukan batas maksimum: ");
	scanf("%d",&batas);
	
	for(int i=1;i<=batas;i++){
		bil=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				bil=bil+1;
			}
		}
		if (bil==2){printf("%d, ",i);}
	}
	
}

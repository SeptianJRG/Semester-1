/* 5.5.3 */

#include <stdio.h>

int main()
{
	int bilangan, dibalik;

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

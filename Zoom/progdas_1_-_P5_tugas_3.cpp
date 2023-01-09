/* pemrograman dasar 1 - P5 - tugas 3 */

#include <stdio.h>
#include <math.h>

int main()
{
	int a=2,b,c,i;
    for(i=1;i<=10;i++){
    	if(i==10){printf("%d ",a);break;}
        printf("%d, ",a);
        a*=2;
    };
    printf("\n");
    for(i=1;i<=10;i++){
    	b= pow(i,2);
    	if(i==10){printf("%d ",b);break;}
		printf("%d, ",b);
    };
    printf("\n");
    for(i=1;i<=10;i++){
		c= pow(i,3);
    	if(i==10){printf("%d ",c);break;}
		printf("%d, ",c);
    };
}

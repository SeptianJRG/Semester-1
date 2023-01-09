/* pemrograman dasar 1 - P5 - tugas 2 */

#include <stdio.h>
#include <math.h>

int main()
{
	int a=1,b=2,c=3,d=4,e=5;
	int a1=1,b1=2,c1=3,d1=4,e1=5;
	
    for(int i=1;i<=5;i++){
    	if(i==1){
		printf(" %4d | %4d | %4d | %4d | %4d |\n",a1,b1,c1,d1,e1);
		printf("--------------------\n");
		continue;
    	}
    	a=a*a1;	b=b*b1;	c=c*c1;	d=d*d1;	e=e*e1;
    	printf(" %4d | %4d | %4d | %4d | %4d |\n",a,b,c,d,e);
    };
}

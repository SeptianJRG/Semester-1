#include<stdio.h>

void main()
{
	int a, b, c, d, e, f, g, h, i;
	
	printf("Masukkan nilai a = ");
	scanf("%d", &a);
	printf("Masukkan nilai b = ");
	scanf("%d", &b);
	printf("Masukkan nilai c = ");
	scanf("%d", &c);
	printf("Masukkan nilai d = ");
	scanf("%d", &d);
	
	e = (a > b) && (c < d) || (a == b);
	f = (a == b) || (c == d) && (a < b);
	g = (a <= c) && (b >= d) || (a == d);
	h = (a >= d) || (b <= c) && (c == d);
	i = (a != b) || (c > d) || (a != d);
	
	puts("");
	
	printf("(%d > %d) && (%d < %d) || (%d == %d)\t\t= %d", a,b,c,d,a,b,e);
	puts("");
	printf("(%d == %d) || (%d == %d) && (%d < %d)\t\t= %d", a, b, c, d, a, b, f);
	puts("");
	printf("(%d <= %d) && (%d >= %d) || (%d == %d)\t= %d", a, c, b, d, a, d, g);
	puts("");
	printf("(%d >= %d) || (%d <= %d) && (%d == %d)\t= %d", a, d, b, c, c, d, h);
	puts("");
	printf("(%d != %d) || (%d > %d) || (%d != %d)\t\t= %d", a, b, c, d, a, d, i);
	puts("");
}


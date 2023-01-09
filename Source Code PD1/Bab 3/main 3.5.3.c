#include<stdio.h>

	main()
	{
		int a, b, c, d, x, y, z;
	
		printf("Masukkan nilai A = ");
		scanf("%d", &a);
		printf("Masukkan nilai B = ");
		scanf("%d", &b);
		printf("Masukkan nilai C = ");
		scanf("%d", &c);
		printf("Masukkan nilai D = ");
		scanf("%d", &d);
	
		x = (a > b) ? a:b; 
		y = (c > d) ? c:d;
		z = (x > y) ? x:y;
	
		puts("");
		printf("Nilai A lebih ");
		printf("%s dari pada B", (a>b)?"Besar":"Kecil");
		puts("");
		printf("Nilai C lebih ");
		printf("%s dari pada D", (c>d)?"Besar":"Kecil");
		puts("");
		printf("Jadi nilai maksimum adalah %d", z);
	}


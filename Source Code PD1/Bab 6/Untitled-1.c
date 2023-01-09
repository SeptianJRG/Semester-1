#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
/*
kabisat(int x)
{
    if(x%400 == 0)
    {
        x = 1;
    }
    else if(x%100 == 0)
    {
        x = 0;
    }
    else if(x%4)
    {
        x = 1;
    }
    else
    {
        x = 0;
    }
    return (x);
}
void main()
{
    int x, n;
    system("cls");
    printf("Masukkan tahun: ");
    scanf("%d", &x);
    n = kabisat(x);
    if(x >= 1600 & x <= 2400)
    {
        if(n==1)
        printf("%d adalah tahun kabisat", x);
    else
        printf("%d adalah bukan tahun kabisat", x);
    }
    else
    {
        printf("Masukkan tahun mulai 1600 - 2400");
    }
    /*int x;
    system("cls");
    printf("Program Penentu Tahun Kabisat\n");
    printf("Bernilai '1' jika tahun kabisat\n");
    printf("Bernilai '0' jika bukan tahun kabisat\n\n");
    printf("Masukkan tahun: ");
    scanf("%d", &x);
    printf("Nilai: %d\n", kabisat(x));*/
//}

/*
fact(long int x)
{
    int n, jumlah=1;
    for (n=1; n<=x; n++)
    jumlah=jumlah*n;
    return (jumlah);
}
void main()
{
    long int x;
    system("cls");
    printf("Program Fungsi Faktorial\n");
    printf("Masukkan angka: ");
    scanf("%d", &x);
    printf("\nNilai %d! adalah %d\n", x, fact(x));
}
*/
/*
float factorial(float bil)
{
    int a;
    float hasil=1;

    for(a=1; a<=bil; a++)
    {
        hasil*=a;
    }
    return (hasil);
}
float permutasi(float n, float r)
{
    float p;
    p = factorial(n) / factorial(n-r);
    return p;
}
float kombinasi(float n, float r)
{
    float c;
    c = factorial(n) / (factorial(r) * factorial(n-r));
    return c;
}
void main()
{
    int n,r;
    system("cls");
    printf("Nilai n: ");
    scanf("%d", &n);
    printf("Nilai r: ");
    scanf("%d", &r);
    printf("Nilai Permutasinya adalah : %g\n", permutasi(n,r));
    printf("Nilai Kombinasinya adalah : %g\n", kombinasi(n,r));
}
*/
/*
double suhu(float a, char s, char d)
{
    double i;
    switch(s)
    {
        case 'C':
        {
            if(d=='R')
            {
                i=a*4/5; break;
            }
            else
            {
                i=(a*9/5) + 32; break;
            }
        }
        case 'R':
        {
            if(d=='C')
            {
                i=a*5/4; break;
            }
            else
            {
                i=(a*9/4) + 32; break;
            }
        }
        case 'F':
        {
            if(d=='C')
            {
                i=(a-32) * 5/9; break;
            }
            else{
                i=(a-32) * 4/9;
            }
        }
    }
    return i;
}
void main()
{
    int t;
    char s, d, yes='y';
    system("cls");

    while(yes=='y')
    {
        printf("Masukkan suhu (contoh: 100 C): ");
        scanf("%d %c", &t, &s);
        printf("Masukkan tujuan suhu (C, R, F): ");
        d = getche();
        printf("\n");
        if(d=='R')
        {
            printf("Hasil konversi suhu: %g Reamur", suhu(t, s, d));
        }
        else if(d=='F')
        {
            printf("Hasil konversi suhu: %g Fahrenheit", suhu(t, s, d));
        }
        else if(d=='C')
        {
            printf("Hasil konversi suhu: %g Celcius", suhu(t, s, d));
        }
        printf("\nLanjut? (y/n) ");
        yes = getche();
        printf("\n");
    }
}
*/
/*
//karena habis dibagi 1 dan bilangan itu sendiri makanya hasilnya 2
int prima(int n)
{
    int hasil, bil=0, i;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            bil+=1;
        }
    }
    if(bil==2)
    {
        hasil=1;
    }
    else
    {
        hasil=0;
    }
    return hasil;
}
void main()
{
    int n, bil;
    system("cls");
    printf("Masukkan angka: ");
    scanf("%d", &n);
    printf("%d adalah ", n);
    bil = prima(n);
    if(bil==1)
    printf("bilangan tersebut: '1'");
    else
    printf("bilangan tersebut: '0'");
    printf("\n");
}
*/
/*
//revisi
int register1()
{
    clock_t start = clock();
    for (register i=1; i<=1000; i++)
    {
        printf("1");
    }
    clock_t end = clock();
    double elapsed = (end - start) / CLOCKS_PER_SEC;
    printf("\n\nMemerlukan waktu sekitar: %g seconds\n\n", elapsed);
}
int integer1()
{
    clock_t start1 = clock();
    for(int j=1; j<=1000; j++)
    {
        printf("0");
    }
    clock_t end1 = clock();
    double elapsed2 = (end1 - start1) / CLOCKS_PER_SEC;
    printf("\n\nMemerlukan waktu sekitar: %g seconds\n\n", elapsed2);
}
void main()
{

    int n;
    system("cls");
    printf("Pilih tipe ekseskusi: ");
    scanf("%d", &n);
    if(n==1)
    {*/
       //printf(register1());
    //}
    //else
    //{
        //printf(integer1());
    //}
//}

void main()
{
    system("cls");
    unsigned int Last=0;
    unsigned int Now=0;
    Last = GetTickCount();
    for(register i=1; i<=10000; i++)
    {printf("x");}
    Now = GetTickCount();
    
    unsigned int Last1=0;
    unsigned int Now1=0;
    Last1 = GetTickCount();
    for(int j=1; j<=10000; j++)
    {printf("x");}
    Now1 = GetTickCount();

    printf("\n\nWaktu Eksekusi menggunakan register: %d miliseconds.\n", (Now-Last));
    printf("\n\nWaktu Eksekusi menggunakan integer: %d miliseconds.\n\n", (Now1-Last1));
}
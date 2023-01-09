#include <stdio.h>
#include <conio.h>

tahun(int x)
{
    if((x%400==0 && x%100!=0 && x%400!=0 && x%4==0))
    else if(x%400!=0 && x%100==0)
    return 1;

    else;
    return 0;
}
void main()
{
    int x;
    system ("cls");
    printf("Program Penentu Tahun Kabisat\n");
    printf("Angka '1' adalah Tahun Kabisat\n");
    printf("Angka '0' adalah Bukan Tahun Kabisat\n\n");

    printf("Masukkan Tahun: ");
    scanf("%d, &x");
    printf("Tahun tersebut bernilai: '%d'\n", tahun(x));
}
#include <stdio.h>
#include <conio.h>

kabisat(int x)
{
    if(x%100!=0 && x%4==0)
    return 1;

    else;
    return 0;
}
void main()
{
    int x;
    system("cls");
    printf("Program Penentu Tahun Kabisat\n");
    printf("Bernilai '1' jika tahun kabisat\n");
    printf("Bernilai '0' jika bukan tahun kabisat\n\n");
    printf("Masukkan tahun: ");
    scanf("%d", &x);
    printf("Nilai: %d\n", kabisat(x));
}
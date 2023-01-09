#include <stdio.h>
#include <conio.h>

// #define MAX 1000

// Tugas 7.1
/*
int max(int bil[], int jumlah)
{
    int terbesar = bil[0];
    for (int i=1; i<jumlah; i++)
    {
        if (bil[i] > terbesar)
        {
            terbesar = bil[i];
        }
    }
    return terbesar;
}
int genap(int bulat[], int jumlah)
{
    int hasil;
    printf("\nBilangan genap: ");
    for (int i=0; i<jumlah; i++)
    {
        if (bulat[i] % 2==0)
        printf("%d ", bulat[i]);
    }
    return 0;
}
int kecil(int min[], int jumlah)
{
    int hasil;
    for (int i=1; i<jumlah; i++)
    {
        for (int j=0; j<jumlah-i; j++)
        {
            if (min[j] > min[j+1])
            {
                hasil = min[j];
                min[j] = min[j+1];
                min[j+1] = hasil;
            }
        }
    }
    printf("\nUrut dari nilai yang terkecil: ");
    for (int k=0; k < jumlah; k++)
    {
        printf("%d ", min[k]);
    }
    return 0;
}
float z(int bil[], int jumlah)
{
    int hasil=0, pembagi=0;
    float rata;
    for (int i=0; i<jumlah; i++)
    {
        hasil += bil[i];
        pembagi += 1;
    }
    rata = (float)hasil/(float)pembagi; 
    return rata;
}
float median(int bil[], int jumlah)
{
    int hasil; 
    float tengah;
    for(int i=1; i<jumlah; i++)
    {
        for(int j=0; j<jumlah-i; j++)
        {
            if(bil[j] > bil[j+1])
            {
                hasil = bil[j]; 
                bil[j] = bil[j+1]; 
                bil[j+1] = hasil;
            }
        }
    }
    if (jumlah % 2 == 0)
    tengah = (bil[jumlah / 2]+bil[(jumlah / 2)-1]) / 2; 
    else
    tengah = bil[jumlah/2]; 
    return tengah;
}
void main()
{
    int bil[100]; 
    int i,j,jmlh; 
    system("cls");
    printf("masukkan jumlah array: ");
    scanf("%d", &jmlh); 
    for(i=0; i<jmlh; ++i)
    {
        printf("masukkan bilangan %d = ", i+1); 
        scanf("%d", &bil[i]);
    }
    printf("\nNilai array bilangan: "); 
    for(j=0; j<jmlh; j++)
    {
        printf("%d ", bil[j]);
    }
    printf("\nNilai terbesar: %d", max(bil, jmlh)); 
    printf(genap(bil, jmlh));
    printf(kecil(bil, jmlh));
    printf("\nNilai rata-rata: %g", z(bil, jmlh)); 
    printf("\nNilai tengahnya: %g\n\n", median(bil, jmlh));
}
*/

// Tugas 7.2
/*
int asc (int bil[], int jumlah)
{
    int hasil;
    for (int i=1; i<jumlah; i++)
    {
        for (int j=0; j<jumlah-i; j++)
        {
            if (bil[j] > bil[j+1])
            {
                hasil = bil[j];
                bil[j] = bil[j+1];
                bil[j+1] = hasil;
            }
        }
    }
    printf("\nJumlah Data: ");
    for (int k=0; k<jumlah; k++)
    {
        printf("%d ", bil[k]);
    }
    return 0;
}
void main()
{
    static int data[100];
    int jmlh;
    system("cls");
    printf("Jumlah Data: ");
    scanf("%d", &jmlh); 
    for (int i=0; i<jmlh; i++)
    {
        printf("Data ke-%d = ", i+1); 
        scanf("%d", &data[i]);
    }
    printf(asc(data, jmlh));
    puts("\n");
}
*/

// Tugas 7.3
/*
void main()
{
    static int prima[MAX];
    int bilangan;
    system("cls");

    printf("Masukkan Jumlah Max: ");
    scanf("%d", &bilangan);
    for(int i=2; i<bilangan; i++)
    {
        if (prima[i] == 0)
        {
            for (int j=i*i; j<bilangan; j += i)
            {
                prima[j] = 1;
            }
        }
    }
    for (int i=2; i<bilangan; i++)
    {
        if (prima[i]==0)
        {
            printf("%d ",i);
        }
    }
}
*/

// Tugas 7.4
/*
void main()
{
    static int square[1000][1000]; 
    int max, ordo, baris, angka, kolom;
    system("cls");
    ulang:
    printf("Masukkan ordo: ");
    scanf("%d", &ordo); 
    if (ordo >= 3 & ordo <= 19)
    {
        if (ordo % 2 == 0)
        {
            printf("Masukkan Bilangan Ganjil\n");
            goto ulang;
        }
    }
    else
    {
        printf("Masukkan Ordo Antara 2 < Ordo <= 19\n"); 
        goto ulang;
    }
    kolom = ordo/2; 
    baris = 0; 
    max = ordo*ordo;
    for (int angka=1; angka<=max; angka++)
    {
        square[baris][kolom] = angka;
        kolom++;
        if (angka % ordo == 0)
        {
            baris += 1;
            kolom--;
        }
        else baris--;
        if (baris < 0)
        {
            baris = ordo - 1;
        }
        if (kolom >= ordo)
        {
            kolom = 0;
        }
    }
    for(int i=0; i<ordo; i++)
    {
        printf ("\n");
        for (int k=0; k<ordo; k++)
        {
            printf("%d\t", square[i][k]);
        }

    }
    puts("\n");
}
*/

// Tugas 7.5
/*
void main()
{
    int tgl, bln, thn, hasil, k_bulan;
    char a, b;
    static int kode_bulan[12] = {1,4,4,0,2,5,0,3,6,1,4,6};
    static char kode_hari[7][10] = {"Sabtu","Minggu","Senin","Selasa","Rabu","Kamis","Jumat"};
    system("cls");
    
    printf("Berlaku Untuk Range Tahun 1900 - 2000\n");
    ulang:
    printf("Masukkan Tanggal (dd-mm-yy): ");
    scanf("%d %c %d %c %d", &tgl, &a, &bln, &b, &thn);
    if (thn >= 100)
    {
        printf("Masukkan dua angka belakang dari tahun (yy)\n");
        goto ulang;
    }
    hasil = (tgl + kode_bulan[(int)bln-1] + thn + thn/4) % 7;
    printf("Hasilnya yaitu %d\n", hasil);
    printf("Tanggal tersebut merupakan hari %s", kode_hari[hasil]);
    puts("\n");
}
*/
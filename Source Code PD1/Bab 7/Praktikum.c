#include <stdio.h>
#include <conio.h>
#include <string.h>

// Praktikum 7.5.1
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

// Praktikum 7.5.2

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


// Praktikum 7.5.3
/*
int main()
{
	int nominal;
    system("cls");
	float nilai;
	int tugas=3, f=1;
	int tot=0;
	char isinama[20];
	
	int tanda=0;
	
	char materi[3][20] = {"Bahasa","Matematika","Digital"};
	
	printf("Masukan banyaknya Mahasiswa: ");
	scanf("%d",&nominal);
	int mahasiswa[nominal];
	char nama[nominal][20];
	int hasil[nominal][tugas];
	float total[tugas];
	double rata[3];
	for(int i=0;i<nominal;i++){	
		
		printf("\nMasukan Nama Mahasiswa ke %d: ",f);
		getchar();scanf("%s",nama[i]);
		//printf("\n");
		//printf("%d Nama Mahasiswa: %s\n",i,nama[i]);	
		f++;
		tot=0;
		for(int j=0;j<tugas;j++){	
			printf("Masukan Nilai %s: ",materi[j]);
			scanf("%f",&nilai);
			
			hasil[i][j]=nilai;
			tot+=nilai;
			//printf("Nilai %d total %d\n\n",nilai,tot);		
		}
		total[i]=tot;
		rata[i]=total[i]/tugas;
		//printf("Rata %g total %d tugas %d\n\n",rata[i],total[i],tugas);	
		tanda=1;
	}
	printf("\n");
	if(tanda==1){
		printf("| No | Nama Mahasiswa | Bahasa | Matematika | Digital | Rata-rata |\n");
		for(int i=0; i<nominal; i++) {
		printf("| %2d | %14s | %6d | %10d | %7d | %9.2f |\n",i+1,nama[i],hasil[i][0],hasil[i][1],hasil[i][2],rata[i]);	
		}
	}
}
*/
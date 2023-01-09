# include <stdio.h> 
# include <conio.h>

//PRAKTIKUM 7.5.1

int ascending(int bil[], int jumlah)
{
    int hasil;
    for(int i=1; i<jumlah ;i++)
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
    printf("\njumlah data: "); 
    for(int k=0; k<jumlah; k++)
    {
        printf("%d ", bil[k]);
    }
    return 0;
}

void tugas1()
{
    static int data[100]; 
    int jml; 
    system("cls");
    printf("jumlah data: "); 
    scanf("%d", &jml); 
    for(int i=0; i<jml; i++)
    {
        printf("data ke-%d = ", i+1); scanf("%d", &data[i]);
    }
    printf(ascending(data, jml)); 
    puts("\n");
}


//PRAKTIKUM 7.5.2

#define MAX 46349 
void tugas2()
{
    static int prima[MAX]; 
    int i,j,bil; 
    system("cls");

    printf("masukkan jumlah max: ");
    scanf("%d",&bil); 
    for(i=2; i<bil; i++)
    {
        if(prima[i]==0)
        {
            for(j=i*i; j<bil; j+=i)
            {
                prima[j]=1;
            }
        }
    }
    for(i=2; i<bil ;i++)
    {
        if(prima[i]==0)
        {
            printf("%d ",i);
        }
    }
}


//PRAKTIKUM 7.5.3

int tugas3()
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
int main(){
    system("cls");
    int tugas;
    do{
        printf("\nTugas Ke: ");
        scanf("%d", &tugas);
        switch(tugas){
            case 1:{
                tugas1();
                break;
            }
            case 2:{
                tugas2();
                break;
            }
            case 3:{
                tugas3();
                break;
            }
            
        }
    }
    while(tugas!=0);
}
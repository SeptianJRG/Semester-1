#include <stdio.h> 
#include <conio.h> 
#include <string.h>

//PRAKTIKUM 8.5.1

char strsisip(char teks[], char sisip[], int nmr)
{
    static char hasil[100], str1[100]; 
    strncpy(str1,teks,nmr); 
    strcat(str1,sisip); 
    strncpy(hasil,teks+nmr,strlen(teks)); 
    strcat(str1,hasil);
    printf("\nkalimat: %s\n", teks);
    printf("disisipkan '%s' pada kolom %d: \n\n%s\n\n",sisip,nmr,str1);
}

void tugas1()
{
    system("cls");
    char teks[]="salah orang"; 
    strsisip(teks,"se",6);
}


//PRAKTIKUM 8.5.2

void tugas2()
{
    system("cls");
    static char kalimat[100], hasil[100]; 
    printf("kalimat: "); 
    getchar();
    gets(kalimat);

    strcpy(hasil,kalimat); 
    strrev(hasil);

    if(strcmp(hasil,kalimat)==0)
    {
        printf("Termasuk PALINDROM\n\n");
    }
    else
    {
        printf("Bukan PALINDROM\n\n");
    }
}


//PRAKTIKUM 8.5.3

void tugas3()
{
    system("cls"); 
    static char a[100]; char b;
    int kcl,bsr,nmr,tndb;
    kcl=bsr=nmr=tndb=0; 
    printf("kalimat: ");
    getchar();
    scanf("%s", &a);

    for(int i=0; i<=strlen(a); i++)
    {
        b=a[i];
        if(b >= 97 & b <= 122)
        {
            kcl++;
        }
        else if(b>=33 & b<=47 | b>=58 & b<=64 | b>=91 & b<=96 | b>=123 & b<=126)
        {
            tndb++;
        }
        else if(b>=48 & b<=57)
        {
            nmr++;
        }
        else if(b>= 65 & b<= 90)
        {
            bsr++;
        }
    }
    printf("jumlah huruf kecil: %d\n", kcl); 
    printf("jumlah huruf besar: %d\n", bsr); 
    printf("jumlah angka numerik: %d\n", nmr);
    printf("jumlah tanda baca/karakter khusus: %d\n\n", tndb);
}


//PRAKTIKUM 8.5.4

void tugas4()
{
    system("cls");
    static char str1[] = "POLITEKNIK ELEKTRONIKA NEGERI SURABAYA";
    int d,a; 

    d = strlen(str1); 
    a = d;
    for(int i=0; i<=d; i++)
    {
        for(int b=a; b>0; b--)
        {
        printf(" ");
        }
        a--;
        for(int j=0; j<i; j++)
        {
        printf("%c",str1[j]);
        }
    puts("");
    }
}

void main(){
    system("cls");
    int tugas;
    do{
        printf("\nTugas ke: ");
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
            case 4:{
                tugas4();
                break;
            }
        }
    }
    while(tugas!=0);
}
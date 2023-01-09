#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

/*
//Tugas 9.1
void main()
{
    system("cls");
    static int a, b[16], c, d;
    char e[16], *f;
    mulai:
    printf("\n Sebelum diurutkan...\n");
    for(a=1;a<13;a++)
    {
        printf("ANgka ke %d: ", a);
        scanf("%d", &b[a]);
    }
    printf("\n Setelah diurutkan...\n");
    for(a=1;a<13;a++)
    {
        for(d=a+1;d<13;d++)
        {
            if(*(b+a)>*(b+d))
            {
                c=*(b+d);
                *(b+d)=*(b+a);
                *(b+a)=c;
            }
        }
        printf("Angka ke %d: %d\n", a, *(b+a));
    }
    printf("\n Ketik 'exit' untuk selesai...\n");
    gets(e);
    printf(" ");
    gets(e);
    f=strlwr(e);
    if(strcmp(f,"exit")==0);
    else
    {
        system("cls");
        goto mulai;
    }
}*/


//Tugas 9.2
void main()
{
    system("cls");
    static int a[12][12], b, c, *d, e, f, g;
    char h[8], *i;
    opsi1:
    g=1;
    for(e=0;e<12;e++)
    {
        for(f=0;f<12;f++)
        a[e][f]=48;
    }
    opsi2:
    system("cls");
    d=&a;
    printf("\n\r");
    for(e=1;e<13;e++)
    {
        for(f=1;f<13;f++)
        printf("%2c", *d++);
        puts("");
    }
    if(g>1)
    {
        printf("\nKetik 'next' untuk melanjutkan");
        printf("\nKetik 'retry' untuk mengulang dari awal");
        printf("\nKetik 'exit' untuk selesai\n");

        gets(h);
        gets(h);
        i=strlwr(h);
        if(strcmp(i,"next")==0)
        {
            g=1;
            goto opsi2;
        }
        else
        if(strcmp(i,"retry")==0)
        goto opsi1;
        else
        if(strcmp(i,"exit")==0);
        else 
        goto opsi2;
    }
    else
    {
        g++;
        printf("\nMasukkan koordinat(baris,kolom) antara 1-12: ");
        scanf("%d,%d", &b,&c);
        --b;
        --c;
        a[b][c]=120;
        goto opsi2;
    }
}

/*
//Tugas 9.3
void main()
{
    int i,j,k,a;
    int *c;
    static int data_huruf[5][8][8]={
        {
            {0,1,1,1,1,1,0,0},
            {0,1,0,0,0,1,0,0},
            {0,1,0,0,0,1,0,0},
            {1,1,1,1,1,1,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,0,1,0},
            {0,0,0,0,0,0,0,0}
        },
        {
            {1,1,1,1,1,1,0,0},
            {1,0,0,0,0,1,0,0},
            {1,0,0,0,0,1,0,0},
            {1,1,1,1,1,1,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,1,1,1,1,1,0},
            {0,0,0,0,0,0,0,0}
        },
        {
            {1,1,1,1,1,1,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,0,0,0},
            {1,1,0,0,0,0,0,0},
            {1,1,0,0,0,0,0,0},
            {1,1,0,0,0,0,1,0},
            {1,1,1,1,1,1,1,0},
            {0,0,0,0,0,0,0,0}
        },
        {
            {1,1,1,1,1,1,0,0},
            {1,1,0,0,0,1,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,0,1,0},
            {1,1,0,0,0,1,1,0},
            {1,1,1,1,1,1,0,0},
            {0,0,0,0,0,0,0,0}
        },
        {
            {1,1,1,1,1,1,1,0},
            {1,1,0,0,0,0,0,0},
            {1,1,0,0,0,0,0,0},
            {1,1,1,1,1,1,1,0},
            {1,1,0,0,0,0,0,0},
            {1,1,0,0,0,0,0,0},
            {1,1,1,1,1,1,1,0},
            {0,0,0,0,0,0,0,0}
        }
    };
    system("cls");

    c=NULL;
    c=(int*)calloc(8,sizeof(int));
    c=&data_huruf;
    for(i=0; i<5; i++)
    {
        for(j=0; j<8; j++)
        {
            for(k=0; k<8; k++)
            {
                if(*c++)
                printf("%c",219);
                else
                printf(" ");
            }
            puts("");
        }
        puts("");
    }
}*/

/*
//Tugas 9.4
int huruf(char *c)
{
    if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
    return(1);
    else
    return(0);
}

int hitung_kata(char *string)
{
    int i, kata=1, sum=0;
    for (i=0; *(string+i)!='\0'; i++)
    {
        if (huruf(*(string+i)))
        {
            if(kata)
            {
                sum++;
                kata=0;
            }
        }
        else
        {kata=1;}
    }
    return (sum);
}

char title_case(char *string)
{
    int i, kata=1;
    for (i=0; *(string+i)!='\0'; i++)
    {
        if (huruf(*(string+i)))
        {
            if(kata)
            {   
                *(string+i)=toupper(*(string+i));
                kata=0;
            }
        }
        else
        {kata=1;}
    }
    printf("\nAwal huruf dari tiap kata menjadi kapital:\n");
    for(int i=0; i<strlen(string); i++)
    {
        printf("%c", *(string+i));
    }
    return 0;
}

void main()
{
    int hitung;
    char kalimat[100], *teks;
    system("cls");

    printf("Masukkan kalimat: ");
    gets(kalimat);

    teks=&kalimat;
    hitung = hitung_kata(teks);
    printf("Terhitung ada %d kata pada teks di atas\n",hitung);

    printf(title_case(teks));
}*/
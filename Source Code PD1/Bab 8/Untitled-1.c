#include <stdio.h>
#include <string.h>

//tugas 8.1
/*
char a[100], b[100],c[100];
strsisip(char b[],char a[],int z)
{
strncpy(c,b,z);
strncat(c+z,a,strlen(a)-1);
strcat(c+z+strlen(a)-1,b+z);
}
void main()
{
int z;
system("cls");
printf("Masukkan teks: ");
fgets(b,sizeof b,stdin);
printf("Teks yang akan disisipkan: ");
fgets(a,sizeof a,stdin);
printf("Disisipkan setelah karakter ke: ");
scanf("%d",&z);
strsisip(b,sizeof a,z);
puts(" ");
printf(c);
puts(" ");
}
*/

//tugas 8.2
/*void main()
{
    system("cls");
    char a[20], b[20];

    mulai:
    printf("Masukkan string: ");
    gets (a);
    strcpy(b,a);
    strrev(a);

    if (strcmp(a,b) == 0)
    {
        printf("\nMerupakan polindrom");
    }
    else
    {
        printf("\nBukan polindrom\n");
    }
    while (strcmp(a,b) != 0)
    goto mulai;
}
*/

//tugas 8.3
/*
void main(){
    system("cls"); 
    char a[100]; 
    int b, c=0, d=0, e=0, f=-1; 
                                     
    printf("Masukkan sebuah teks: "); 
    fgets(a,sizeof a,stdin); 
    for(b=0; a[b]; b++){ 
            if(a[b] >= '0' && a[b] <= '9') 
                c++; 
            else{ 
                  if(a[b] >= 'a' && a[b] <= 'z') 
                    d++; 
                  else{ 
                        if(a[b] >= 'A' && a[b] <= 'Z') 
                            e++; 
                        else 
                            f++; 
                  } 
            } 
      } 
                                     
    printf(" Jumlah angka: %d\n",c); 
    printf(" Jumalah Huruf kecil: %d\n",d); 
    printf(" Jumalah Huruf besar: %d\n",e); 
    printf(" Jumalah Tanda baca: %d\n",f); 
}
*/

//tugas 8.4
void main(){
    system("cls");
    char teks[100];
    printf("Masukkan teks: ");
    fgets(teks,sizeof teks,stdin);
    int spasi=strlen(teks),a=0;
    for(int i=0;i<strlen(teks);i++){
        for(int j=0;j<spasi;j++){
            printf(" ");}
        for(int k=0;k<a;k++){
            printf("%c ",teks[k]);}
            printf("\n");
            spasi--;
            a++;
    }
    puts(" ");
}
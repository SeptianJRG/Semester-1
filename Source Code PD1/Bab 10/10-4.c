#include <stdio.h> 
#include <stdlib.h>

int sama_str(char s1[], char s2[]){
	int i=0, jawab;
	while (s1[i]==s2[i] && s1[i] != '\0' && s2[i] !='\0'){++i;} 
	if (s1[i]=='\0' && s2[i]=='\0'){jawab=1;} //string sama 
	else{jawab=0;}
	return (jawab);
}
 
int main(){
    system("cls");
	char kar1[100],kar2[100];
	printf("Masukan Kata1: ");
	gets(kar1);
	printf("Masukan Kata2: ");
	gets(kar2);
	printf("Hasilnya %i ",sama_str(kar1,kar2));
}

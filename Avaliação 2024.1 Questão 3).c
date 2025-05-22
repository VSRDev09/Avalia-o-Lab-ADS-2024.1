#include <stdio.h>

void organizaCaracteresEspeciais(char caracteres[]){
	for (int i = 0; caracteres[i]!='\0'; i++){
		if ((caracteres[i] < 65 || (caracteres[i] > 90 && caracteres[i] < 97) || caracteres[i] > 122)){
			caracteres[i]= ' ';
		}
	}
	
	printf ("Caracteres especiais removidos:");
	for (int i = 0; caracteres[i] != '\0'; i++){
		if (caracteres[i]!= ' '){
			printf ("%c", caracteres[i]);
		}
	}
}

int main (){
	char caracteres[20];
	printf ("Digite uma sequencia de caracteres: \n");
	fgets (caracteres, 20, stdin);
	organizaCaracteresEspeciais(caracteres);
	
}
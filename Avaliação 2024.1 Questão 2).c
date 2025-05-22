#include <stdio.h>

void inverterData(char data[]){
	
	int aux;
	char data_dia[3];
	char data_mes[3];
	char data_ano[5];
	
	data_dia[0] = data[0];
	data_dia[1] = data[1];
	data_dia[2] = '\0';
	
	data_mes[0] = data[3];
	data_mes[1] = data[4];
	data_mes[2] = '\0';
	
	data_ano[0] = data[6];
	data_ano[1] = data[7];
	data_ano[2] = data[8];
	data_ano[3] = data[9];
	data_ano[4] = '\0';
	
	
	
	printf ("Data Invertida: %s/%s/%s", data_ano,data_mes,data_dia);
}



int main (){
	printf ("Informe a data no formato dd/mm/aaaa: \n");
	char data[11];
	fgets (data, 11, stdin);
	
	inverterData(data);
	printf ("\nData Original: %s", data);
		
	
}
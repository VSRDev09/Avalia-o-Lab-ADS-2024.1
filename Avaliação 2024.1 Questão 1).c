#include <stdio.h>

struct Aluno{
	char nome [50];
	int matricula;
	char sexo;
	int idade;
};

struct Disciplinas{
	char nome [30];
	char professor[50];
	struct Aluno alunos[60];
};

void MatricularAluno (struct Aluno *novo, struct Disciplinas *Disciplina, int qtd[]){
	int escolha;
	printf ("Escolha a Disciplina: \n");
	printf ("[1] para Portugues\n[2] para Matematica\n[3] para Historia\n");
	scanf ("%d", &escolha);
	switch (escolha){
		case 1:{
		
			qtd[0]++;
			
			if (qtd[0]>59){
			printf ("Disciplina lotada!");	
			} else {
					Disciplina[0].alunos[0] = *novo;
					printf ("Aluno: %s matriculado na disciplina %s com sucesso!", Disciplina[0].alunos[0].nome, Disciplina[0].nome);
			}
			break;
		}
		case 2:{
			
			qtd[1]++;
			
			if (qtd[1]>59){
			printf ("Disciplina lotada!");	
			} else {
					Disciplina[1].alunos[0] = *novo;
					printf ("Aluno: %s matriculado na disciplina %s com sucesso!", Disciplina[1].alunos[0].nome, Disciplina[1].nome);
			}
			break;
		}
		case 3:{
			
			qtd[2]++;
			
			if (qtd[2]>59){
			printf ("Disciplina lotada!");	
			} else {
					Disciplina[2].alunos[0] = *novo;
					printf ("Aluno: %s matriculado na disciplina %s com sucesso!", Disciplina[2].alunos[0].nome, Disciplina[2].nome);
			}
			break;
		}
		default:{
			printf ("Valor invalido!");
			break;
		}
	}	
}

int main (){
	struct Disciplinas Disciplina[3] = {
		
	{"Portugues", "Cleber"},
	{"Matematica", "Cleiton"},
	{"Historia", "Sonia"}
		 
	};
	
	int qtd[3]= {0};
	struct Aluno novo = {
		"Joao", 202411600, 'M', 15
	};

	MatricularAluno(&novo, Disciplina, qtd);
}
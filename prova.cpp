/*Escreva um printf com as seguintes informações: nome da disciplina (Algoritmo e
Programação), nome do professor (Joyce Siqueira), nome completo do aluno, matrícula, curso, link do
repositório do GitHub e qual software foi utilizado: DevC++ ou VSCode.*/
#include <stdio.h>
#include <math.h>
int main(){
	printf ("Diciplina: Algoritmo e Programacao\n\nProfessor: Joyce Siqueira\n\nNome completo: Guilherme Henrique Candido Morais\n\nmatricula: UC22200490\n\ncurso: ADS");
	printf("\n\nlink do repositorio do GitHub: https://github.com/Guilhrme-hen/Prova-Algoritimo.git\n\nSoftware utilizado: Devc++");

	char nemeobra[20];
	int opicao,inicioObra,terminoObra,situacaoObra,mesesquefalta;
	double a,CatetoOposto,CatetoAdjacente,hipotenusa,SomaDaHipotenusa;
	
	printf ("\n\nescolha a opicao desejada\n\n");
	printf ("[1] Questao A\n[2] Questao B\n");
	
	scanf ("%i", &opicao);
		
		switch (opicao)
		{	
			case 1:
				printf ("digite o valor do cateto oposto: ");
				scanf ("%lf" ,&CatetoOposto);
				
				printf ("digite o valor do cateto adjacente: ");
				scanf ("%lf" ,&CatetoAdjacente);
				
				a = (CatetoOposto*CatetoOposto) + (CatetoAdjacente*CatetoAdjacente); 
				
						
				printf("hipotenusa e %lf", sqrt (a));
			
			break;
			
			case 2:	
				printf ("digite o nome da obra: ");
				scanf ("%s", &nemeobra);
				
				printf ("digite o mes do inicio da obra: ");
				scanf ("%i",&inicioObra);
				printf ("digite o mes do termino da obra: ");
				scanf ("%i",&terminoObra);
				printf ("qual a situacao da obra: ");
				scanf ("%i",&situacaoObra);
					
				mesesquefalta = terminoObra - inicioObra;
				
				if (situacaoObra == 1){
					
				printf ("nome da obra: %s\n",nemeobra);
				printf ("situacao: Obra Concluida\n");
				printf ("Tempo de execucao: %i ",mesesquefalta);
			}
				if (situacaoObra == 2){
					
				printf ("nome da obra: %s\n",nemeobra);
				printf ("situacao: Problemas no projeto\n");
				printf ("Tempo de execucao: %i ",mesesquefalta);
			}
				if (situacaoObra == 3){
					
				printf ("nome da obra: %s\n",nemeobra);
				printf ("situacao: Atraso nos repasses financeiros\n");
				printf ("Tempo de execucao: %i ",mesesquefalta);
			}			
		
				if (situacaoObra == 4){
					
				printf ("nome da obra: %s\n",nemeobra);
				printf ("situaçao: Greve dos trabalhadores\n");
				printf ("Tempo de execução: %i ",mesesquefalta);
			}		
				if (situacaoObra == 5){
					
				printf ("nome da obra: %s\n",nemeobra);
				printf ("situacao: Falta de materiais\n");
				printf ("Tempo de execucao: %i ",mesesquefalta);
			}		
		
				if (situacaoObra == 6){
					
				printf ("nome da obra: %s\n",nemeobra);
				printf ("situacao: Falta de equipamentos\n");
				printf ("Tempo de execucao: %i ",mesesquefalta);
			}		
		break;
		
		default:
			printf ("opiçao nao existe");
		break;	
		
		
		
		
		}
	
		printf ("corrige com carinho ksksksks");
}

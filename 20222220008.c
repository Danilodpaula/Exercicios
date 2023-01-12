//O programa deve receber como entrada três notas de cada aluno em uma linha;
//Deve perguntar ao usuário se deseja inserir as notas de outro aluno, e:
//Caso a resposta seja “sim” deve solicitar os dados do próximo aluno.
//Caso a resposta seja “não” deve mostrar a maior e a menor nota do primeiro, 
//do segundo, e do terceiro exercício e a maior e a menor média.
#include <stdio.h>

int main(){
	
    float nota_max1 = -10000;
	float nota_max2 = -10000; 
	float nota_max3 = -10000;
	
    float nota_min1 = 10000; 
	float nota_min2 = 10000;
	float nota_min3 = 10000;
	
    float media_max = -10000;
    float media_min = 10000;
    
    	
        while(1){
		
        	float nota_ex1, nota_ex2, nota_ex3;
        	char resposta;
        	
            printf("Digite as notas dos 3 exercicios do aluno: ");
            scanf("%f %f %f", &nota_ex1, &nota_ex2, &nota_ex3);
			
            
	        float media_final = (nota_ex1 + nota_ex2 + nota_ex3)/3;
	        
	        //media max e min
	        
	        if(media_final > media_max){
	        	media_max = media_final;
			}
	        
	        if(media_final < media_min){
	        	media_min = media_final;
			}
	        
	        // nota max e min alunos
	        
	        if(nota_ex1 > nota_max1){
	        	nota_max1 = nota_ex1;
			}
			
			 if(nota_ex2 > nota_max2){
	        	nota_max2 = nota_ex2;
			}
			
			 if(nota_ex3 > nota_max3){
	        	nota_max3 = nota_ex3;
			}
			
			 if(nota_ex1 < nota_min1){
	        	nota_min1 = nota_ex1;
			}
			
			 if(nota_ex1 < nota_min2){
	        	nota_min2 = nota_ex2;
			}
			
			 if(nota_ex1 < nota_min3){
	        	nota_min3 = nota_ex3;
			}
		
		printf("Deseja inserir as notas de outro aluno? (s/n): ");
    	scanf(" %c", &resposta);
    
   		if (resposta == 'n') {
        break;
    	}
		
	}
   		 
        printf("Exercicio 1 - Maior nota = %.2f  , Menor nota = %.2f \n",nota_max1, nota_min1);
        printf("Exercicio 2 - Maior nota = %.2f  , Menor nota = %.2f \n",nota_max2, nota_min2);
        printf("Exercicio 3 - Maior nota = %.2f  , Menor nota = %.2f \n",nota_max3, nota_min3);
        printf("Maior media = %.2f  e Menor media = %.2f  \n",media_max, media_min);
	
	return 0;
}
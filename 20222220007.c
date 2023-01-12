//20222220007 Em uma disciplina com três exercícios, um professor deseja saber qual 
//a maior e a menor nota de cada exercício e qual a maior e a menor média final. 
//Faça um programa para auxiliá-lo nesta tarefa.

#include <stdio.h>

int main(){
	
	int num_alun;
	
    float nota_max1 = -10000;
	float nota_max2 = -10000; 
	float nota_max3 = -10000;
	
    float nota_min1 = 10000; 
	float nota_min2 = 10000;
	float nota_min3 = 10000;
	
    float media_max = -10000;
    float media_min = 10000;
    
		
    	printf("Digite o numero de alunos: ");
		scanf("%d", &num_alun);
    	
        for(int i = 0;i < num_alun; i++){
        	
        	float nota_ex1, nota_ex2, nota_ex3;
        	
            printf("Digite as notas do exercicio 1 do aluno %d: ", i+1);
            scanf("%f", &nota_ex1);
            printf("Digite as notas do exercicio 2 do aluno %d: ", i+1);
            scanf("%f",&nota_ex2);
            printf("Digite as notas do exercicio 3 do aluno %d: ", i+1);
            scanf("%f", &nota_ex3);
                                                          
            
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
   } 
   
   		printf("Exercicio 1 - Maior nota = %.2f  , Menor nota = %.2f \n",nota_max1, nota_min1);
        printf("Exercicio 2 - Maior nota = %.2f  , Menor nota = %.2f \n",nota_max2, nota_min2);
        printf("Exercicio 3 - Maior nota = %.2f  , Menor nota = %.2f \n",nota_max3, nota_min3);
        printf("Maior media = %.2f  e Menor media = %.2f  \n",media_max, media_min);
	
	return 0;
}
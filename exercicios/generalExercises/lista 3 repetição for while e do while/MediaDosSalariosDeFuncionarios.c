#include <stdio.h>
#include <stdlib.h>

/*
	Aula 84: Exercicio: 14  
	14) faça um programa que calcule a media de salarios de uma empresa, pedindo ao
	usuario a quantidade de funcionarios e salario de cada funcionario.
	Ao final, o programa deve imprimir a media dos salarios informados, o salario
	mais alto e o salario mais baixo.
*/

int main() {
	
		int i, quantidade;
		float salario, totalSalarios = 0, salarioMaior = 0, salarioMenor = 99999;
		
		do{
			printf("Quantos funcionarios a empresa possui?");
			scanf("%d", &quantidade);
		} while(quantidade < 0);
		
		for(i = 1; i <= quantidade; i++){
			printf("%d Salario: ",i);
			scanf("%f", &salario);
			
			totalSalarios += salario;
			if(salarioMenor > salario){
				salarioMenor = salario;
			}
				
			if(salarioMaior < salario){
				salarioMaior = salario;
			}	
		}	
		printf("Salario medio R$%.2f\n", totalSalarios/quantidade);
		printf("Maior Salario R$%.2f\n", salarioMaior);
		printf("Menor Salario R$%.2f\n\n", salarioMenor);
	return 0;
}

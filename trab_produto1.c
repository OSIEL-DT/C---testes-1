#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){
	
	char a[15];
	int e;
	float y;
	float s;
	
	setlocale(LC_ALL,"Portuguese");	
	printf("===========================================================\n");
	
	printf("        Logo abaixo digite as infomacoes do produto\n"); 
	
	printf("===========================================================\n");
	
	printf(" Nome do produto: ",&a);// nome do produto
	fgets(a,sizeof(a),stdin);
	
	printf("-----------------------------------------------------------\n");
	
	do{		
	printf(" Digite a quntidade em estoque: "); // onde serar digitado a quntidade em estoqui
	scanf("%d",&e);		
	if(e<=0) 	printf(" \n Numero invalid\n");	// caso o usuário digite um numero errado vai aparecer essa mensagem	
	}while(e<=0);
	
	do{
		printf(" Digite o valor unitário: "); // onde o usuário vai digitar o valor do produto
		scanf(" %f",&y);		
	}while(y<0);
	
	printf("===========================================================\n");
	
	printf("          Escolha umas das opções abaixo?\n");
	
	printf("===========================================================\n");
	int op;
    printf(" Digite 1 se quiser saber o valor totel do estoque!\n");
	printf(" Digite 2 se quiser acressentar porcentagem!\n");
	scanf(" %d", &op);
	 
	printf("-----------------------------------------------------------\n");
	float c = e * y;
	// Seleção da opção
	switch(op){		
		case 1:						
			printf(" Custo total do estoque: %.2f \n",c); // onde vai o custo total do estoque
			break;
						
		case 2:			
			printf(" Digite a porcentagem desejado: "); // aqui onde vai a porcemtagem
			scanf("%f",&s);		
			float t = c * ( y / 100 ) + c; // aqui onde é feito a soma do acressimo da porsemtagem					
			printf(" custo final com acressimo: %.2f \n",t);// aqui onde vai aperecer o valor com acressimo	
			break;		
			
		default:
		printf(" opção invalida \n"); // mensegem que vai aparecer caso o usuario digite algo fora de 1 ou 2
			
	}
			
	printf("===========================================================\n");
	
	 return 0;
}

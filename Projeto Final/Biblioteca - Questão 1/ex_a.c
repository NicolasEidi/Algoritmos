#include <stdio.h>

int dividir(int x, int y){
	
	int soma=0;

	if(x<0){
		return -1;
	}
	
	if(x==0){
		return 0;
	}
	
	else{
		return 1 + dividir(x-y, y);
	}
}

int main(void){
	
	int dividendo, divisor;
	
	do{
		printf("Insira o dividendo :\n");
		scanf("%d", &dividendo);
	}while(dividendo<0);
	
	do{
		printf("Insira o divisor :\n");
		scanf("%d", &divisor);
	}while(divisor<=0);
	
	if(dividir(dividendo, divisor)>=0){
		printf("%d", dividir(dividendo, divisor));
	}
	
	if(dividir(dividendo, divisor)<0){
		printf("Nao divide");
	}
}

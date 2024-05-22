#include <stdio.h>

int impar(int x);

int main(void){
	int res;
	do{
		printf("Insira seu valor:\n");
		scanf("%d", &res);
	}while(res<0);
	impar(res);
}
int impar(int x){
	
	if(x==1){
		printf("1");
		return 0;
	}
	if (x==0){
		printf("Nao existe nenhum valor impar neste intervalo");
	}
	else{
		if(x%2!=0){
			printf("%d\n", x);
		}
		return impar(x-1);
	}
}


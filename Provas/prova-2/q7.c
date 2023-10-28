
#include <stdio.h>
#include <string.h>

int main(){
	char palavra[100];
	int tamanho,i;
	
	printf(" Digite a palavra:");
	scanf("%s", palavra);
	
	tamanho = strien(palavra);
	
	printf("Palavra invertida:");
	for (i = tamanho - 1;i >=0;i--){
		printf("%c",palavra[i]);
	}
	printf("\n");
	 return 0;
	
	 }
#include <stdio.h>

int main(){
		
	int num1, num2, cociente;
		
	printf("Ingresa los numeros que deseas dividir: \n");
	scanf("%d %d", &num1, &num2);
	
	cociente = num1 / num2;
	
	if(num1 % num2 == 0)
		
		printf("El resultado de la division es: %d", cociente);

	else
		
		printf("No es una division exacta");
	
	return 0;
}

#include <stdio.h>

int main()
{
    char operacion;
	int num1, num2, resultado;

    printf("Ingrese la operacion que desea realizar (+, -, *, /): ");
    scanf("%c", &operacion);

    printf("Ingrese dos numeros para realizar la operacion: \n");
    scanf("%d %d", &num1, &num2);

    switch(operacion)
    {
        case '+':
            resultado = num1 + num2;
	
	if(num1, num2 % 2 == 0)
		
		printf("El resultado de la suma es: %d", resultado);

	else
		
		printf("Es impar");
            break;

        case '-':
           resultado = num1 - num2;
	
	if(num1, num2 % 5 == 0)
		
		printf("El resultado de la resta es: %d", resultado);

	else
		
		printf("No es impar");
            break;

        case '*':
            resultado = num1 * num2;
	
	if(num1, num2 > 10)
		
		printf("El resultado de la multiplicacion es: %d", resultado);

	else
		
		printf("Los numeros no son mayores a 10");
            break;

        case '/':
            	resultado = num1 / num2;
	
	if(num1 % num2 == 0)
		
		printf("El resultado de la division es: %d", resultado);

	else
		
		printf("No es una division exacta");
            break;

        default:
            printf("Operador invalido\n");
    }

    return 0;
}


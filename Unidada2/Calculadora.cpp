#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int val1, val2, opc, res;
	while(opc!=5)
	{
		printf("1.- Sumar\n");
		printf("2.- Restar\n");
		printf("3.- Multiplicar\n");
		printf("4.- Dividir\n");
		printf("5.- Salir\n");
		printf("Seleccione una opcion\n");
		scanf("%d",&opc);
	if(opc!=5){
		printf("Dame el primer valor: \n");
		scanf("%d",&val1);
		printf("Dame el segundo valor: \n");
		scanf("%d",&val2);
	}
	switch(opc){
		case 1:
			res=val1+val2;
			printf("El resultado de la suma es: %d \n", res);
			printf("---------------------------------------------------------------------------\n");
			break;
		case 2:
			res=val1-val2;
			printf("El resultado de la resta es: %d \n", res);
			printf("---------------------------------------------------------------------------\n");
			break;
		case 3:
			res=val1*val2;
			printf("El resultado de la multiplicacion es: %d \n", res);
			printf("---------------------------------------------------------------------------\n");
			break;
		case 4:
			res=val1/val2;
			printf("El resultado de la divicion es: %d \n", res);
			printf("---------------------------------------------------------------------------\n");
			break;
		case 5:
			break;
	}
	}
	
	return 0;
}

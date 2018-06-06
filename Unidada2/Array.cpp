#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, array[5];
	for (i=0; i<5; i++){
		printf("Dame un valor \n");
		scanf("%d", &array[i]);
	}
	for(i=0; i<5; i++){
		printf("%d, " , array[i]);
		
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

/*int main () {
int *numeros;
int n;
printf("Cuantos elementos deseas guardar?");
scanf("%d", &n);

numeros = (int*)malloc(n * sizeof(int));
if (numeros == NULL) {
    printf("Error: no se pudo asignar la memoria. \n");
    return 1;
}
for (int i =0; i < n; i++) {
    printf("Elemento %d: ", i+1);
    scanf("%d", &numeros[i]);
}
printf("\nDatos Ingresados:\n");
for(int i=0; i<n; i++);
printf("&d", numeros[i]);
free(numeros);
return 0;
} */

/*int cuenta (int n){
	if(n == 0) return 0;
	printf("Entrando con %d\n",n);
	int r = cuenta(n-1);
	printf("Sañiendo con %d\n", n);
	return r;
}

int main(){
	
	int n=57;
	cuenta (n);
	return 0;
	*/
	
	int main() {
		FILE *f = fopen("salida.txt", "w");
		
		if(f == NULL) {
			printf("Error al abrir el archivo.\n");
			return 1;
		}
		fprintf(f, "hola mundo. \n");
		fprintf(f, "Este archivo fue creado desde C. \n");
		
		fclose(f);
		return 0;
	}
	


#include<stdio.h>
#include<conio.h>

int main (){

int x = 0;
int y = 0;
int z [3];
int i, j;
int g [3][3] = {{00,01,02},
                {10,11,12},
                {20,21,22}};

printf(" La direccion de x es: %d\n", &x);
printf(" La direccion de y es: %d\n", &y);
printf(" La direccion de z es: %d\n", &z);

printf(" La direccion es z es: %d\n", &z[0]);
printf(" La direccion es z es: %d\n", &z[1]);
printf(" La direccion es z es: %d\n", &z[2]);


for (i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        printf("%d\t", g[i][j]);
    }
    printf("%d\n");
}

return 0;
}



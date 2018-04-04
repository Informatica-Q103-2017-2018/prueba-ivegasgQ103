#include <stdio.h>
int main()
{
// Todas las variables deben estar definidas
// Asigno valor inicial 0 a suma
int i, suma = 0, n = 10;
for (i = 1; i <= n; i++)
{
suma += i;
}
printf("La suma de los %d primeros enteros es %d",
n, suma);
return 0;
}


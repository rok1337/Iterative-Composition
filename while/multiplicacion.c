/**
Un profesor de matemática necesita generar la tabla de multiplicar de un número entero comprendido entre 1
y 10. Por ejemplo para el 3 debería aparecer como salida:
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
…. y así hasta 10
Resuelva este problema utilizando un mientras y de modo que por la salida salga la tabla tal como se propone.

*/

#include <stdio.h>

int main(){
    int n = 1, tabla, mult;
    printf("Ingrese un numero del 1 al 10: ");
    scanf("%d",&tabla);
    while (n<=10)
    {
        mult = tabla * n;
        printf("%d X %d = %d\n", tabla, n, mult);
        n++;
    }
    
    return 0;    
}
#include <stdio.h>

int cont = 1, n, sum = 0;
int main(){
    printf("Ingrese el numero que desea saber la suma: ");
    scanf("%d",&n);

    while (cont<=n)
    {
        sum = sum + cont;
        cont++;
    }

    printf("1  hasta el %d, la suma es: %d\n", n, sum);
    return 0;
}
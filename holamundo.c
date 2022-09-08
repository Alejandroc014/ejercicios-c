/*Programa que pide un numero al usuario
y si coincide con el numero secreto se le avisa
y se termina el programa.
TODO:
-Pedir el numero secreto al grupier
-El numero debe ser menor que 10,
si no es asi se le avisa y se le pide otro.
-Bonus1:El otro jugador tiene solo 5 intentos.
-Bonus2:Dar pistas al jugador, si el numero es mayor o menor.
*/

#include <stdio.h>

int main()
{
    int numerosecreto = 3;
    int num = 0;

    while (num != numSecreto){
        
        printf("Escribe tu numero: \n");
        scanf("%d", &num);
    }
        printf("Has acertado!! \n");
    }
    return 0;
}


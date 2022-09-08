#include <stdio.h>

int main()
{
    /*tu codigo aqui*/
    printf("Hola Mundo desde linux y c");
    scanf("%d", &edad);

    if (edad > 17){
        /*imprimimos en pantalla */
        printf("Bienvenido %s, tienes %d años.\n", nombre, edad);
    }else if(edad ==17){
        printf("Te esperamos, casi tienes 18!!");
    }
    return 0;
}


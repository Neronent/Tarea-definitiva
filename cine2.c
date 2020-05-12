#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    const float precio = 210;
    // Preguntando el nombre
    printf("cual es su nombre? ");
    char nombre[256];
    fgets(nombre,256,stdin);
    printf("%s", nombre);

    //preguntando edad
    printf("cuantos años tienes? ");
    int edad = 0;
    scanf("%i", &edad);

    // preguntar pelicula
    int sala;
    char nombrePelicula [3][2][256] = {
        {"D4","Dora la Exploradora"},
        {"A7","Inception"},
        {"B5","John Wick"}
    };
    int numPelicula = ( sizeof(nombrePelicula)/2)/256;
    printf("que pelicula desea ver?\n");
    for (int i = 0; i < numPelicula; i++)
    {
        printf("  Presione %d, para ver %s\n",i + 1, nombrePelicula[i][1]);
    }
    do
    {
        scanf("%d", &sala);
        if(sala < 1 || sala > 3 )
        {
            printf("el valor tiene que ser entre 1 y 3 (inclusivo)\n");
        }

    } while (sala < 1 || sala > 3);
    sala--;
    // preguntando que dia es hoy
    int dia;
    char nombreDia [7][15] = {
        "Lunes",
        "Martes",
        "Miercoles",
        "Jueves",
        "Viernes",
        "Sabado",
        "Domingo"
    };
    printf(
        "Que dia es hoy? \n"
        "  Presione 1, para Lunes\n"
        "  Presione 2, para Martes\n"
        "  Presione 3, para Miercoles\n"
        "  Presione 4, para Jueves\n"
        "  Presione 5, para Viernes\n"
        "  Presione 6, para Sabado\n"
        "  Presione 7, para Domingo\n"
    );
    do
    {
        scanf("%d", &dia);
        if(dia < 1 || dia > 7 )
        {
            printf("el valor tiene que ser entre 1 y 7 (inclusivo)\n");
        }

    } while (dia < 1 || dia > 7);
    dia--;
    //preguntando si es estudiante
    bool esEstudiante;
    printf(
        "usted estudia? \n"
        "  Presione 1, si lo es\n"
        "  Presione 0, si no lo es\n"
    );
    do
    {
        int temp;
        scanf("%d", &temp);
        esEstudiante = temp;
        if(esEstudiante !=0 && esEstudiante != 1)
        {
            printf("el valor tiene que ser 1 o 0\n");
        }

    } while (esEstudiante !=0 && esEstudiante != 1);

    //Calculando Descuento
    int descuento[3] = {35,15,95};
    int tipoDeDescuento = 2;
    if (edad > 64)
    {
        tipoDeDescuento = 0;
    }
    else if(esEstudiante)
    {
        tipoDeDescuento = 1;
    }
    
    // Decidiendo que tipo de cliente es
    char tipoCliente[8];
    switch (tipoDeDescuento)
    {
        case 0:
            strcpy(tipoCliente,"Tipo B");
            break;
        case 1:
            strcpy(tipoCliente,"Tipo A");
            break;
        default:
            strcpy(tipoCliente,"Tipo C");
            break;
    }
    
    // retornando segun dia
    if (dia == 0)
    { 
        printf("su nombre es: %s", nombre);
        printf("La pelicula que escogio es %s, y se esta exhibiendo en la sala %s\n", nombrePelicula[sala][1],nombrePelicula[sala][0]);
        printf("El dia de hoy es %s\n", nombreDia[dia]);
        printf("Por ser un cliente %s:\n",tipoCliente);
        printf("  Se le otorga un %i de descuento a su precio inicial de %f\n", descuento[tipoDeDescuento], precio);
        printf("  Lo que le dejaria su factura final en %f\n", precio * ((100 - descuento[tipoDeDescuento])/100.00));
        return 0;      
    }
     printf("Su nombre es: %s", nombre);
        printf("La pelicula que escogio es %s, y se esta exhibiendo en la sala %s\n", nombrePelicula[sala][1],nombrePelicula[sala][0]);
        printf("El dia de hoy es %s\n", nombreDia[dia]);
        printf("Usted es un cliente %s:\n",tipoCliente);
        printf("  Lamentablemente el dia el hoy no se dan descuentos\n");
        printf("  Lo que le dejaria su factura final en %f\n", precio);
        return 0;
}


#include<conio.h>
#include<stdio.h>
//#include <stdio_ext.h> //para usar fpurge en linux
main()
{
    int tel,edad;
    char nom[40],dir[90];

    printf("Programa que Imprime Nom.Tel.Edad.Dir.\n");
    //__fpurge(stdin); //para linux unicamente
    fflush(stdin);
    printf("\nIntroduce Nom: ");
    fgets(nom, 40, stdin);

    printf("\nIntroduce Tel: ");
    scanf("%d",&tel);

    printf("\nIntroduce Edad: ");
    scanf("%d",&edad);


//LIMPIAMOS BUFFER DE TECLADO PARA QUE NO SE SALTE
//EL SIGUIENTE gets();
    fflush(stdin);

    printf("\n\nIntroduce Direccion: ");
    fgets(dir,90,stdin);

    printf("\n\nSu Nombre es: %s",nom);
    printf("\n\nsu Telefono es: %d",tel);
    printf("\n\nSu Edad es: %d",edad);
    printf("\n\nSu direccion es: %s",dir);
    getch();
    return 0;
}

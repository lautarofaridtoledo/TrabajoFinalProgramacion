#include "funciones.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

void iniciarSistema(){
    int opc=0;
    printf("Bienvenido, a continuacion podra solicitar un turno.\n");
    printf("Lista de especialidades disponibles.\n");
    printf(" 1. Medicina Clinica");
    printf("\n 2. Pediatria");
    printf("\n 3. Oftalmologia");
    printf("\n 4. Ginecologia");
    printf("\n 5. Urologia");
    printf("\n\n");
    system("pause");
    for (int i=0; i<19; i++){
        printf("%c", 175);
    }
    fflush(stdin);
    scanf(&opc);
    abrirArchivo();
}
void clrscr(){
    system("cls");
}

void abrirArchivo (){
    FILE *pacientes;
    PACIENTE pac;
    clrscr();
    puts("Se genera archivo");
    if ((pacientes=fopen("D:\\prueba\\pacientes.txt","w"))==NULL){
        puts("EL ARCHIVO NO SE PUEDE ABRIR");
    }
    do{
        puts("\nINGRESE NOMBRE Y APELLIDO DEL PACIENTE");
        fflush(stdin);
        gets(pac.nombreApellido);
        puts("\nINGRESE EDAD DEL PACIENTE");
        fflush(stdin);
        scanf("%i",&pac.edad);
        puts("\nINGRESE DNI DEL PACIENTE");
        fflush(stdin);
        scanf("%i",&pac.dni);
        fwrite(&pac,sizeof(pac),1,pacientes);
        puts("PARA FINALIZAR PRECIONE LA TECLA 'ESQ'");
    }while((getche () ) != 27 );

    fclose(pacientes);
}


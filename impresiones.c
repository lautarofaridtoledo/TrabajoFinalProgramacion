#include "h.h"

//PARA QUEDAR CENTRADO DEBE RECIBIR UN STRING DE 22 CARACTERES.
void imprimirHeader(char titulo[]){
    int i;
    printf("\n%c", 201);
    printf("%c", 205);
    for (i=0; i<19; i++){
        printf("%c", 174);
    }
    for (i=0; i<22; i++){
        printf("%c", 205);
    }
    for (i=0; i<19; i++){
        printf("%c", 175);
    }
    printf("%c", 205);
    printf("%c\n", 187);
    printf("%c%42s%21c\n", 186, " ", 186);
    printf("%c%42s%21c\n", 186, titulo, 186);
    printf("%c%42s%21c\n", 186, " ", 186);
    printf("%c", 200);
    printf("%c", 205);
    for (i=0; i<19; i++){
        printf("%c", 174);
    }
    for (i=0; i<22; i++){
        printf("%c", 205);
    }
    for (i=0; i<19; i++){
        printf("%c", 175);
    }
    printf("%c", 205);
    printf("%c\n\n", 188);
};

void imprimirMenuPrincipal (){
    system("cls");
    imprimirHeader("  MENU PRINCIPAL    ");
    printf("Ingrese una opcion para continuar:\n\t1.- Cargar, eliminar o modificar registro de pacientes. \n\t2.- Turnos.\n\t3.- Alta/Baja o modificacion de internaciones.\n\n");
};

void imprimirMenuOp1 () {
    //system("cls");
    imprimirHeader("Registro de Pacientes ");
    printf("Ingrese una opcion para continuar:\n\t1.- Buscar paciente. \n\t2.- Agregar nuevo paciente.\n\t3.- Modificar paciente. \n\t4.- Eliminar paciente.\n\t5.- Volver al Menu Principal.\n");
};

void imprimirMenuOp2 () {
    imprimirHeader("  Administrar Turnos  ");
};

void imprimirMenuOp3 () {

};

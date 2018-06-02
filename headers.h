#ifndef H_H_INCLUDED
#define H_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct{
    char nombreApellido[50];
    int dni;
    int edad;
    int cantAtendido;
    int eliminado;
}PACIENTE;

typedef struct{
    int dniPaciente;
    int dia;
    float hora;
    int ocupado;
    int matMedico;
}TURNO;

typedef struct{
    char nombreApellido[50];
    int matricula;
    char especialidad[30];
    int eliminado;
    TURNO listaTurnos[100];
}MEDICO;

typedef struct{
    int nroHabitacion;
    int ocupado;
    PACIENTE paciente;
}HABITACION;

void iniciarSistema();
void imprimirMenuPrincipal ();
void imprimirHeader(char titulo[]);

#endif // H_H_INCLUDED

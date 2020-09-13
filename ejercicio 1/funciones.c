#include <stdio.h>
#include "funciones.h"

void calculadora()
{
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int multiplicacion;
    int factorial1;
    int factorial2;


    numeroUno = primerNumero();
    numeroDos = segundoNumero();
    suma = sumador(numeroUno,numeroDos);
    resta = restador(numeroUno,numeroDos);
    multiplicacion = multiplicador(numeroUno,numeroDos);
    factorial1 = factorialUno(numeroUno);;
    factorial2 = factorialDos(numeroDos);;

    printf("\nEl valor del numero UNO es: %d",numeroUno);
    printf("\nEl valor del numero DOS es: %d",numeroDos);

    printf("\nEl resultado de A+B es: %d",suma);
    printf("\nEl resultado de A-B es: %d",resta);
    dividir(numeroUno,numeroDos);
    printf("\nEl resultado de A*B es: %d",multiplicacion);
    printf("\nEl factorial de A es: %d y El factorial de B es: %d",factorial1,factorial2);


    sumador(numeroUno,numeroDos);
    restador(numeroUno,numeroDos);
    multiplicador(numeroUno,numeroDos);
    factorialUno(numeroUno);
    factorialDos(numeroDos);
}

int primerNumero()
{
    int numero;
    printf("Ingrese el primer numero: ");
    scanf("%d",&numero);
    return numero;
}
int segundoNumero()
{
    int numero;
    printf("Ingrese el segundo numero: ");
    scanf("%d",&numero);
    return numero;
}
int sumador(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}
int restador(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 - numero2;
    return resultado;
}
int multiplicador(int numero1, int numero2)
{
    int resultado;
    resultado = numero1 * numero2;
    return resultado;
}
void dividir(int numero1, int numero2)
{
    float resultado;
    if(numero2==0)
    {
        printf("\nNo es posible dividir por cero");
    }
    else
    {
        resultado = numero1/numero2;
        printf("\nEl resultado de A/B es: %.2f",resultado);
    }
}
int factorialUno(int numero1)
{
    int i;
    int factorialUno = 1;
    for (i=1; i <= numero1;i++){
        factorialUno = factorialUno * i;
    }
    return factorialUno;
}
int factorialDos( int numero2)
{
    int i;
    int factorialDos = 1;
    for (i=1; i <= numero2;i++){
        factorialDos = factorialDos * i;
    }
    return factorialDos;
}


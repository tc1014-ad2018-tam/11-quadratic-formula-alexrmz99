/* This program will help the user to solve a quadratic formula.
 * The user must provide the three consonants.
 * The quadratic formula will solve the root of x for the user.
 *
 * Creador: Alejandro Ernesto Ramírez Michel
 * Fecha: 4 - Octubre - 2018
 * E-mail: alex.ramirez.99@hotmail.com
 *
 * */

#include <stdio.h>
#include <math.h>

//Establezco función para cuando se resta en la fórmula general
double discmenos (double a, double b, double c){
    double xmn = 0;
    xmn = ((0-b) - (sqrt(pow(b,2) - (4*a*c)))) / (2*a);
    return xmn;
}
//Establezco función para cuando se suma en la fórmula general
    double discmas (double a, double b, double c) {
    double xms = 0;
    xms = ((0-b) + (sqrt(pow(b,2) - (4*a*c)))) / (2*a);
    return xms;
}

int main() {
    //Declaro mis variables
    double a;
    double b;
    double c;
    double xmn; // xmn por x menos
    double xms; // xms por x mas

    printf("Hello user. I will help you solve a quadratic formula.\n");
    printf("First, give me values for a, b, and c, and separate them with a coma:\n"); // aqui le pido al usuario valores para a, b, c
    scanf("%lf, %lf, %lf", &a, &b, &c);
    while (a == 0) {        //aqui si "a" es 0, pedirle al usuario otro numero
        printf("Can't use that number! Give me another one.\n");
        scanf("%lf", &a);
    }

    // aquí mando las funciones al programa
    xmn = discmenos(a, b, c);
    xms = discmas(a, b, c);

    // si la ecuación no se puede resolver, le aviso al usuario
    if (pow(b, 2) < 4*a*c) {
        printf("I can't solve the root of a negative number!\n");
    } else {
        printf("When subtracting the root, the value of x is: %lf\n", xmn); // cuando se resta en la fórmula general
        printf("When adding up the root, the value of x is: %lf", xms); // cuando se suma en la fórmula general
    }

    return 0;
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: wever
 *
 * Created on 8 de Abril de 2019, 15:05
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double x = 10;
    double h = 0.83333333333333333333;
    double resp = 0;
    double q = 0;
    int n = 6;
    double analitico = 16793.8;
    double resultado = 0;
    
    for (int i = 0; i <= n; i++) {

        resp = pow(M_E, x) / pow(x, 2);
        printf("i = %d x = %lf y = %lf ", i, x, resp);
        x = x + h;
        if (i == 0 || i == n) {
            resp = resp * 1;
        } else if (i % 2 == 0) {
            resp = resp * 2;
        } else if (i % 2 != 0) {
            resp = resp * 4;
        }
        printf("y*c = %lf \n", resp);
        q = q + resp;

    }
    resultado = ((1 * h) / 3) * q;
    printf("FINAL %lf \n", q);
    printf("Resultado: %lf\n", resultado);
    printf("Erro Absoluto %lf\n", (analitico - resultado));
    printf("Erro Relativo %lf", (analitico - resultado)/analitico);

    return (EXIT_SUCCESS);
}


#ifndef __COMPLEX__
#define __COMPLEX__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359
typedef struct
{
  char code[2];
  double real;
  double img;

} Complex;
/**
 * @brief Cria um objeto do tipo Complex
 * 
 * @param real Um número real
 * @param img  O número imaginário
 * @return  Complex* 
 */
Complex *createComplex(double real, double img);
/**
 * @brief Lê um arquivo e o transforma para um objeto Complex
 * 
 * @param input - Caminho do arquivo
 * @return Complex* 
 */
Complex *readComplex(char *input);
/**
 * @brief Soma um número complexo
 * 
 * @param a Primeiro objeto Complex
 * @param b Segundo objeto Complex
 * @return Complex* 
 */
Complex *csum(Complex a, Complex b);
/**
 * @brief Substrai um número complexo
 * 
 * @param a Primeiro objeto Complex
 * @param b Segundo objeto Complex
 * @return Complex* 
 */
Complex *csub(Complex a, Complex b);
/**
 * @brief Divide um número complexo
 * 
 * @param a Primeiro objeto Complex
 * @param b Segundo objeto Complex
 * @return Complex* 
 */
Complex *cdiv(Complex a, Complex b);
/**
 * @brief Multiplica um número complexo
 * 
 * @param a Primeiro objeto Complex
 * @param b Segundo objeto Complex
 * @return Complex* 
 */
Complex *cmul(Complex a, Complex b);
/**
 * @brief Salva um objeto Complex para um arquivo
 * 
 * @param c Ponteiro do objeto Complex
 * @param output Caminho de saída
 */
void saveComplex(Complex *c, char *output);
/**
 * @brief Calcula a norma de um número complexo
 * 
 * @param c Objeto Complex
 * @return double 
 */
double calculateNorm(Complex c);

#endif
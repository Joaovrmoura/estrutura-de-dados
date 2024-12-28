// Aqui está uma função em C que recebe os valores dos catetos 
// 𝑎
// a e 
// 𝑏
// b e calcula o valor da hipotenusa usando a fórmula da hipotenusa 
// 𝑐
// =
// 𝑎
// 2
// +
// 𝑏
// 2
// c= 
// a 
// 2
//  +b 
// 2
 
// ​
//  :

#include <stdio.h>
#include <math.h> // Necessário para a função sqrt

// Função que calcula a hipotenusa
double calcularHipotenusa(double a, double b) {
    return sqrt((a * a) + (b * b)); // Cálculo da hipotenusa
}

int main() {
    double a, b;

    // Leitura dos catetos
    printf("Digite o valor do cateto a: ");
    scanf("%lf", &a);
    printf("Digite o valor do cateto b: ");
    scanf("%lf", &b);

    // Cálculo e exibição da hipotenusa
    double hipotenusa = calcularHipotenusa(a, b);
    printf("A hipotenusa do triângulo é: %.2f\n", hipotenusa);

    return 0;
}

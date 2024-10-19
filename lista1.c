#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Pablo Jordy!\n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("30*27 = %d\n", 30*27);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    float media = (5+8+12)/3.0;
    printf("Media de 5, 8, 12 é igual a %.1f\n", media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
    int num = 0;
    printf("Digite um valor numerico: ");
    scanf("%d", &num);
    printf("O valor digitado foi %d\n", num);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
    float num1,num2;
    printf("Digite um valor numerico: ");
    scanf("%f", &num1);
printf("Digite outro valor numerico: ");
    scanf("%f", &num2);
    printf("O valores digitados foram %.1f\n e %.1f\n", num1, num2);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
printf("O ANTECESSOR: %d\n E O SUCESSOR: %d\n SAO:", num-1, num+1);
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7() {
   char nome[50], end[100], fone[50];
   printf("Digite seu nome: ");
   scanf("%s", nome);
   printf("Digite seu endereco: ");
   scanf("%s", end);
   printf("Digite seu telefone: ");
   scanf("%s", fone);
   printf("Nome: %s,\n Endereco: %s,\nTelefone: %s:", nome, end, fone);
   }
//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8() {
    int num1, num2, res;
    printf(" Digite um numero: ");
    scanf("%d", &num1);
    printf("    Digite outro numero: ");
    scanf("%d", &num2);
    res = num1-num2;
printf("             O RESULTADO É>>>>>: %d\n", res);
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q9() {
    float num1, res;
    printf(" Digite um numero: ");
    scanf("%f", &num1);
    res = num1/4;
printf("             O RESULTADO É>>>>>: %.2f\n", res);
}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10() {
    float md, num1, num2, num3;
    printf(" Digite um numero: ");
    scanf("%f", &num1);
    printf(" Digite outro numero: ");
    scanf("%f", &num2);
    printf(" Digite mais numero: ");
    scanf("%f", &num3);
    md = (num1+num2+num3)/3.0;
    printf("           O RESULTADO FINAL É IGUAL A %.2f\n", md);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q10();
    return EXIT_SUCCESS;
}
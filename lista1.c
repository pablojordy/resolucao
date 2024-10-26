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
void q11()
{
   float num1,num2,soma,sub,div,mult;
   printf("Digite um numero: ");
   scanf("%f",&num1);
   printf("Digite outro numero: ");
   scanf("%f",&num2);

   printf("\nA Soma dos numeros digitados é igual a: %.2f", soma=num1+num2);
   printf("\nA Subtração dos numeros é igual a: %.2f", sub=num1-num2);
   printf("\nA divisão dos numeros digitados é igual a: %.2f",div=num1/num2);
   printf("\nO Produto dos números dititados é igual a: %.2f", mult=num1*num2);
}
//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12()
{
   float num1,res;
   printf("Usuário, digite um valor: ");
   scanf("%f",&num1);
   
   res = num1 * num1;

   printf("O QUADRADO DO NÚMERO DIGITADO É:%.2f:", res);
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13()
{
   float sd=0, sdnv=0;
   printf("Usuário, informe o saldo em R$ da sua conta bancária: ");
   scanf("%f",&sd);

   sdnv=sd*1.02;
   printf("Usuário, o teu saldo com reajuste será de:%.2f:", sdnv);
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14()
{
   float p,area,b,a;
   printf("Usuário, informe o valor em metros do comprimento da base: ");
   scanf("%f",&b);
   
   printf("Usuário, informe o valor em metros da altura: ");
   scanf("%f",&a);

   area=b*a;
   p=(b*b)+(a*a);
   printf("O perímetro deste retângulo é:%.2f\n", p);
   printf("A area deste retângulo é:%.2f\n:", area);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15()
{
    float vd, pdc, vp;
    printf("Usuario. digite o valor do produto: ");
    scanf("%f", &vp);

    printf("Usuario, digite o valor com desconto desejado: ");
    scanf("%f", &pdc);

    vd=vp-(vp*(pdc/100));

    printf("Seu produto com desconto é: %f", vd);
}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16()
{
   float slnv,sl, aj;

   printf("Usuario, informe o valor do seu salario: ");
   scanf("%f",&sl);

   printf("Usuario, digite a porcentagem de reajuste do salário: ");
   scanf("%f",&aj);

  slnv=sl+sl*(aj/100);

   printf("O novo salario será:%.2f:", slnv);
}
//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17()
{
   float t,tc;

   printf("Usuario, informe a temperatura em graus centigrados: ");
   scanf("%f",&t);

   tc=(9*t+160)/5.0;

   printf ("A temperatura em FAHRENHEIT é: %.2f",tc);
}
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
void q18()
{
   float qtdlt,d,t,vm;

   printf("Usuario, informe o tempo em horas de duração da viajem e depois informe a velocidade media do carro durante a viagem:\n" );
   scanf ("%f%f", &t, &vm);

   d=t*vm;
   qtdlt=d/12;

   printf("A distância percorrida foi: %.2f", d );
   printf("O consumo total de combustível durante a viagen foide %.2f:", qtdlt);
   
}
//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
void q19()
{
   float ta, vlj, pat, vlvc, txj;

   printf("   Usuario, digite o valor da prestacao vencida: ");
   scanf("%f", &vlvc);

   printf("      Usuario, informe o valor da taxa de juros: ");
   scanf("%f", &txj);

   printf("         Usuario, informe o tempo de atraso das parcelas em dias: ");
   scanf("%f", &ta);

   pat=vlvc+vlj;
   vlj=vlvc*(txj/100)*ta;
   
   printf("           O valor da prestacao: %.2f\n", vlvc);
   printf("             Tempo de atraso em dias: %.2f\n", ta);
   printf("                Juros a ser cobrados: %.2f\n", vlj);
   printf("                    Valor da prestacao com juros: %.2f", pat);
}
//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void q20()
{
   float COT, D, R;

   printf("      USUARIO, INFORME A QUANTIDADE EM DOLAR PARA CONVERTER EM REAL: ");
   scanf("%f",&D);

   printf("                     USUARIO, INFORME A COTACAO ATUAL DO DOLAR: ");
   scanf("%f",&COT);

   R=D*COT;

   printf("                                     O VALOR CONVERTIDO EM REAIS É :%.2f", R);
}

int main() {
    q20();
    return EXIT_SUCCESS;
}
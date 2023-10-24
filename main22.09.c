#include <stdio.h>
#include <math.h>//funçoes matemáticas

/*int main(){
    printf("%.0lf\n", sqrt(9));
    printf("%.0lf\n", pow(9,2));
}*/
//resposta 1
/*int main(){
    double valor1, quadrado, cubo;
    scanf("%lf", &valor1);
    quadrado = pow(valor1, 2);
    cubo = pow(valor1, 3);
    printf("O calculo do quadrado: %.lf\n", quadrado);
    printf("O calculo do cubo: %.lf\n", cubo);
}*/


//resposta 2
/*int main(){
    double principal, juros, montante, tempo;
    printf("Digite o valor: \n");
    scanf("%lf", &principal);
    printf("Digite os juros: \n");
    scanf("%lf", &juros);
    printf("Digite o tempo: \n");
    scanf("%lf", &tempo);
    montante = principal * pow((1 + juros / 100), tempo);
    printf("o resultado e: %.lf", montante);

}*/

//resposta 3

/*int main(){
    double valor;
    printf("Digite um valor: ");
    scanf("%lf", &valor);
    printf("O valor da raiz quadrada de %.lf e %.lf", valor, sqrt(valor));
}*/

//resposta 4

/*int main(){
    //calcule a area e o perimetro do retangulo
    double area, perimetro, res;
    printf("Informe a area do retangulo: ");
    scanf("%lf", &area);
    printf("Informe o perimetro do retangulo: ");
    scanf("%lf", &perimetro);
    res = area * perimetro;
    printf("A area do retangulo e %.lf", res);
}*/

//resposta 5

//equação de 2o grau

int main(){
    double b, a, c, delta;
    printf("Digite o valor de A B e C: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = pow(b,2) - 4*a*c;
    printf("O valor de delta e: %.lf", delta);
}
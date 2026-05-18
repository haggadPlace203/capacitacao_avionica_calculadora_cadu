#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    double num1, num2, resultado;

    printf("=== CALCULADORA EM C ===\n");

    while (1){
        printf("Escola uma opcao:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);
        if (opcao == 5){
            printf("Encerrando...\n");
            break;
        }
        if (opcao < 1 || opcao > 4){
            printf("Opcao invalida!\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);

        switch (opcao){
            case 1:
                resultado = num1 + num2;
                printf("\n%2lf + %2lf = %2lf\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\n%2lf - %2lf = %2lf\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\n%2lf * %2lf = %2lf\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0){
                    printf("\nErro: Divisao por zero nao permitida\n");
                }else{
                    resultado = num1 / num2;
                    printf("\n%2lf / %2lf = %2lf\n", num1, num2, resultado);
                }
            default:
                break;
        }
    }
    return 0;
}
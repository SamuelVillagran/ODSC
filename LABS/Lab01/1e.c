#include <stdio.h>

float calculator(char kind_operation, float num1, float num2);

int main() {
    int n_operations;
    float N1, N2;
    scanf("%d", &n_operations);

    while (n_operations--) {
        char type_operation;
        scanf(" %c", &type_operation); // ignora el /0 que tiene por defecto por el espacio "_%c"
        scanf("%f", &N1);
        scanf("%f", &N2);
        printf("%.6f\n", calculator(type_operation, N1, N2));
        
    }
}

float calculator(char kind_operation, float num1, float num2) {
    switch (kind_operation) {
            case '+':
                return num1+num2;
            case '-':
                return num1-num2;
            case '*':
                return num1*num2;
            case '/':
                return num1/num2;
            default: 
                break;
        }
}
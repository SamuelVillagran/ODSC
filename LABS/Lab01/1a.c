#include <stdio.h>

int addition(int num1, int num2);

int main() {
    int timeOp, N1, N2;

    scanf("%d/n", &timeOp);
    while (timeOp--) {
        scanf("%d", &N1);
        scanf("%d", &N2);
        printf("%d\n", (int) addition(N1, N2));
    }
    
    return 0;
}

int addition(int num1, int num2) {
    return (num1 + num2);
}
#include <stdio.h>


float greater_than(float num1, float num2);

int main() {
    int timeOp;
    float N1, N2;

    scanf("%d/n", &timeOp);
    while (timeOp--) {
        scanf("%f %f", &N1, &N2);
        printf("%.6f\n", (double) greater_than(N1, N2));
    }
    return 0;
}

float greater_than(float num1, float num2) {
    return num1 >= num2 ? num1 : num2;
}
#include <stdio.h>
#include <math.h>

#define MAX_LONGITUDE_VECTOR 2000

float less_than(float num1, float num2);

int main() {
    
    int timeOp, longitude_vector;
    
    
    scanf("%d\n", &timeOp);

    while (timeOp--) {
        scanf("%d", &longitude_vector);
        float vector[longitude_vector];
        float current_least = INFINITY;
        float current_number;
        if (longitude_vector <= MAX_LONGITUDE_VECTOR) {
            int i = 0;
            while (i < longitude_vector) {
                scanf("%f", &vector[i]);
                i++;
            }
    	    int j = 0;
            while (j < longitude_vector) {
                current_least = less_than(current_least, vector[j]);
        		j++;
                }
            }
        printf("%.6f\n", current_least);
    }
    
    return 0;
}

float less_than(float num1, float num2) {
    return num1 <= num2 ? num1 : num2;
}
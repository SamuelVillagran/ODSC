#include <stdio.h>
#include <math.h>

#define MAX_LONGITUDE_VECTOR 2000

int less_than(int num1, int num2);

int main() {
    
    int timeOp, longitude_vector;
    
    scanf("%d\n", &timeOp);
    while(timeOp--) {
        int n_sum = 0;
        scanf("%d", &longitude_vector);
        int vector[longitude_vector];
        if (longitude_vector <= MAX_LONGITUDE_VECTOR) {
	    int j = 0;
	    while (j < longitude_vector) {
                scanf("%d", &vector[j]);
		j++;
            }
        }
        int sumVec = 0;
	int z = 0;
        while (z < longitude_vector) {
            n_sum += vector[z];
	    z++;
        }
        
        printf("%d\n", n_sum);
    }
    return 0;
}

int less_than(int num1, int num2) {
    return num1+num2;
}
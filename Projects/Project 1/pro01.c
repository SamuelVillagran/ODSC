#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CARACTERS 350000
#define SIZE_STRUCT 9

char num1[MAX_CARACTERS], num2[MAX_CARACTERS], res[MAX_CARACTERS];

const struct map {
    char letter;
    int value;
} BASE19[] = {
    {'A', 10}, {'B', 11},
    {'C', 12}, {'D', 13},
    {'E', 14}, {'F', 15},
    {'G', 16}, {'H', 17},
    {'I', 18}
};

long long convertToDecimal(char number[MAX_CARACTERS]);
bool isLetter(char searchChar);
char convertToLetterBase19(int number);

int main() {
    int times, i;
    long long div, divisor, resBase10;
    
    if (scanf("%d", &times) < 1) return 0;
    
    while(times--) {
        scanf("%s", num1);
        scanf("%s", num2);
        div = convertToDecimal(num1);
        divisor = convertToDecimal(num2);
        if (divisor == 0) { // Evita la division por 0
            printf("0\n");
            continue;
        }
        
        resBase10 = div/divisor;
        if (resBase10 == 0) {
            printf("%d\n", 0); // Verifica que la division es 0
            continue;
        }
    
        i = 0;
        while(resBase10 > 0) {
            bool isLessTen = resBase10%19 < 10;
            if (!isLessTen) res[i] = convertToLetterBase19(resBase10%19);
            if (isLessTen) res[i] = resBase10%19 + '0';
            resBase10 /= 19;
            i++;
        }
        res[i] = '\0'; // Cerrar la cadena
        while (i--) {
            printf("%c", res[i]);
        }
        printf("\n");
    }
    return 0;
}

long long convertToDecimal(char number[MAX_CARACTERS]) {
    long long result, pow;
    result = 0;
    pow = 1;
    int base = 19;
    int i = strlen(number);
    
    while(i--) {
        int nCurrent = 0; 
        
        if (isLetter(number[i])) {
            int index = number[i] - 'A'; 
            nCurrent = BASE19[index].value;
        } 
        if (!isLetter(number[i])) nCurrent = number[i] - '0';
        
        result += nCurrent * pow;
        pow *= base;
    }
    return result;
}



char convertToLetterBase19(int number) {
    int i = SIZE_STRUCT;
    while (i--) {
        if (BASE19[i].value == number) return BASE19[i].letter;
    }
    
    return '?';
}

bool isLetter(char searchChar) {
    int i = SIZE_STRUCT;
    while (i--) {
        if (BASE19[i].letter == searchChar) return true; 
    }
    return false;
}
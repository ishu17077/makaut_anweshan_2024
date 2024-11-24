#include <stdio.h>
// Pascal triangle is just nCr
int nCrCalc(int n, int r);
int factorialCalculator(int num);
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCrCalc(i, j));
        }
        printf("\n");
    }
    return 0;
}

int nCrCalc(int n, int r) {
    if (n == 0 || r == 0) {
        return 1;
    }
    int nCr = factorialCalculator(n) / (factorialCalculator(r) * factorialCalculator(n - r));
    return nCr;
}

int factorialCalculator(int num) {
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

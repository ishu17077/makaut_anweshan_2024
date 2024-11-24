#include <stdbool.h>
#include <stdio.h>

bool arraySearch(int arr[], int sizeOfArray, int searchable);
int getSumOfSquares(int num);

int main() {
    int num, prevNum = 0, currentNum = 0, sumOfSquares = 0;
    int arr[200] = {};
    int sizeOfArray = 0;
    bool isUnity = false;
    scanf("%d", &num);
    currentNum = num;
    while (!arraySearch(arr, sizeOfArray, currentNum)) {
        arr[sizeOfArray] = currentNum;
        sumOfSquares = getSumOfSquares(currentNum);
        prevNum = currentNum;
        currentNum = sumOfSquares;
        sizeOfArray++;
        if (sumOfSquares == 1) {
            printf("Happy");
            isUnity = true;
            break;
        }
    }
    if (!isUnity) {
        printf("Unhappy");
    }
}

bool arraySearch(int arr[], int sizeOfArray, int searchable) {
    for (int i = 0; i < sizeOfArray; i++) {
        if (searchable == arr[i]) {
            return true;
        }
    }
    return false;
}

int getSumOfSquares(int num) {
    int sumOfSquares = 0;
    while (num > 0) {
        int digit = num % 10;
        num = num / 10;
        sumOfSquares = sumOfSquares + digit * digit;
    }
    return sumOfSquares;
}

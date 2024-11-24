#include <stdbool.h>
#include <stdio.h>

int countElements(int arr[], int arrayLength, int searchable);
bool arraySearch(int arr[], int sizeOfArray, int searchable);
int alreadCounted[1000];
int alreadyCountedLength = 0;

int main() {

    int arrayLength;
    scanf("%d", &arrayLength);
    int counter = 0;
    int nums[arrayLength];
    do {
        scanf("%d", &nums[counter]);
        counter++;
    } while (getchar() != '\n' || counter < arrayLength);

    for (int i = 0; i < arrayLength; i++) {
        int occurences = countElements(nums, arrayLength, nums[i]);
        if (occurences > (arrayLength / 3)) {
            printf("%d ", nums[i]);
        }
    }

    return 0;
}

int countElements(int arr[], int arrayLength, int searchable) {
    int occurences = 0;
    if (!arraySearch(alreadCounted, alreadyCountedLength, searchable)) {
        for (int i = 0; i < arrayLength; i++) {
            alreadCounted[alreadyCountedLength++] = searchable;
            if (searchable == arr[i]) {
                occurences++;
            }
        }
    }
    return occurences;
}

bool arraySearch(int arr[], int sizeOfArray, int searchable) {
    for (int i = 0; i < sizeOfArray; i++) {
        if (searchable == arr[i]) {
            return true;
        }
    }
    return false;
}
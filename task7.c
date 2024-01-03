#include <stdio.h>
#include <stdbool.h>
bool hasTwoElementsWithSameRepetition(int arr[], int size) {
int countArray[100]={0};
for (int i=0;i<size;i++) {
countArray[arr[i]]++;
}
int repetitions[100] = {0};
int maxRepetition = 0;
for (int i=0;i<100;i++) {
if (countArray[i] > 1) {
repetitions[countArray[i]]++;
maxRepetition=(countArray[i]>maxRepetition)?countArray[i]:maxRepetition;
}
}
for (int i=0;i<100;i++) {
if (repetitions[i]>=2) {
return true;
}
}
return false;
}
int main() {
int arr1[] = {4, 5, 6, 6, 4, 3, 6, 4};
bool result1 = hasTwoElementsWithSameRepetition(arr1, sizeof(arr1) / sizeof(arr1[0]));
printf("Output 1: %s\n", result1 ? "True" : "False");
int arr2[] = {3, 4, 6, 3, 4, 7, 4, 6, 8, 6, 6};
bool result2 = hasTwoElementsWithSameRepetition(arr2, sizeof(arr2) / sizeof(arr2[0]));
printf("Output 2: %s\n", result2 ? "True" : "False");
return 0;
}

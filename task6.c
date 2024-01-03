#include <stdio.h>
int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
int size = 9;
void removeAll(int source[], int size, int element) {
int newSize = 0;
for (int i = 0; i < size; i++) {
if (source[i] != element) {
source[newSize] = source[i];
newSize++;
}
}
for (int i = newSize; i < size; i++) {
source[i] = 0;
}
}
int main() {
removeAll(source, 7, 2);
printf("After removal: [ ");
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
printf("]");
return 0;
}

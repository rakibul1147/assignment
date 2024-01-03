#include <stdio.h>
int source[] = {10, 20, 30, 40, 50, 0, 0};
int size=7;
void removeE(int source[], int size, int idx) {
if (idx >= 0 && idx < size) {
for (int i = idx; i < size - 1; i++) {
source[i] = source[i + 1];
}source[size - 1] = 0;
}
}
int main() {
removeE(source,5,2);

printf("After removal: [ ");
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}printf("]");
return 0;
}

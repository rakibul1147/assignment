#include <stdio.h>
int source[] = {10, 20, 30, 40, 50, 60};
int n=6;
void shiftLeft(int source[], int k) {
for (int j = 0; j < k; j++) {
for (int i = 0; i < n - 1; i++) {
source[i] = source[i + 1];
} source[n - 1] = 0;
}
}
int main() {
shiftLeft(source, 3);
printf("[");
for (int i = 0; i < n; i++) {
printf("%d ", source[i]);
}
printf("]");
return 0;
}

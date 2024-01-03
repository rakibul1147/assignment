#include <stdio.h>
int source[] = {10, 20, 30, 40, 50, 60};
int n=6;
void shifRight(int source[], int k) {
for (int j = 0; j < k; j++) {
for (int i = n - 1; i > 0; i--) {
source[i] = source[i - 1];
} source[0] = 0;
}
}
int main() {
shifRight(source, 3);
printf("[");
for (int i = 0; i < n; i++) {
printf("%d ", source[i]);
}
printf("]");
return 0;
}

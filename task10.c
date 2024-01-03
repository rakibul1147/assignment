#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
return newNode;
}

void addNode(struct Node** head, int data) {
struct Node* newNode = createNode(data);
newNode->next = *head;
*head = newNode;
}
int hasCycle(struct Node* head, struct Node** cycleStart) {
struct Node* slow = head;
struct Node* fast = head;

while (fast != NULL && fast->next != NULL) {
slow = slow->next;
fast = fast->next->next;

if (slow == fast) {
slow = head;
while (slow != fast) {
slow = slow->next;
fast = fast->next;
} *cycleStart = slow;

return 1;
}
}
return 0;
}
int main() {
struct Node* head = NULL;
struct Node* cycleStart = NULL;
addNode(&head, 10);
addNode(&head, 20);
addNode(&head, 30);
addNode(&head, 40);
addNode(&head, 50);
struct Node* node50 = head;
while (node50->next != NULL) {
node50 = node50->next;
}
struct Node* node10 = head;
while (node10->next != NULL) {
node10 = node10->next;
}
node50->next = node10;
int result = hasCycle(head, &cycleStart);
if (result) {
printf("Has Cycle: Yes\n");
printf("Cycle Start Node: %d\n", cycleStart->data);
} else {
printf("Has Cycle: No\n");
}
return 0;
}

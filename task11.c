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

void append(struct Node** head, int data) {
struct Node* newNode = createNode(data);
if (*head == NULL) {
*head = newNode;
} else {
struct Node* current = *head;
while (current->next != NULL) {
current = current->next;
}
current->next = newNode;
}
}

struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
struct Node* mergedList = NULL;
while (list1 != NULL && list2 != NULL) {

if (list1->data < list2->data) {
append(&mergedList, list1->data);
list1 = list1->next;
} else {
append(&mergedList, list2->data);
list2 = list2->next;
}
}
while (list1 != NULL) {
append(&mergedList, list1->data);
list1 = list1->next;
}
while (list2 != NULL) {
append(&mergedList, list2->data);
list2 = list2->next;
}

return mergedList;
}
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d", current->data);
if (current->next != NULL) {
printf(" -> ");
}
current = current->next;
}
printf("\n");
}

int main() {
struct Node* listA = NULL;

struct Node* listB = NULL;

append(&listA, 5);
append(&listA, 10);

append(&listB, 7);
append(&listB, 12);

printf("List A: ");
printList(listA);
printf("List B: ");
printList(listB);

struct Node* mergedList = mergeSortedLists(listA, listB);

printf("Merged List: ");
printList(mergedList);

return 0;
}

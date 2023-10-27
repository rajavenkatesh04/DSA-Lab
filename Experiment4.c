#include <stdio.h>

#define MAX_SIZE 100

// Define a structure for the list
struct ArrayList {
    int data[MAX_SIZE];
    int length;
};

// Initialize a new list
void initialize(struct ArrayList* list) {
    list->length = 0;
}

// Insert an element at the end of the list
void insert(struct ArrayList* list, int value) {
    if (list->length < MAX_SIZE) {
        list->data[list->length] = value;
        list->length++;
    } else {
        printf("List is full, cannot insert.\n");
    }
}

// Remove an element at a specific index
void removeAt(struct ArrayList* list, int index) {
    if (index >= 0 && index < list->length) {
        for (int i = index; i < list->length - 1; i++) {
            list->data[i] = list->data[i + 1];
        }
        list->length--;
    } else {
        printf("Index out of bounds.\n");
    }
}

// Get the element at a specific index
int get(struct ArrayList* list, int index) {
    if (index >= 0 && index < list->length) {
        return list->data[index];
    } else {
        printf("Index out of bounds.\n");
        return -1;
    }
}

// Print the list
void printList(struct ArrayList* list) {
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    struct ArrayList myList;

    // Initialize the list
    initialize(&myList);

    // Insert elements
    insert(&myList, 10);
    insert(&myList, 20);
    insert(&myList, 30);

    printf("List: ");
    printList(&myList);

    // Remove an element
    removeAt(&myList, 1);

    printf("List after removing element at index 1: ");
    printList(&myList);

    // Get an element
    int element = get(&myList, 0);
    if (element != -1) {
        printf("Element at index 0: %d\n", element);
    }

    return 0;
}

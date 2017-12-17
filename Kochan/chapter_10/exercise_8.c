#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
    struct entry *previous;
};


void sort3(struct entry *list_pointer)
{
    int tmp;
    struct entry *first, *second, *third;
    first = list_pointer;
    second = first->next;
    third = second->next;

    if (first->value < second->value) {
        tmp = first->value;
        first->value = second->value;
        second->value = tmp;
    }
    if (second->value < third->value) {
        tmp = second->value;
        second->value = third->value;
        third->value = tmp;
    }
}

int main(void) {

    struct entry n1, n2, n3, n4, n5;
    struct entry *list_pointer = &n1;

    n1.previous = (struct entry *) 0;
    n1.value = 100;
    n1.next = &n2;

    n2.previous = &n1;
    n2.value = 200;
    n2.next = &n3;

    n3.previous = &n2;
    n3.value = 33;
    n3.next = (struct entry *) 0;

    void sort3(struct entry *list_pointer);

    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    list_pointer = &n1;
    sort3(list_pointer);

    printf("The array after the sort:\n");

    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    return 0;
}

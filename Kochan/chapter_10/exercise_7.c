#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
    struct entry *previous;
};


void sort(struct entry *list_pointer)
{
    struct entry *current, *next;
    int tmp;
    for (current=list_pointer; current != (struct entry *) 0; current=current->next)
        for (next=current->next; next != (struct entry *) 0; next=next->next)
            if (current->value < next->value) {
                tmp = current->value;
                current->value = next->value;
                next->value = tmp;
            }
}

int main(void) {

    struct entry n1, n2, n3, n4, n5;
    struct entry *list_pointer = &n1;

    n1.previous = (struct entry *) 0;
    n1.value = 100;
    n1.next = &n2;

    n2.previous = &n1;
    n2.value = 50;
    n2.next = &n3;

    n3.previous = &n2;
    n3.value = 33;
    n3.next = &n4;

    n4.previous = &n2;
    n4.value = 300;
    n4.next = &n5;

    n5.previous = &n2;
    n5.value = 18;
    n5.next = (struct entry *) 0;


    void sort(struct entry *list_pointer);

    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    list_pointer = &n1;
    sort(list_pointer);

    printf("The array after the sort:\n");

    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    return 0;
}

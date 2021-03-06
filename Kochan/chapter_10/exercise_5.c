#include <stdio.h>


struct entry
{
    int value;
    struct entry *next;
    struct entry *previous;
};


int main (void)
{
    struct entry n0, n1, n2, n3, n4;
    struct entry *list_pointer = &n0;

    n0.previous = (struct entry *) 0;
    n0.value = 0;
    n0.next = &n1;

    n1.previous = &n0;
    n1.value = 100;
    n1.next = &n2;

    n2.previous = &n1;
    n2.value = 200;
    n2.next = &n3;

    n3.previous = &n2;
    n3.value = 300;
    n3.next = (struct entry *) 0;


    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }
    list_pointer = &n3;
    while (list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->previous;
    }
}

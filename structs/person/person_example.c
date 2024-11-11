#include <stdio.h>
#include "person.h"

int main() {
    Person p;
    snprintf(p.name, sizeof(p.name), "Alice");
    p.age = 30;
    p.height = 5.7;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.1f\n", p.height);

    return 0;
}

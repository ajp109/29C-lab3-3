#include "mbed.h"

int main() {

    char array[] = "Hello!";
    char const * literal = "Hello!";

    printf("array: %s\n", array);
    printf("literal: %s\n", literal);

    printf("array is stored at %p\n", array);
    printf("literal is stored at %p\n", literal);

    while (true) {
        sleep();
    }
}

#include <stdio.h>

int main (int argc, char** argv) {
    int i;
    for (i = 1; i <= 200; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            printf("fizz\n");
        } else if (i % 5 == 0 && i % 3 != 0) {
            printf("buzz\n");
        } else if (i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz\n");
        }
    }

    return 0;
}

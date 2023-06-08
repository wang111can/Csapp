#include <stdio.h>


int is_little() {

    int port = 1;
    char *x = &port;
    return x[0];
}

int main() {
    printf("%d\n", is_little());
}
#include <stdio.h>

typedef unsigned char * byter_pointer;

void show_bytes(byter_pointer start, size_t len) {
    for (size_t i = 0;i < len;i ++ ) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byter_pointer)&x, sizeof (int));
}


void show_float(float x) {
    show_bytes((byter_pointer)&x, sizeof (float));
}


void show_pointer(void* x) {
    show_bytes((byter_pointer)&x, sizeof (void*));
}

void show(int x) {
    int val = x;
    int *pointer = &val;
    float ft = x;
    show_int(val);
    show_float(ft);
    show_pointer(pointer);
}

int main() {

    show(155);
}
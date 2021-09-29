#include <stdio.h>

int main(){
    char character = "h";
    int integer = 1;
    long longNum = 1;
    printf("char mem address hex: %p\n", &character);
    printf("int mem address hex: %p\n", &integer);
    printf("long mem address hex: %p\n", &longNum);
    printf("char mem address decimal: %lu\n", &character);
    printf("int mem address decimal: %lu\n", &integer);
    printf("long mem address decimal: %lu\n", &longNum);
}
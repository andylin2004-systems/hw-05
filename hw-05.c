#include <stdio.h>

int main(){
    char character = 'h';
    int integer = 1;
    long longNum = 1;
    printf("char mem address hex: %p\n", &character);
    printf("int mem address hex: %p\n", &integer);
    printf("long mem address hex: %p\n", &longNum);
    printf("char mem address decimal: %lu\n", &character);
    printf("int mem address decimal: %lu\n", &integer);
    printf("long mem address decimal: %lu\n", &longNum);
    char *characterPointer = &character;
    int *integerPointer = &integer;
    long *longPointer = &longNum;
    printf("char mem pointer address: %p\n", characterPointer);
    printf("int mem pointer address: %p\n", integerPointer);
    printf("long mem pointer address: %p\n", longPointer);
    *characterPointer = 'a';
    *integerPointer += 1;
    *longPointer += 1;
    printf("char new value to a: %c\n", character);
    printf("int new value plus 1: %d\n", integer);
    printf("long new value plus 1: %ld\n", longNum);
    unsigned int unsignInt = 65;
    int *unsignIntPointer = &unsignInt;
    char *unsignCharPointer = &unsignInt;
    printf("p: %p points to: %d\n", unsignIntPointer, *unsignIntPointer);
    printf("p: %p points to: %c\n", unsignCharPointer, *unsignCharPointer);
    printf("unsignInt in hex: %x\n", unsignInt);
    printf("unsignInt in decimal: %u\n", unsignInt);
    printf("unsignInt hex byte 0: %hhx byte 1: %hhx byte 2: %hhx byte 3: %hhx\n", *(unsignCharPointer), *(unsignCharPointer + 1), *(unsignCharPointer + 2), *(unsignCharPointer + 3));
    printf("unsignInt decimal byte 0: %hhu byte 1: %hhu byte 2: %hhu byte 3: %hhu\n", *(unsignCharPointer), *(unsignCharPointer + 1), *(unsignCharPointer + 2), *(unsignCharPointer + 3));
    int i;
    for (i = 0; i < 4; i++){
        *(unsignCharPointer + i) += 1;
        printf("unsignInt in hex: %x, in decimal: %u\n", unsignInt, unsignInt);
    }
    printf("unsignInt hex byte 0: %hhx byte 1: %hhx byte 2: %hhx byte 3: %hhx\n", *(unsignCharPointer), *(unsignCharPointer + 1), *(unsignCharPointer + 2), *(unsignCharPointer + 3));
    printf("unsignInt decimal byte 0: %hhu byte 1: %hhu byte 2: %hhu byte 3: %hhu\n", *(unsignCharPointer), *(unsignCharPointer + 1), *(unsignCharPointer + 2), *(unsignCharPointer + 3));
}
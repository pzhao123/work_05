#include <stdio.h>

int main() {

    //1
    char a = 'p';
    int b = 42;
    long c = 2174728;
    printf("a, b, c\n");
    printf("a: %c\tb: %d\tc: %ld\n\n", a, b, c);

    //2
    printf("a, b, c\n");
    printf("Hexadecimal Adresses:\nchar: %p\tint: %p\tlong: %p\n", &a, &b, &c);
    printf("Decimal Adresses:\nchar: %lu\tint: %lu\tlong: %lu\n\n", &a, &b, &c);

    //3
    char *ap = &a;
    int *bp = &b;
    long *cp = &c;

    //4
    printf("ap, bp, cp\n");
    printf("Hexadecimal Adresses:\nchar: %p\tint: %p\tlong: %p\n", ap, bp, cp);
    printf("Decimal Adresses:\nchar: %lu\tint: %lu\tlong: %lu\n\n", ap, bp, cp);

    //5
    *ap += 1;
    *bp = 283923458;
    *cp += 21;
    printf("a, b, c: after pointer changes\n");
    printf("a: %c\tb: %d\tc: %ld\n\n", a, b, c);

    //6
    unsigned int ui = 2378279;
    int *int_p = &ui;
    char *char_p = &ui;

    //7
    printf("int_p: %p int_p points to: %d\n", int_p, *int_p);
    printf("char_p: %p char_p points to: %c\n\n", char_p, *char_p);

    //8
    printf("unsigned int\n");
    printf("Hexadecimal: %x\tDecimal: %u\n\n", ui, ui);

    //9
    printf("Bytes in ui (hex)\n");
    int i;
    for (i = 0; i < 4; i++) {
        printf("%hhx\t", *(char_p + i));
    }
    printf("\nBytes in ui (deci)\n");
    for (i = 0; i < 4; i++) {
        printf("%hhu\t", *(char_p + i));
    }

    //10
    printf("\n\nunsigned int after +1 increment\n");
    for (i = 0; i < 4; i++) {
        *(char_p + i) += 1;
        printf("Hexidecimal: %x\t Decimal: %u\n", ui, ui);
    }
    printf("Bytes in ui (hex)\n");
    for (i = 0; i < 4; i++) {
        printf("%hhx\t", *(char_p + i));
    }
    printf("\nBytes in ui (deci)\n");
    for (i = 0; i < 4; i++) {
        printf("%hhu\t", *(char_p + i));
    }

    //11
    printf("\n\nunsigned int after +16 increment to each byte\n");
    for (i = 0; i < 4; i++) {
        *(char_p + i) += 16;
        printf("Hexidecimal: %x\t Decimal: %u\n", ui, ui);
    }
    printf("Bytes in ui (hex)\n");
    for (i = 0; i < 4; i++) {
        printf("%hhx\t", *(char_p + i));
    }
    printf("\nBytes in ui (deci)\n");
    for (i = 0; i < 4; i++) {
        printf("%hhu\t", *(char_p + i));
    }
    printf("\n");

    return 0;
}
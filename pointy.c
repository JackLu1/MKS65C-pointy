#include<stdio.h>

int main(){

    // int test = 12345; // 3039 in hex
    unsigned int a = 3847569123;
    char *ip = &a;

    printf("a: %x\n", a);
    printf("a: %u\n", a);

    printf("\n\nprint each byte\n" );
    for (int i = 0; i < sizeof(a); i++){
        printf("%x\n", *(ip + i));
    }

    printf("\n\nincrement by 1\n" );
    for (int i = 0; i < sizeof(a); i++){
        *(ip + i) += 1;
        printf("hex: %x\n", *(ip + i));
        printf("decimal: %d\n", *(ip + i));
    }

    a = 3847569123;
    printf("\n\nincrement by 16\n" );
    for (int i = 0; i < sizeof(a); i++){
        *(ip + i) += 16;
        printf("hex: %x\n", *(ip + i));
        printf("decimal: %d\n", *(ip + i));
    }

    return 0;
}

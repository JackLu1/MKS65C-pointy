#include<stdio.h>

int main(){

    // int test = 12345; // 3039 in hex
    unsigned int a = 3847569123;
    char *pointy = (char*)&a;

    printf("unsigned int a = %u\n", a);
    printf("unsigned int a in hex = %x\n", a);
    printf("pointy at address: %p\n\n", pointy);

    printf("print each byte\n");
    for (int i = 0; i < 4; i++){
        printf("%hhx\n", *pointy);
        printf("pointy at address: %p\n", pointy);
        pointy++;
    }

    pointy -= 4;
    printf("\nincrement each byte by 1\n");
    for (int i = 0; i < 4; i++){
        (*pointy)++;
        printf("%hhx\n", *pointy);
        pointy++;
    }
    printf("%u\n", a);

    pointy -= 4;
    printf("\nincrement each byte by 16\n");
    for (int i = 0; i < 4; i++){
        (*pointy)+= 16;
        printf("%hhx\n", *pointy);
        pointy++;
    }
    printf("%u\n", a);

    return 0;
}

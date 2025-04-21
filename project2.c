#include <stdio.h>

int hexToBinary(int hex) {

    return hex & 0b1111;

}

int main() {
    
    int hex;
    int bin;

    char input;

    while(1) {

        

        printf("Enter a hex from 0 to F or X to quit: ");

        scanf(" %c", &input);

        if (input == 'X') {
            break;
        } else if ('A' <= input && input <= 'F') {
            hex = input - '7';
        } else {
            hex = input - '0';
        }

        int binary = hexToBinary(hex);

        int bitPointer = 0b1000;

        for(int i = 0; i < 4; i++) {
            if ((binary & bitPointer) != 0) {
                printf("1");
            } else {
                printf("0");
            }
            bitPointer = bitPointer >> 1;

        }
        printf("\n");

    }   

    return 0;
}
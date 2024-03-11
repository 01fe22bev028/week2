#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *file;
    int n1, n2, a, b, c;


    file = fopen("reverse.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }


    fscanf(file, "%d %d", &n1, &n2);
    fclose(file);

    a = reverseDigits(n1);
    b = reverseDigits(n2);


    c = a + b;

    file = fopen("reverse.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }


    fprintf(file, "%d", c);
    fclose(file);


    printf("Numbers read from file: %d, %d\n", n1, n2);
    printf("Reversed numbers: %d, %d\n", a, b);
    printf("Sum of reversed numbers written back to file: %d\n", c);

    return 0;
}
int reverseDigits(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

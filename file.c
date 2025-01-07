#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    // Writing "ANGO" to file
    fptr = fopen("NewFile.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fptr, "%cANGO", 'M'); // Writing "MANGO"
    fclose(fptr);

    // Reading individual characters from the file
    fptr = fopen("NewFile.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("Characters in file:\n");
    for (int i = 0; i < 5; i++) {
        printf("Character in file is: %c\n", fgetc(fptr));
    }
    fclose(fptr);

    // Writing "apple" to the file
    fptr = fopen("NewFile.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fputc('a', fptr);
    fputc('p', fptr);
    fputc('p', fptr);
    fputc('l', fptr);
    fputc('e', fptr);
    fclose(fptr);

    // Reading the full file (EOF)
    fptr = fopen("NewFile.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("Full file content:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fptr);

    return 0;
}

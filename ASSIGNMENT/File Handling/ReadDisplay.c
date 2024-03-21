//Write a program to read and display contents of a text file.
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open file
    file = fopen(filename, "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display contents of file
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(file);

    return 0;
}

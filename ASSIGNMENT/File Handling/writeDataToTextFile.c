//Write a program to write data to a text file.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char data[1000];

    printf("Enter the name of the file to write: ");
    scanf("%s", filename);

    // Open file for writing
    file = fopen(filename, "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Prompt the user to enter data
    printf("Enter data to write to the file (press Enter to finish):\n");
    fflush(stdin); // Clear input buffer
    fgets(data, sizeof(data), stdin); // Read data from user input

    // Write data to file
    fprintf(file, "%s", data);

    // Close file
    fclose(file);

    printf("Data written to %s successfully.\n", filename);

    return 0;
}

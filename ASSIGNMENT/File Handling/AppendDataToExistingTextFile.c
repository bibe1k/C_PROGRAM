//Write a program to append data to an existing text file.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char data[1000];

    printf("Enter the name of the file to append: ");
    scanf("%s", filename);

    // Open file for appending
    file = fopen(filename, "a");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Prompt the user to enter data
    printf("Enter data to append to the file (press Enter to finish):\n");
    fflush(stdin); // Clear input buffer
    fgets(data, sizeof(data), stdin); // Read data from user input

    // Append data to file
    fprintf(file, "%s", data);

    // Close file
    fclose(file);

    printf("Data appended to %s successfully.\n", filename);

    return 0;
}

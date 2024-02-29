#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ITUP";
    int length = strlen(str);
    
    // Create an array to store mirrored string
    char mirrored[length + 1]; // +1 for the null terminator
    
    // Populate the mirrored array
    for (int i = 0; i < length; i++) {
        mirrored[i] = str[length - 1 - i];
    }
    
    // Add null terminator to the end of mirrored array
    mirrored[length] = '\0';
    
    // Print the mirrored string
    printf("Original: %s\n", str);
    printf("Mirrored: %s\n", mirrored);
    
    return 0;
}

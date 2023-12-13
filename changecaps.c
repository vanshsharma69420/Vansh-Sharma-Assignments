#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char sentence[]) {
    int i;

    // Capitalize the first letter of the sentence
    if (sentence[0] >= 'a' && sentence[0] <= 'z') {
        sentence[0] = toupper(sentence[0]);
    }

    // Iterate through the sentence to find spaces and capitalize the next letter
    for (i = 1; sentence[i] != '\0'; i++) {
        if (sentence[i - 1] == ' ' && (sentence[i] >= 'a' && sentence[i] <= 'z')) {
            sentence[i] = toupper(sentence[i]);
        }
    }
}

int main() {
    char sentence[100];

    // Input sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Call the function to capitalize the first letter of each word
    capitalizeFirstLetter(sentence);

    // Output the result
    printf("Output: %s\n", sentence);

    return 0;
}

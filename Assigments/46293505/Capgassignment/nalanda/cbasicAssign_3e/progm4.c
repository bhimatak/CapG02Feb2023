#include <stdio.h>

void display_words(char** words, int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", words[i]);
    }
}

int main() {
    char* words[] = {"Hello", "world", "this", "is", "a", "test"};
    int size = sizeof(words) / sizeof(words[0]);

    display_words(words, size);

    return 0;
}

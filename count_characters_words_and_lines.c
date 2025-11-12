#include <stdio.h>
int main() {
    char text[1000];
    int characters = 0, words = 0, lines = 0;
    printf("Enter multiple lines of text (end with $): ");
    gets(text);
    for (int i = 0; text[i] != '\0'; i++) {
        characters++;
        if (text[i] == ' ' || text[i] == '\n')
            words++;
        if (text[i] == '\n')
            lines++;
    }
    words = words + 1;
    lines = lines + 1;
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
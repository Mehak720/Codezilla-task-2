#include <stdio.h>
#include <string.h>
int main(){
    char word[200];
    printf("Enter a word: ");
    if (scanf("%199s", word) != 1) return 0;

    int len = 0;
    while (word[len] != '\0') len++;

    printf("Reversed word: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(word[i]);
    }
    putchar('\n');
    return 0;
}
 

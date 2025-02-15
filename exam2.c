#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 200

void countConsonants(char str[]) {
    int count[26] = {0}; 
    int i;  

    
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z' && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            count[ch - 'a']++;
        }
    }

    printf("\nConsonant Occurrences:\n");
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
}

int main() {
    char sentence[MAX_LEN];

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    countConsonants(sentence);

    return 0;
}




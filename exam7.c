#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char sentence[200];


    file1 = fopen("input.txt", "w");  
    if (file1 == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  

    fprintf(file1, "%s", sentence);  
    fclose(file1);  


    file1 = fopen("input.txt", "r");  
    if (file1 == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fgets(sentence, sizeof(sentence), file1);  
    fclose(file1);

    file2 = fopen("output.txt", "w");  
    if (file2 == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

    fprintf(file2, "%s", sentence);  
    fclose(file2);

    printf("Sentence successfully written from input.txt to output.txt\n");

    return 0;
}


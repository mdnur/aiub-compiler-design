#include <stdio.h>

int isNumeric(const char *input) {
    int i = 0;
    while (input[i] != '\0') {
       
        if (input[i] < '0' || input[i] > '9') {
            return 0;  
        }
        i++;
    }
    return 1;  
}

int main() {
    char input[100];
    printf("Enter input: ");
    scanf("%s", input);

    if (isNumeric(input)) {
        printf("Numeric\n");
    } else {
        printf("Not Numeric\n");
    }

    return 0;
}

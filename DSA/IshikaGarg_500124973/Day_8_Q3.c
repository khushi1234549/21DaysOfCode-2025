#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';  

    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';

    printf("Reversed string: \"%s\"\n", reversed);
    return 0;
}

// write a c program that will convert a string from uppercase to lowercase this program use string lib function

#include <stdio.h>
#include <ctype.h>  //declares functions used in character classification.
//  if dont run code use string header file"#include<string.h>
#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    int i;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("The string in lowercase is: %s", str);

    return 0;
}

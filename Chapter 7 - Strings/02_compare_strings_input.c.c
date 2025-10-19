#include <stdio.h>
#include <string.h>
// this code is correct only for some case,when we change string no 5 to 6 then input Riku is not same for both case.
int main(){
    //  Write a program to take string as an input from the user using %c and %s confirm 
// that the strings are equal.
char st1[5] ,st2[5];

printf("Enter a string character by character :\n");
for (int i = 0; i < 4;i++)
{
    scanf("%c",&st1[i]);
    fflush(stdin); // This line is required for flush the enter key during input char. by char.
}
st1[4]='\0';
 printf("Enter the same string as a single word:\n ");
scanf("%s",st2);

printf("The string character by character :%s\n", st1);
printf("The same string as a single word:%s\n", st2);
 if (strcmp(st1,st2) == 0)
    printf("The string are equal.");
 else
 printf("The string are not equal.");
 
    return 0;
}

/*#include <stdio.h>
#include <string.h> // For string comparison

int main() {
    char st1[90], st2[90]; // Arrays to store the input

    // Taking input character by character
    printf("Enter a string character by character (end with newline): ");
    int i = 0;
    char ch;
    while (i < 89) {  // Leaving space for null-terminator
        scanf("%c", &ch);
        if (ch == '\n')  // Stop when Enter is pressed
            break;
        st1[i++] = ch;
    }
    st1[i] = '\0';  // Null-terminate the character array

    // Taking input using %s (word-based)
    printf("Enter the same string as a single input: ");
    scanf("%s", st2); // This will take only the first word (stops at space)

    // Printing the inputs
    printf("\nCharacter-by-character input: %s\n", st1);
    printf("Word-based input: %s\n", st2);

    // Comparing both inputs
    if (strcmp(st1, st2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are NOT equal.\n");
    }

    return 0;
}*/

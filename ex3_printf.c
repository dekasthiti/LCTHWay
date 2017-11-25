#include <stdio.h>

int main()
{
    int age = 10;
    int height = 72;

    printf("Can you hear the bell ring?\n");
    printf("I am %d years old.\n\a", age);

    printf("Can you see the vertical tab\?\n");
    printf("I am %d inches tall.\n\a\v", height); // next line, bell, vertical tab
 
    printf("Can you see the page break\?\n");
    printf("I am not older than \f %d years\n",age); // form feed: next page
    
    printf("Can you see the escaped %% and \\\?\n");
    printf("(Note: For escaping %%, we use a %% and not a \\)\n");
    printf("Am I not older than %% %d years\?\n", age); 

    printf("Remember: Format specifiers are read from right to left\n");

    printf("How would you print a number in its hexadecimal representation\?\n");
    printf("The rightmost specifier is the conversion specifier: convert from decimal to hexadecimal\n");
    printf("Left of it is the length of the number : how many places to print\n");
    printf("Left of it is the flag for padding with leading 0 or spaces\n");
    printf("Left of it is the pound to indicate if you want a 0x or a O prepended to the number\n");
    printf("And so here it goes.....\v\n");
    printf("%#010x\n",12);
    return 0;
}

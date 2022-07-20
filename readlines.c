/* readlines.c
 * Source file for readlines, a program to simulate gets (from the C standard
 * library). Read in 3 lines and print them out. Store the lines in a "buffer".
 *
 * This is an example program from Kochan, Stephen G. "Programming in C
 * 3rd ed.", Sams Publishing. p. 209.
 *
 * Programmer: Mark Crapser
 *
 * This text allows me to push origin main again. More text.
 *
*/



#include <stdio.h>

void readLine(char buffer[]);

int main(int argc, char *argv[]) {

    int i;
    char line[81];

    for(i = 0; i <= 80; ++i)
        line[i] = '\b';

    i = 0;

    for(i = 0; i <= 2; ++i) {
        readLine(line);
        printf("%s\n\n", line);
    }

    return(0);
}

void readLine(char buffer[]) {

    char character;
    int i;

    i = 0;

    do{
        character = getchar();
        buffer[i] = character;
        ++i;
    } while(character != '\n');

    buffer[i - 1] = '\0';
}

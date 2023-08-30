//The function randchar() is a character function that returns a random character from ‘A’ – ‘Z’.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    
    int n = rand() % 26;
    char c = (char)(n+65);

//   fprintf("%c", c);
    return c;

}
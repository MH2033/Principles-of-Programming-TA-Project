#include <stdio.h>
void read_from_file(char str[],char file_name[]){
    int c,counter;
    FILE * file;
    file = fopen(file_name, "r");
    if (file) {
        for (counter = 0;(c = getc(file)) != EOF;counter++)
            str[counter] = c;
        str[counter+1] = '\0';
        fclose(file);
    }
}
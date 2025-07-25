#include <stdio.h>
#include <string.h>
#include "commands.h"

#define MAX_INPUT 100

int main(){
    char input[MAX_INPUT];

    printf("Welcome to INFILTR8 Terminal 🕵️‍♂️ \nType /help for commands.\n");

    while (1)
    {
        printf("\n>> ");
        fgets(input, MAX_INPUT, stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove newline

        if(strcmp(input, "/exit")==0){
            printf("Exiting INFILTER8");
            break;
        }
        handle_command(input);
    }

    return 0;
    
    
}
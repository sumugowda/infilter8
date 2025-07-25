#include <stdio.h>
#include <string.h>
#include "commands.h"

void handle_command(const char *input){
    if(strcmp(input, "/inspect") == 0){
        cmd_inspect();
    }
    else if(strcmp(input, "/help") == 0){
        cmd_help();
    }
    else{
        printf("Unknown command: %s\n", input);
    }
}

void cmd_inspect(){
    printf("[STUB] Inspecting system... 🧪\n Real functionality coming soon!");
}

void cmd_help(){
    printf("Available commands:\n");
    printf(" /inspect - Investigate a lead\n");
    printf(" /help - show commands\n");
    printf(" /exit - Logout\n");

}
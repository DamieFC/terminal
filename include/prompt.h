/********************************************************************
 * (c) DamieFC, MIT License                                         *
 * Important prompt stuff.                                          *
 ********************************************************************/
#ifndef PROMPT_H
#define PROMPT_H

#include "../include/io.h"

// Important variables
char input;
char prompt = "you@dfcterm>";
// This next bit I got from GeeksForGeeks
typedef enum { F, T } boolean;
boolean cmdrunning;

void psPrompt(void){
    printf("%s", prompt);
    gets("%s", input);
}

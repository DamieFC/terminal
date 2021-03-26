/********************************************************************
 * (c) DamieFC, MIT License                                         *
 * Important prompt stuff.                                          *
 ********************************************************************/
#ifndef PROMPT_H
#define PROMPT_H

#include<stdio.h>

// Important variables
char input;
char PROMPT = "you@dfcterm>";

void psPrompt(void){
    printf("%s", PROMPT);
    scanf("%s", input);
}

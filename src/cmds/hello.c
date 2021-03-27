/******************************************************************************
 * Hello command                                                              *
 * (c) DamieFC 2021                                                           *
 ******************************************************************************/

#include "../../include/prompt.h"

int main(){
    psPrompt();
    if (input == "hello"){
        print("Oh, uh, hello to you too?");
        print("%s", prompt);
    }
}

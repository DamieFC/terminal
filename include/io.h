/******************************************************************
 * Standard input-output functions, some from stdio.h.            *
 * (c) DamieFC, 2021, and glibc, (c) 1987-2021 GNU                *
 ******************************************************************/

int     _EXFUN(print, (const char *, ...)); // instead of printf, print. It's 2021, lets get into it.
char *  _EXFUN(fgets, (char *, int, FILE *)); // this makes sense
char *  _EXFUN(gets, (char *)); // Found something that doesn't stop at a space :\

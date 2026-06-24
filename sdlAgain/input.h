#pragma once

#include <SDL3/SDL.h>

extern SDL_Event event;
extern int quit;
extern char tempChar;
extern char charBuffer[1024];
extern int charIndex;
extern int caretX;
extern int caretY;
extern int dirLen;


void inputHandling(SDL_Event event);
/*
Iota System - fantasy computer simulator
Copyright (C) 2026 halberd/lordlydumbass/Sebastian Acevedo

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#define SDL_MAIN_HANDLED

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_surface.h>

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <string>


#include "global.h"
#include "tiles.h"
#include "text.h"
#include "cli.h"
#include "input.h"
#include "boot.h"

int colIndex = 0;
int frameCounter = 0;

int strIndex = 0;

char testString[] = "hello world";

char tempChar = ' ';

bool isKeyPressed = false;

char charBuffer[1024] = {};
char charRenderBuffer[1024] = {};

int charIndex = 0;
int charRenderIndex = 0;

int drawingXPos = 0;
int drawingYPos = 0;

int dirLen = 0;

int caretX = 0;
int caretY = 12;

int quit = 0;

char inputString[1024] = {};
int inStringIndex = 0; 

int main(int argc, char* argv[])
{
    SDL_SetMainReady();
	srand(time(NULL));

	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;

	int result = SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
	if (result < 0) {
		SDL_Log("SDL_Init error: %s", SDL_GetError());
		return -1;
	}

	window = SDL_CreateWindow("sdl3-ma balls", 912, 600, 0); //screen is 38 by 25 tiles
	if (window == NULL) {
		SDL_Log("SDL_CreateWindow: %s", SDL_GetError());
		return -2;
	}

	
	renderer = SDL_CreateRenderer(window, NULL);
	if (window == NULL) {
		SDL_Log("SDL_CreateWindow: %s", SDL_GetError());
		return -3;
	}
	SDL_SetRenderVSync(renderer, 1);


	SDL_Log("SDL3 initialized");

	SDL_SetRenderScale(renderer, 3, 3);

	createStarArray();

	const bool* currentKeyStates = SDL_GetKeyboardState(NULL);

	for (int i = 0; i < 1024; i++) { //initialize arrays to spaces instead of null terminators.
		charRenderBuffer[i] = 32;
		charBuffer[i] = 32;
		inputString[i] = 32;
	}



	SDL_Event event;
	while (!quit) {
		while (SDL_PollEvent(&event)) {
			inputHandling(event);
		}
        
        dirLen = strlen(currentDir);

        if (charIndex > 1024) {
            charIndex = 0;
        }

		charRenderIndex = 0;
		for (int i = 0; i < 1024; i++) {
			charRenderBuffer[i] = charBuffer[i];
		}

        SDL_RenderClear(renderer);

		initScreen(renderer);
        
        drawIntroStrings(renderer);

        writeDir(renderer);
        
        if (caretX < 0) { //check if caret is at beginning of text input area
            caretX = 0;
            caretY = textYPos;
        }

        if (caretX > (37 - dirLen)) {
            caretX = 0;
            caretY++;
        }

        drawingXPos = 0;
        drawingYPos = 0;
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 38 - dirLen; j++) {
                drawBGTile(renderer, t50f, caretX + dirLen, caretY);
				getTileFromASCII(charRenderBuffer[charRenderIndex]);
				drawBGTile(renderer, tempTile, (drawingXPos + dirLen), (drawingYPos + textYPos));
				charRenderIndex++;
                drawingXPos++;
			}
            drawingXPos = 0;
            drawingYPos++;
		}

		SDL_RenderPresent(renderer);

	}
	SDL_Log("SDL3 shutdown");
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}
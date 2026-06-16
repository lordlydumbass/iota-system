#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_surface.h>

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <string>


#include "tiles.h"
#include "text.h"

int colIndex = 0;
int frameCounter = 0;

int xIndex = 0;
int yIndex = 0;

int starArray[152][8][8] = {};

int random = 0;

int column = 0;

char* bmpPath = NULL;

int rowNum = 0;


int strIndex = 0;

int charValue = 0;

char testString[] = "hello world";

int xPos = 0;
int yPos = 8;

char tempChar = ' ';

bool isKeyPressed = false;

char charBuffer[1024] = {};
char charRenderBuffer[1024] = {};

int charIndex = 0;
int charRenderIndex = 0;

int textYPos = 8;

int drawingXPos = 0;
int drawingYPos = 0;

int getCharValue(char ch) {
	charValue = (int)ch;
	return charValue;
}

void drawBGTile(SDL_Renderer* renderer, int(&tile)[8][8], float xPos, float yPos) {
	xIndex = 0;
	yIndex = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch (tile[yIndex][xIndex]) {
			case 0:
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
				SDL_RenderPoint(renderer, xPos * 8 + xIndex, yPos * 8 + yIndex);
				break;
			case 1:
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				SDL_RenderPoint(renderer, xPos * 8 + xIndex, yPos * 8 + yIndex);
				break;
			case 3:
				SDL_SetRenderDrawColor(renderer, 170, 170, 170, 255);
				SDL_RenderPoint(renderer, xPos * 8 + xIndex, yPos * 8 + yIndex);
				break;
			case 5:
				SDL_SetRenderDrawColor(renderer, 85, 85, 85, 255);
				SDL_RenderPoint(renderer, xPos * 8 + xIndex, yPos * 8 + yIndex);
				break;
			}
			yIndex++;
		}
		xIndex++;
		if (xIndex >= 8) { xIndex = 0; }
		if (yIndex >= 8) { yIndex = 0; }
	}
}

void createStarArray() {
	for (int i = 0; i < 152; i++) {
		random = rand() % (9 - 1 + 1) + 1;
		switch (random) {
		case 1:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t010[j][k];
				}
			}
			break;
		case 2:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t011[j][k];
				}
			}
			break;
		case 3:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t012[j][k];
				}
			}
			break;
		case 4:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t013[j][k];
				}
			}
			break;
		case 5:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t014[j][k];
				}
			}
			break;
		case 6:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t015[j][k];
				}
			}
			break;
		case 7:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t016[j][k];
				}
			}
			break;
		case 8:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t017[j][k];
				}
			}
			break;
		case 9:
			for (int j = 0; j < 8; j++) {
				for (int k = 0; k < 8; k++) {
					starArray[i][j][k] = t018[j][k];
				}
			}
			break;
		}
	}
}

void drawStars(SDL_Renderer* renderer) {
	rowNum = 0;
	column = 0;
	for (int i = 0; i < 4; i++) {
		column = 0;
		for (int i = 0; i < 38; i++) {
			drawBGTile(renderer, starArray[i + (38 * rowNum)], column, rowNum);
			column++;
		}
		rowNum++;
	}
}

void initScreen(SDL_Renderer* renderer) {
	drawStars(renderer);

	//logo shit
	drawBGTile(renderer, t113, 3, 0);  //draw pyramid
	drawBGTile(renderer, t114, 4, 0);

	drawBGTile(renderer, t213, 3, 1);
	drawBGTile(renderer, t214, 4, 1);

	drawBGTile(renderer, t312, 2, 2);
	drawBGTile(renderer, t313, 3, 2);
	drawBGTile(renderer, t314, 4, 2);
	drawBGTile(renderer, t315, 5, 2);

	drawBGTile(renderer, t411, 1, 3);
	drawBGTile(renderer, t412, 2, 3);
	drawBGTile(renderer, t413, 3, 3);
	drawBGTile(renderer, t414, 4, 3);
	drawBGTile(renderer, t415, 5, 3);
	drawBGTile(renderer, t416, 6, 3);

	drawBGTile(renderer, t511, 1, 4);
	drawBGTile(renderer, t512, 2, 4);
	drawBGTile(renderer, t513, 3, 4);
	drawBGTile(renderer, t514, 4, 4);
	drawBGTile(renderer, t515, 5, 4);
	drawBGTile(renderer, t516, 6, 4);

	drawBGTile(renderer, t610, 0, 5);
	drawBGTile(renderer, t611, 1, 5);
	drawBGTile(renderer, t612, 2, 5);
	drawBGTile(renderer, t613, 3, 5);
	drawBGTile(renderer, t614, 4, 5);
	drawBGTile(renderer, t615, 5, 5);
	drawBGTile(renderer, t616, 6, 5);


	drawBGTile(renderer, t600, 8, 4);  //draw iota system logo
	drawBGTile(renderer, t602, 10, 4);
	drawBGTile(renderer, t608, 16, 4);

	drawBGTile(renderer, t700, 8, 5);
	drawBGTile(renderer, t701, 9, 5);
	drawBGTile(renderer, t702, 10, 5);
	drawBGTile(renderer, t703, 11, 5);
	drawBGTile(renderer, t704, 12, 5);
	drawBGTile(renderer, t705, 13, 5);
	drawBGTile(renderer, t706, 14, 5);
	drawBGTile(renderer, t707, 15, 5);
	drawBGTile(renderer, t708, 16, 5);
	drawBGTile(renderer, t709, 17, 5);
	drawBGTile(renderer, t70a, 18, 5);
	drawBGTile(renderer, t70b, 19, 5);

	drawBGTile(renderer, t800, 8, 6);
	drawBGTile(renderer, t801, 9, 6);
	drawBGTile(renderer, t802, 10, 6);
	drawBGTile(renderer, t803, 11, 6);
	drawBGTile(renderer, t804, 12, 6);
	drawBGTile(renderer, t805, 13, 6);
	drawBGTile(renderer, t806, 14, 6);
	drawBGTile(renderer, t807, 15, 6);
	drawBGTile(renderer, t808, 16, 6);
	drawBGTile(renderer, t809, 17, 6);
	drawBGTile(renderer, t80a, 18, 6);
	drawBGTile(renderer, t80b, 19, 6);

	//seperator
	for (int i = 0; i < 38; i++) {
		drawBGTile(renderer, t110, i, 7);
	}
}


void drawTestString(SDL_Renderer* renderer) {
	for (int i = 0; testString[i] != '\0'; i++) {
		int charValue = getCharValue(testString[i]);
		getTileFromASCII(charValue);
		drawBGTile(renderer, tempTile, i, 8);
	}
}

void keyPressed(SDL_Renderer* renderer, char key) {
	int charValue = getCharValue(key);
	getTileFromASCII(charValue);
	drawBGTile(renderer, tempTile, xPos, yPos);
	xPos++;
}

int main(int argc, char* argv[])
{
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

	SDL_Surface* screenSurface = SDL_GetWindowSurface(window);

	SDL_asprintf(&bmpPath, "%s/res/img/tileset.bmp", SDL_GetBasePath());

	SDL_Surface* imageSurface = SDL_LoadBMP(bmpPath);
	if (!imageSurface) {
		SDL_Log("Image failed to load: %s", SDL_GetError());
		return -4;
	}

	SDL_SetRenderScale(renderer, 3, 3);

	createStarArray();

	const bool* currentKeyStates = SDL_GetKeyboardState(NULL);

	for (int i = 0; i < 1024; i++) { //initialize arrays to spaces instead of null terminators.
		charRenderBuffer[i] = 32;
		charBuffer[i] = 32;
	}

	SDL_Event event;
	int quit = 0;
	while (!quit) {
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_EVENT_QUIT:
				SDL_Log("SDL3 event quit");
				quit = 1;
				break;
			case SDL_EVENT_KEY_DOWN:
				switch (event.key.key) {
				case SDLK_A:
					tempChar = 'a';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_B:
					tempChar = 'b';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_C:
					tempChar = 'c';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_D:
					tempChar = 'd';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_E:
					tempChar = 'e';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_F:
					tempChar = 'f';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_G:
					tempChar = 'g';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_H:
					tempChar = 'h';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_I:
					tempChar = 'i';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_J:
					tempChar = 'j';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_K:
					tempChar = 'k';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_L:
					tempChar = 'l';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_M:
					tempChar = 'm';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_N:
					tempChar = 'n';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_O:
					tempChar = 'o';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_P:
					tempChar = 'p';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_Q:
					tempChar = 'q';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_R:
					tempChar = 'r';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_S:
					tempChar = 's';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_T:
					tempChar = 't';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_U:
					tempChar = 'u';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_V:
					tempChar = 'v';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_W:
					tempChar = 'w';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_X:
					tempChar = 'x';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_Y:
					tempChar = 'y';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case SDLK_Z:
					tempChar = 'z';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				case (SDLK_A && (SDLK_LSHIFT || SDLK_RSHIFT)):
					tempChar = 'A';
					charBuffer[charIndex] = tempChar;
					charIndex++;
					break;
				}
			}
		}
		charRenderIndex = 0;
		for (int i = 0; i < 1024; i++) {
			charRenderBuffer[i] = charBuffer[i];
		}

		initScreen(renderer);

		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 38; j++) {
				getTileFromASCII(charRenderBuffer[charRenderIndex]);
				drawBGTile(renderer, tempTile, j, (i + textYPos));
				charRenderIndex++;
			}
		}

		SDL_RenderPresent(renderer);

	}

	SDL_DestroySurface(imageSurface);
	SDL_Log("SDL3 shutdown");
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}
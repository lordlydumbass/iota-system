#include <SDL3/SDL.h>

#include "input.h"

void inputHandling(SDL_Event event) {
    switch (event.type) {
			case SDL_EVENT_QUIT:
				SDL_Log("SDL3 event quit");
				quit = 1;
				break;
			case SDL_EVENT_KEY_DOWN:
				switch (event.key.key) {
                case SDLK_A:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'A';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'a';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_B:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'B';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'b';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_C:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'C';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'c';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_D:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'D';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'd';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_E:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'E';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'e';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_F:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'F';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'f';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_G:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'G';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'g';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_H:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'H';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'h';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_I:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'I';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'i';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_J:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'J';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'j';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_K:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'K';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'k';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_L:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'L';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'l';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_M:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'M';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'm';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_N:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'N';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'n';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_O:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'O';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'o';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_P:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'P';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'p';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_Q:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'Q';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'q';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_R:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'R';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'r';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_S:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'S';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 's';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_T:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'T';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 't';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_U:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'U';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'u';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_V:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'V';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'v';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_W:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'W';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'w';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_X:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'X';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'x';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_Y:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'Y';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'y';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_Z:
                    if (event.key.mod & SDL_KMOD_SHIFT) {
                        tempChar = 'Z';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    else {
                        tempChar = 'z';
                        charBuffer[charIndex] = tempChar;
                        charIndex++;
                        caretX++;
                    }
                    break;
                case SDLK_SPACE:
                    tempChar = ' ';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                    caretX++;
                    break;

                case SDLK_BACKSPACE:
                    charIndex--;
                    caretX--;
                    tempChar = ' ';
                    charBuffer[charIndex] = tempChar;
                    if (charIndex < 0) {
                    charIndex = 0;
                    }
                    
                    if ((caretX < 0) && (charIndex < 0)) {
                        caretY--;
                        caretX = 37 - dirLen;
                    }

                    if ((caretX < 0) && (charIndex != 0)) {
                        caretY--;
                        caretX = 37 - dirLen;
                    }
				}

                //use keycodes instead of key down events for symbols and numbers
                SDL_Keycode keycode = SDL_GetKeyFromScancode(event.key.scancode, event.key.mod, false);
                if (keycode == '0') {
                    tempChar = '0';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '1') {
                    tempChar = '1';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '2') {
                    tempChar = '2';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '3') {
                    tempChar = '3';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '4') {
                    tempChar = '4';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '5') {
                    tempChar = '5';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '6') {
                    tempChar = '6';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '7') {
                    tempChar = '7';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '8') {
                    tempChar = '8';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '9') {
                    tempChar = '9';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '!') {
                    tempChar = '!';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '"') {
                    tempChar = '"';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '#') {
                    tempChar = '#';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '$') {
                    tempChar = '$';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '%') {
                    tempChar = '%';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '&') {
                    tempChar = '&';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '\'') {
                    tempChar = '\'';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '(') {
                    tempChar = '(';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == ')') {
                    tempChar = ')';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '*') {
                    tempChar = '*';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '+') {
                    tempChar = '+';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == ',') {
                    tempChar = ',';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '-') {
                    tempChar = '-';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '.') {
                    tempChar = '.';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '/') {
                    tempChar = '/';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == ':') {
                    tempChar = ':';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == ';') {
                    tempChar = ';';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '<') {
                    tempChar = '<';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '=') {
                    tempChar = '=';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '>') {
                    tempChar = '>';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '?') {
                    tempChar = '?';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '@') {
                    tempChar = '@';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '[') {
                    tempChar = '[';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '\\') {
                    tempChar = '\\';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == ']') {
                    tempChar = ']';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '^') {
                    tempChar = '^';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '_') {
                    tempChar = '_';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '`') {
                    tempChar = '`';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '{') {
                    tempChar = '{';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '|') {
                    tempChar = '|';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '}') {
                    tempChar = '}';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
                if (keycode == '~') {
                    tempChar = '~';
                    charBuffer[charIndex] = tempChar;
                    charIndex++;
                        caretX++;
                }
			}
}
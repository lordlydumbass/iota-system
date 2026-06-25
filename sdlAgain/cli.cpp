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

#include <SDL3/SDL.h>

#include "boot.h"
#include "global.h"
#include "text.h"

void printString(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        //int charValue = getCharValue(str[i]);
    }
}

void writeDir(SDL_Renderer* renderer) {
    xPos = 0;
    for (int i = 0; currentDir[i] != '\0'; i++){
        int charValue = getCharValue(currentDir[i]);
        getTileFromASCII(charValue);
        drawBGTile(renderer, tempTile, xPos, textYPos);
        xPos++;
    }
}
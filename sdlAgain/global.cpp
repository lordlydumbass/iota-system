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

int xIndex = 0;
int yIndex = 0;

int textYPos = 12;


int charValue = 0;

char currentDir[1024] = "IOTA/>";

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
		if (xIndex >= 8) { 
            xIndex = 0; 
        }
		if (yIndex >= 8) { 
            yIndex = 0; 
        }
	}
}
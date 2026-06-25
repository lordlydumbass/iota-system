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

#include "global.h"
#include "tiles.h"
#include "text.h"

int randomStarInt = 0;
int starArray[152][8][8] = {};
int rowNum = 0;
int column = 0;
int xPos = 0;
int strY = 0;

char introString1[78] = "Iota System - fantasy computer\nsimulator\nCopyright 2026 halberd/lordlydumbass";

void createStarArray() {
	for (int i = 0; i < 152; i++) {
        randomStarInt = SDL_rand(10);
		switch (randomStarInt) {
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

void drawIntroStrings(SDL_Renderer* renderer) {
    xPos = 0;
    strY = 0;

	for (int i = 0; introString1[i] != '\0'; i++) {
        if (introString1[i] == '\n') {
            strY++;
            xPos = 0;
            continue;
        }
		int charValue = getCharValue(introString1[i]);
		getTileFromASCII(charValue);
		drawBGTile(renderer, tempTile, xPos, (8 + strY));
        xPos++;
	}
}
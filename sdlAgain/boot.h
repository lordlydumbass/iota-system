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

#pragma once

extern int randomStarInt;
extern int starArray[152][8][8];
extern int rowNum;
extern int column;
extern int xPos;
extern int strY;

extern char introString1[78];

extern void createStarArray();
extern void drawStars(SDL_Renderer* renderer);
extern void initScreen(SDL_Renderer* renderer);
extern void drawIntroStrings(SDL_Renderer* renderer);
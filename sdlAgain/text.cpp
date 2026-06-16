//LUT for converting ASCII char values to tiles.
//output written to tempTile.

#include "tiles.h"
#include "text.h"

int tempTile[8][8] = {
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
};

void getTileFromASCII(int asciiValue) {
    switch (asciiValue) {
    case 32: //space
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t000[i][j]; //blank tile
            }
        }
        break;
    case 33: //!
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t001[i][j]; //! tile
            }
        }
        break;
    case 34: //"
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t002[i][j]; //" tile
            }
        }
        break;
    case 35: //#
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t003[i][j]; //# tile
            }
        }
        break;
    case 36: //$
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t004[i][j]; //$ tile
            }
        }
        break;
    case 37: //%
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t005[i][j]; //% tile
            }
        }
        break;
    case 38: //&
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t006[i][j]; //& tile
            }
        }
        break;
    case 39: //'
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t007[i][j]; //' tile
            }
        }
        break;
    case 40: //(
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t008[i][j]; //( tile
            }
        }
        break;
    case 41: //)
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t009[i][j]; //) tile
            }
        }
    case 42: //*
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t00a[i][j]; //* tile
            }
        }
        break;
    case 43: //+
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t00b[i][j]; //+ tile
            }
        }
        break;
    case 44: //,
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t00c[i][j]; //, tile
            }
        }
        break;
    case 45: //-
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t00d[i][j]; //- tile
            }
        }
        break;
    case 46: //.
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t00e[i][j]; //. tile
            }
        }
        break;
    case 47: // /
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t00f[i][j]; // / tile
            }
        }
        break;
    case 48: //0
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t100[i][j]; //0 tile
            }
        }
        break;
    case 49: //1
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t101[i][j]; //1 tile
            }
        }
        break;
    case 50: //2
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t102[i][j]; //2 tile
            }
        }
        break;
    case 51: //3
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t103[i][j]; //3 tile
            }
        }
        break;
    case 52: //4
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t104[i][j]; //4 tile
            }
        }
        break;
    case 53: //5
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t105[i][j]; //5 tile
            }
        }
        break;
    case 54: //6
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t106[i][j]; //6 tile
            }
        }
        break;
    case 55: //7
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t107[i][j]; //7 tile
            }
        }
        break;
    case 56: //8
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t108[i][j]; //8 tile
            }
        }
        break;
    case 57: //9
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t109[i][j]; //9 tile
            }
        }
        break;
    case 58: //:
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t10a[i][j]; //: tile
            }
        }
        break;
    case 59: //;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t10b[i][j]; //; tile
            }
        }
        break;
    case 60: //<
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t10c[i][j]; //< tile
            }
        }
    case 61: //=
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t10d[i][j]; //= tile
            }
        }
        break;
    case 62: //>
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t10e[i][j]; //> tile
            }
        }
        break;
    case 63: //?
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t10f[i][j]; //? tile
            }
        }
        break;
    case 64: //@
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t200[i][j]; //@ tile
            }
        }
        break;
    case 65: //A
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t201[i][j]; //A tile
            }
        }
        break;
    case 66: //B
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t202[i][j]; //B tile
            }
        }
        break;
    case 67: //C
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t203[i][j]; //C tile
            }
        }
        break;
    case 68: //D
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t204[i][j]; //D tile
            }
        }
        break;
    case 69: //E
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t205[i][j]; //E tile
            }
        }
        break;
    case 70: //F
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t206[i][j]; //F tile
            }
        }
        break;
    case 71: //G
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t207[i][j]; //G tile
            }
        }
        break;
    case 72: //H
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t208[i][j]; //H tile
            }
        }
        break;
    case 73: //I
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t209[i][j]; //I tile
            }
        }
        break;
    case 74: //J
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t20a[i][j]; //J tile
            }
        }
        break;
    case 75: //K
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t20b[i][j]; //K tile
            }
        }
        break;
    case 76: //L
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t20c[i][j]; //L tile
            }
        }
        break;
    case 77: //M
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t20d[i][j]; //M tile
            }
        }
        break;
    case 78: //N
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t20e[i][j]; //N tile
            }
        }
        break;
    case 79: //O
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t20f[i][j]; //O tile
            }
        }
        break;
    case 80: //P
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t300[i][j]; //P tile
            }
        }
        break;
    case 81: //Q
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t301[i][j]; //Q tile
            }
        }
        break;
    case 82: //R
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t302[i][j]; //R tile
            }
        }
        break;
    case 83: //S
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t303[i][j]; //S tile
            }
        }
        break;
    case 84: //T
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t304[i][j]; //T tile
            }
        }
        break;
    case 85: //U
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t305[i][j]; //U tile
            }
        }
        break;
    case 86: //V
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t306[i][j]; //V tile
            }
        }
        break;
    case 87: //W
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t307[i][j]; //W tile
            }
        }
        break;
    case 88: //X
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t308[i][j]; //X tile
            }
        }
        break;
    case 89: //Y
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t309[i][j]; //Y tile
            }
        }
        break;
    case 90: //Z
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t30a[i][j]; //Z tile
            }
        }
        break;
    case 91: //[
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t30b[i][j]; //[ tile
            }
        }
        break;
    case 92: //fslash
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t30c[i][j]; //fslash tile
            }
        }
        break;
    case 93: //]
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t30d[i][j]; //] tile
            }
        }
        break;
    case 94: //^
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t30e[i][j]; //^ tile
            }
        }
        break;
    case 95: //_
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t30f[i][j]; //_ tile
            }
        }
        break;
    case 96: //`
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t400[i][j]; //` tile
            }
        }
        break;
    case 97: //a
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t401[i][j]; //a tile
            }
        }
        break;
    case 98: //b
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t402[i][j]; //b tile
            }
        }
        break;
    case 99: //c
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t403[i][j]; //c tile
            }
        }
        break;
    case 100: //d
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t404[i][j]; //d tile
            }
        }
        break;
    case 101: //e
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t405[i][j]; //e tile
            }
        }
        break;
    case 102: //f
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t406[i][j]; //f tile
            }
        }
        break;
    case 103: //g
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t407[i][j]; //g tile
            }
        }
        break;
    case 104: //h
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t408[i][j]; //h tile
            }
        }
        break;
    case 105: //i
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t409[i][j]; //i tile
            }
        }
        break;
    case 106: //j
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t40a[i][j]; //j tile
            }
        }
        break;
    case 107: //k
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t40b[i][j]; //k tile
            }
        }
        break;
    case 108: //l
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t40c[i][j]; //l tile
            }
        }
        break;
    case 109: //m
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t40d[i][j]; //m tile
            }
        }
        break;
    case 110: //n
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t40e[i][j]; //n tile
            }
        }
        break;
    case 111: //o
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t40f[i][j]; //o tile
            }
        }
        break;
    case 112: //p
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t500[i][j]; //p tile
            }
        }
        break;
    case 113: //q
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t501[i][j]; //q tile
            }
        }
        break;
    case 114: //r
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t502[i][j]; //r tile
            }
        }
        break;
    case 115: //s
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t503[i][j]; //s tile
            }
        }
        break;
    case 116: //t
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t504[i][j]; //t tile
            }
        }
        break;
    case 117: //u
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t505[i][j]; //u tile
            }
        }
        break;
    case 118: //v
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t506[i][j]; //v tile
            }
        }
        break;
    case 119: //w
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t507[i][j]; //w tile
            }
        }
        break;
    case 120: //x
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t508[i][j]; //x tile
            }
        }
        break;
    case 121: //y
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t509[i][j]; //y tile
            }
        }
        break;
    case 122: //z
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t50a[i][j]; //z tile
            }
        }
        break;
    case 123: //{
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t50b[i][j]; //{ tile
            }
        }
        break;
    case 124: //|
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t50c[i][j]; //| tile
            }
        }
        break;
    case 125: //}
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t50d[i][j]; //} tile
            }
        }
        break;
    case 126: //~
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tempTile[i][j] = t50e[i][j]; //~ tile
            }
        }
        break;
    }
}
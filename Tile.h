#ifndef TILE_H
#define TILE_H

#include "Draw.h"
#include "globals.h"
#include "globalsGame.h"
#include <iostream>

class Territorio;
class Unidade;

class Tile
{
	public:
		int posX;
		int posY;
		int tipo;
    Unidade* ocupante;
    Territorio* territorio;

		Tile(int _posX, int _posY, int _tipo);
<<<<<<< HEAD
		void show(bool);
=======
		void show();
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
    void showCapital();
};

#endif

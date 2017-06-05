#include "Tile.h"
#include "Territorio.h"
#include "Unidade.h"

SDL_Rect rectTile;

Tile::Tile(int _posX, int _posY, int _tipo)
{
	posX = _posX;
	posY = _posY;
	tipo = _tipo;

	ocupante = NULL;
	territorio = NULL;
}

<<<<<<< HEAD
void Tile::show(bool mostrarFillRects = true)
{
	if(mostrarFillRects)
=======
void Tile::show()
{
	if(territorio != NULL)
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
	{
		SDL_Rect rectTile;

		rectTile.x = posX*30;
		rectTile.y = posY*30;
		rectTile.w = 30;
		rectTile.h = 30;

<<<<<<< HEAD
		SDL_FillRect(screen, &rectTile, cores[tipo]);
	}

	if(territorio != NULL && (*territorio).nacao != NULL)
	{
		SDL_FillRect(transparentSurface , NULL , (*(*territorio).nacao).cor);
	}

	if(territorio != NULL)
	{
		(*drawObj).apply_surface( posX*30, posY*30, transparentSurface, screen, NULL);
	}	
=======

		SDL_FillRect(screen, &rectTile, (*(*territorio).nacao).cor);

	}
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
}

void Tile::showCapital()
{
	SDL_Rect rectTile;

	rectTile.x = posX*30;
	rectTile.y = posY*30;
	rectTile.w = 30;
	rectTile.h = 30;

	SDL_FillRect(screen, &rectTile, 0xFFFFFF);	
}

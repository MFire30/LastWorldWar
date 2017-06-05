#include "Cenario.h"
#include "Tile.h"

Cenario::Cenario(int _numeroTilesX, int _numeroTilesY)
{
	numeroTilesX = _numeroTilesX;
	numeroTilesY = _numeroTilesY;

	tiles = NULL;
}

int Cenario::initialize(int **tipos)
{
	tiles = (Tile***) calloc(numeroTilesY*numeroTilesX, sizeof(Tile**));

	for(int i = 0; i<numeroTilesY; i++)
	{
		tiles[i] = (Tile**) calloc(numeroTilesX, sizeof(Tile*));
		for(int j = 0; j<numeroTilesX; j++)
		{
<<<<<<< HEAD
			tiles[i][j] = new Tile(j,i,tipos[i][j]);
=======
			tiles[i][j] = new Tile(i,j,tipos[i][j]);
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
		}
	}
	
	if(tiles)
		return -1;

	if(tiles[numeroTilesY-1])
		return -2;

	return 1;
}

int Cenario::finalize()
{
	for(int i = 0; i<numeroTilesY; i++)
	{
		for(int j = 0; j<numeroTilesX; j++)
		{
<<<<<<< HEAD
			if( tiles[i][j] != NULL )
				delete( tiles[i][j] );
=======
			delete( tiles[i][j] );
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
		}
		free(tiles[i]);
	}
	free(tiles);

	return 1;
}

void Cenario::show()
{
<<<<<<< HEAD
	/*for(int i = 0; i<numeroTilesY; i++)
=======
	for(int i = 0; i<numeroTilesY; i++)
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
	{
		for(int j = 0; j<numeroTilesX; j++)
		{
			tiles[i][j] -> show();
		}
<<<<<<< HEAD
	}*/
=======
	}
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
}


#ifndef TERRITORIO_H
#define TERRITORIO_H

<<<<<<< HEAD
#include "Nacao.h"
#include "ClasseUnidade.h"
=======
#include "Tile.h"
#include "Nacao.h"
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
#include "globals.h"
#include "globalsGame.h"
#include <iostream>
#include <list> 

<<<<<<< HEAD
class Tile;

=======
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
class Territorio
{
  public:
    list <Tile*> tiles;
    Nacao* nacao;
<<<<<<< HEAD
	string nome;
	
	int pontosProducao;

    Territorio(string);
=======

    Territorio();
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
    void coletar();
    void serConquistado(Nacao* _nacao);
    void addTile(Tile* tile);
    void mostrarCapital();
<<<<<<< HEAD
	void criarUnidade(ClasseUnidade* classeUnidade);
=======
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
};

#endif

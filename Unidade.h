#ifndef UNIDADE_H
#define UNIDADE_H

#include "Draw.h"
#include "globals.h"
#include "globalsGame.h"
#include <string>
<<<<<<< HEAD
#include <list>

class ClasseUnidade;
=======

>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
class Nacao;
class Tile;

class Unidade
{
	public:
		int posX;	//tile X do mapa onde atualmente habita
		int posY;	//tile Y do mapa onde atualmente habita
<<<<<<< HEAD
//		int tipo;	//aviao,navio,soldado,canhao,etc...
		ClasseUnidade* tipo;
		Nacao* nacao;

		int qtdMovimentos;
		list<Unidade*>unidadesGuardadas;

		int quadroAnimacao;
		int tipoAnimacao;		//0 parado, 1 sequencia, 2 continua ate comando de parar

		bool isDead;
		bool selecionado;

		Unidade(int, int, ClasseUnidade*, Nacao*);
		int show();
		int attack(Unidade *); 
		bool canMove(Tile* tileDestino);
		void atualizaAnimacao();
		void finalize();
=======
		int tipo;	//aviao,navio,soldado,canhao,etc...

		Nacao* nacao;

		int qtdMovimentos;	
		int ambiente;			//1 terra, 2 agua, 3 ambos	
		
		int forca;
		bool isDead;

		bool selecionado;

		Unidade(int, int, int, int,Nacao*,int, int);
		int show();
		int attack(Unidade *); 
		bool canMove(Tile* tileDestino);
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
};

#endif

<<<<<<< HEAD
#include "ClasseUnidade.h"
=======
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
#include "Unidade.h"
#include "Nacao.h"
#include "Tile.h"


enum {
	AVIAO,
	NAVIO,
	SOLDADO,
	CANHAO
};

<<<<<<< HEAD
Unidade::Unidade(int _posX, int _posY, ClasseUnidade* _tipo, Nacao* _nacao) 
=======
Unidade::Unidade(int _posX, int _posY, int _tipo, int _forca, Nacao* _nacao, int _qtdMovimentos, int _ambiente) 
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
{
	posX = _posX;
	posY = _posY;
	tipo = _tipo;
<<<<<<< HEAD
	nacao = _nacao;

	qtdMovimentos = (*tipo).qtdMovimentos;

	quadroAnimacao = 0;

	isDead = false;
	selecionado = false;
}
int Unidade::show()
{
	if(tipo == soldado)
	{
		rect.x = 30*quadroAnimacao+1;
		rect.y = 0;
	}
	if (tipo == navio)
	{
		rect.x = 30*quadroAnimacao;
		rect.y = 32*4+3;
	}
	
	if (tipo == canhao)
	{
		rect.x = 33*(5+quadroAnimacao);
		rect.y = 30*1+3;
	}

	if (tipo == aviao)
	{
		rect.x = 32*(8+quadroAnimacao)+4;
=======
	forca = _forca;
	isDead = false;
	nacao = _nacao;
	selecionado = false;
	qtdMovimentos = _qtdMovimentos;
	ambiente = _ambiente;
}
int Unidade::show()
{
	if(tipo == SOLDADO)
	{
		rect.x = 30*0+1;
		rect.y = 30*0+1;
	}
	if (tipo == NAVIO)
	{
		rect.x = 30*0;
		rect.y = 32*4+3;
	}
	
	if (tipo == CANHAO)
	{
		rect.x = 33*5;
		rect.y = 30*1+3;
	}

	if (tipo == AVIAO)
	{
		rect.x = 32*8+4;
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
		rect.y = 32*4+3;
	}

	if(modo != MODO_NORMAL)
	{
		rect.x = posX*30;
		rect.y = posY*30;
	}

	rect.w = 30;
	rect.h = 30;	

	switch(modo)
	{
		case MODO_NORMAL:
			if(selecionado)
				SDL_SetAlpha(civilizationUnits, SDL_SRCALPHA, 100);
			(*drawObj).apply_surface( posX*30, posY*30, civilizationUnits, screen, &rect);
			//SDL_FillRect(screen, &rect, 0x000000AA);
			SDL_SetAlpha(civilizationUnits, SDL_SRCALPHA, 255);
			break;
		case MODO_QUADRADOS_PREENCHIDOS:
			SDL_FillRect(screen, &rect, cores[PRETO]);
			break;
		// case MODO_QUADRADOS:
		// 	(*drawObj).drawRect(screen, rect.x, rect.y, rect.w, rect.h, cores[PRETO]);
		// 	break;
		// case MODO_CIRCULOS:
		// 	(*drawObj).drawCircle(screen, rect.x, rect.y, rect.w/2, cores[PRETO],false);
		// 	break;
	}

	return 1;
}

int Unidade::attack(Unidade * inimigo)
{
	if( nacao == (*inimigo).nacao)
	{
		//printf("Nao pode atacar alguem da mesma nacao\n\n");
		return 1;
	}	

<<<<<<< HEAD
	(*audioHandler).playEffect_Enemy();

	//80% da forca mais 20% da forca vezes um numero aleatorio de 1 a 10
	int ataque = 0.8 * (*tipo).forca 			+ 0.2 * (*tipo).forca * (*randomObj).gerarNumero(10);
	int defesa = 0.8 * (*(*inimigo).tipo).forca	+ 0.2 * (*(*inimigo).tipo).forca * (*randomObj).gerarNumero(10);

	if(ataque > defesa)
	{
		(*inimigo).isDead = true;		
		(*(*inimigo).nacao).contarExercito();	
	}
	else
	{
=======

	//80% da forca mais 20% da forca vezes um numero aleatorio de 1 a 10
	int ataque = 0.8 * forca 			+ 0.2 * forca * (*randomObj).gerarNumero(10);
	int defesa = 0.8 * (*inimigo).forca + 0.2 * (*inimigo).forca * (*randomObj).gerarNumero(10);

	if(ataque > defesa)
	{
		cout << "ATAQUE: Inimigo morreu" << endl;
		(* inimigo).isDead = true;		
		(*(* inimigo).nacao).contarExercito();	
	}
	else
	{
		cout << "ATAQUE: Voce morreu" << endl;
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
		isDead = true;
		(*nacao).contarExercito();
	}

	return 1;
}

bool Unidade::canMove(Tile* tileDestino)
{
<<<<<<< HEAD
	if( (*tileDestino).ocupante != NULL )
	{
//		if((*(*tileDestino).ocupante).tipo == navio)
//			cout << (*(*tileDestino).ocupante).unidadesGuardadas.size() << endl;

		if( nacao != (*(*tileDestino).ocupante).nacao )
			attack( (*tileDestino).ocupante );
		else if ( 	( (*(*tileDestino).ocupante).tipo == navio && (*(*tileDestino).ocupante).unidadesGuardadas.size() < 3 ) || 
					( (*(*tileDestino).ocupante).tipo == aviao && (*(*tileDestino).ocupante).unidadesGuardadas.size() < 6 ) )
		{
			(*(*tileDestino).ocupante).unidadesGuardadas.push_back(this);
			isDead = true;
			selecionado = false;
			(*(*cenario).tiles[posY][posX]).ocupante = NULL;
			(*unidadeSelecionada).posX = (*tileDestino).posX;
			(*unidadeSelecionada).posY = (*tileDestino).posY;
			unidadeSelecionada = NULL;
			return true;
		}
=======
/*	cout << ambiente << " " << (*tileDestino).tipo << endl;
	cout << ((*tileDestino).tipo != OCEANO) << endl;
	cout << ((*tileDestino).tipo != PETROLEO) << endl;
	cout << (ambiente == TERRESTRE) << endl;*/

	if( (*tileDestino).ocupante != NULL )
	{
		if( nacao != (*(*tileDestino).ocupante).nacao )
			attack( (*tileDestino).ocupante );
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501

		if( (*(*tileDestino).ocupante).isDead )
			(*tileDestino).ocupante = NULL;

		return false;
	}

<<<<<<< HEAD
	if( (*tipo).ambiente == QUALQUER_AMBIENTE )				//qualquer ambiente AVIAO
		return true;
	if( (*tipo).ambiente == TERRESTRE )
=======
	if( (*tileDestino).tipo == QUALQUER_AMBIENTE )				//qualquer ambiente AVIAO
		return true;
	if( ambiente == TERRESTRE )
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
	{
		if( (*tileDestino).tipo != OCEANO && (*tileDestino).tipo != PETROLEO )
			return true;
	}
<<<<<<< HEAD
	if( (*tipo).ambiente == AQUATICO )
=======
	if( ambiente == AQUATICO )
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
	{
		if( (*tileDestino).tipo == OCEANO || (*tileDestino).tipo == PETROLEO )
			return true;
	}

	return false;
}

<<<<<<< HEAD
void Unidade::atualizaAnimacao()
{
	
}

void Unidade::finalize()
{
	while (!unidadesGuardadas.empty())
		unidadesGuardadas.pop_front();
}
=======
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501


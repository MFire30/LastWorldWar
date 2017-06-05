#ifndef NACAO_H
#define NACAO_H
<<<<<<< HEAD
#include "globalsGame.h" 
#include <list> 

class Unidade;
class Territorio;
class ClasseUnidade;

=======
#include "Unidade.h" 
#include "Territorio.h"
#include <list> 

>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
class Nacao
{
	public: 
		list <Unidade*> exercito;
		list <Territorio*> territorios;
		
		int petroleo;
		int madeira;
		int ouro;
		int ferro;
<<<<<<< HEAD

=======
		int energia;
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
	
		int qtdNacao[4];

		string nome;
		Uint32 cor;

		Nacao(int, int, int, int, string, Uint32);
		void init();
<<<<<<< HEAD
		void exercitoAdd(ClasseUnidade*, Territorio*, int, int);
		void exercitoPop();
=======
		void exercitoAdd(Unidade *);
		void exercitoPop();		
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
		void carregaScore();
		void contarExercito();
		int contarTerritorios();
		void coletar();
<<<<<<< HEAD
		void finalize();
		void atualizaQuadroExercito();
=======
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501
};

#endif

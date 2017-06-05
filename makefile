all:
<<<<<<< HEAD
	#g++ -g `sdl-config --cflags --libs` server.cpp -Wall -W -pedantic -ansi -lSDL -lSDL_image -lSDL_ttf -lSDL_net -o server

	g++ -g `sdl-config --cflags --libs` LastWorldWar.cpp Cenario.cpp Tile.cpp ClasseUnidade.cpp Unidade.cpp Random.cpp Draw.cpp Territorio.cpp ImageHandlerSDL.cpp biblioteca.cpp Network.cpp game.cpp AudioHandler.cpp FontHandler.cpp -Wall -W -pedantic -ansi -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lSDL_net globals.cpp globalsGame.cpp Nacao.cpp Timer.cpp -o LastWorldWar -std=c++0x
=======
	#g++ -g `sdl-config --cflags --libs` server.cpp -Wall -W -pedantic -ansi -l:libSDL-1.2.so.0 -lSDL_image -lSDL_ttf -lSDL_net -o server
	g++ -g `sdl-config --cflags --libs` server.cpp -Wall -W -pedantic -ansi -lSDL -lSDL_image -lSDL_ttf -lSDL_net -o server

	g++ -g `sdl-config --cflags --libs` LastWorldWar.cpp Cenario.cpp Tile.cpp Unidade.cpp Random.cpp Draw.cpp Territorio.cpp ImageHandlerSDL.cpp biblioteca.cpp Network.cpp game.cpp AudioHandler.cpp FontHandler.cpp -Wall -W -pedantic -ansi -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lSDL_net globals.cpp globalsGame.cpp Nacao.cpp Timer.cpp -o LastWorldWar -std=c++0x -lpthread
>>>>>>> 2bab34b0cc9c057aec7012183bb566d831248501

init: LastWorldWar
	./LastWorldWar

clean:
	rm -rf LastWorldWar

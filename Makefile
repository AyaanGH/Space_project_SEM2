all:
	g++ entryPoint.cpp -o .\builds\test.exe -DSFML_STATIC -I .\SFML\include -L .\SFML\lib -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lwinmm -lgdi32 -lfreetype -lFlAC -logg -lopenal32 -lsfml-audio-s -lsfml-main -lsfml-network-s -lvorbisenc -lvorbis -lvorbisfile
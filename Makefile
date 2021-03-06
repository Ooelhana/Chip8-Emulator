chip8: main.o chip8.o keyboard.o screen.o
	g++ -o chip8 main.o chip8.o keyboard.o screen.o -lSDL2

main.o: main.cc chip8.h keyboard.h screen.h chip8.cc
	g++ -c main.cc

chip8.o: chip8.cc chip8.h keyboard.h screen.h
	g++ -c chip8.cc

keyboard.o: keyboard.cc keyboard.h
	g++ -c keyboard.cc

screen.o: screen.cc screen.h
	g++ -c screen.cc

clean:
	rm chip8 main.o chip8.o keyboard.o screen.o

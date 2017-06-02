Main:	Main.o Binaria.o
	g++ Main.o Binaria.o -o Main

Main.o:	Main.cpp Binaria.h
	g++ -c Main.cpp

Binaria.o:	Binaria.cpp Binaria.h
	g++ -c Binaria.cpp


clean:	
	rm -f *.o Main

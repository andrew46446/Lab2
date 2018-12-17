all: ConsoleApplication1.o tools.o
	g++ -o Programm ConsoleApplication1.o tools.o

ConsoleApplication1.o: ConsoleApplication1.cpp tools.h
	g++ -c ConsoleApplication1.cpp

tools.o: tools.cpp tools.h
	g++ -c tools.cpp

clean:
	rm -f *.o Programm
test:
	./Programm

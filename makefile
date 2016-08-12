Point: inicio.o TrianguloPascal.o
	g++ inicio.o TrianguloPascal.o -o

Inicio.o:	main.cpp TrianguloPascal.h
	g++ -c main.cpp -o inicio.o

Triangulo.o:	TrianguloPascal.cpp TrianguloPascal.h
	g++ -c TrianguloPascal.cpp -o triangulo.o


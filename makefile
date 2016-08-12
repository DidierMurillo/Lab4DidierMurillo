Point: inicio.o TrianguloPascal.o
	g++ inicio.o TrianguloPascal.o   


inicio.o:	DidierMurilloLab4.cpp TrianguloPascal.h
	g++ -c DidierMurilloLab4.cpp -o inicio.o

Triangulo.o:	TrianguloPascal.cpp TrianguloPascal.h
	g++ -c TrianguloPascal.cpp -o Triangulo.o


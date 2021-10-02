
vector: vectorstructTax.o printmefirst.o
	g++ vectorstructTax.o printmefirst.o -o vector

vectorstructTax.o: vectorstructTax.cpp
	g++ -c vectorstructTax.cpp
	
printmefirst.o: printmefirst.cpp printmefirst.h
	g++ -c printmefirst.cpp
	
clean:
	rm *.o vector

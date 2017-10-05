all: test_csv1

csvl.o : csvl.c
	gcc -Wall -c csvl.c

test_csv1.o : test_csv1.c
	gcc -Wall -c tes_csv1.c

test_csv1 : csvl.o
	gcc -Wall -o testcsv1 csvl.o test_csv1.o


clean :
	rm -f *.o

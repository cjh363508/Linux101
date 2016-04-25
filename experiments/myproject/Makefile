main:main.o sum.o
	gcc main.o sum.o -o main.exe
main.o:main.c
	gcc -c main.c
sum.o:sum.c
	gcc -c sum.c

clean:
	rm main.exe *.o

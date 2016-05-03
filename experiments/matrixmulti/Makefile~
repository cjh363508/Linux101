result:main matrixMulti 
	g++ main.o matrixMulti.o -o result

main: main_clean main.c
	g++ -c -O0 main.c
main_optimize: main_clean main.c
	g++ -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi
	

matrixMulti: matrixMulti_clean matrixMulti.c
	g++ -c -O0 matrixMulti.c
matrixMulti_optimize: matrixMulti_clean matrixMulti.c
	g++ -c -O2 matrixMulti.c
matrixMulti_clean:
	if [ -e matrixMulti.o ] ; then rm matrixMulti.o ; fi
	

release: main_optimize matrixMulti_optimize
	g++ main.o matrixMulti.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o


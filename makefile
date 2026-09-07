calculator: calculator.o arithmetic.o helpers.o
	gcc calculator.o arithmetic.o helpers.o -o calculator

calculator.o: calculator.c
	gcc -c calculator.c

arithmetic.o: arithmetic.c
	gcc -c arithmetic.c

helpers.o: helpers.c
	gcc -c helpers.c
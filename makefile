calculator: calculator.o arithmetic.o
	gcc calculator.o arithmetic.o -o calculator

calculator.o: calculator.c
	gcc -c calculator.c

arithmetic.o: arithmetic.c
	gcc -c arithmetic.c
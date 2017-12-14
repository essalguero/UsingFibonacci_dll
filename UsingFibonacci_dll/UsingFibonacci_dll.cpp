// UsingFibonacci_dll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Fibonacci_dll.h"

using namespace std;

int main()
{

	cout << "Resultado Fibonacci(10): " << fibonacci(10) << endl << endl;

	cout << "Resultado Fibonacci_recursivo(10): " <<fibonacci_recursivo(10) << endl << endl;

	for (int i = 0; i <= 10; i++)
		cout << "Resultado fibonacci_DivideAndConquer(" << i <<"): " << fibonacci_DivideAndConquer(i) << endl << endl;

	// Maximo numero que se puede calcular sin overflow (Devuelve double)
	cout << "Resultado fibonacci_DivideAndConquer(46): " << fibonacci_DivideAndConquer(46) << endl << endl;


	return 0;

}


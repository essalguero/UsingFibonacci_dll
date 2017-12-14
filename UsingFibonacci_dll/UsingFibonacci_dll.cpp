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


    return 0;
}


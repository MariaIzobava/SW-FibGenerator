// FibGenerator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "GenIterator.h"

int main()
{

	GenIterator it;
	++it;
	++it;
	++it;
	std::cout << *it << std::endl;

	getchar();

}


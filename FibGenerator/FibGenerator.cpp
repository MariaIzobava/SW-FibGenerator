// FibGenerator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "GenIterator.h"
#include "FibIterator.h"


int main()
{

	/*GenIterator it;
	++it;
	++it;
	++it;
	std::cout << *it << std::endl;*/

	Generator gen1, gen2;
	FibIterator<Generator> it1(gen1);
	FibIterator<Generator> it2(gen2);

	for (int i = 0; i < 10; i++, ++it1)
		std::cout << *it1 << std::endl;

	std::cout << "Compare: " << *it1 << " == " << *it2 << " -- " << (it1 == it2) << std::endl;

	for (int i = 0; i < 10; i++, ++it2)
		std::cout << *it2 << std::endl;

	std::cout << "Compare: " << *it1 << " == " << *it2 << " -- " << (it1 == it2) << std::endl;

	getchar();

}


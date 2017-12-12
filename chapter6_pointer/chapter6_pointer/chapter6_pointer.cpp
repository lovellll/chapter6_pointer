// chapter6_pointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>


int main()
{
	std::cout << "How many names would you like to enter?\n";
	int numberOfName;
	std::cin >> numberOfName;
	std::cin.ignore(32767, '\n');
	std::string *ptr = new std::string[numberOfName];
	//get input
	for (int i = 0; i < numberOfName; ++i)
	{
		std::cout << "Enter name #" << i << ": ";
		std::getline(std::cin, *(ptr+i));
	}
	//sort names
	/*
	for (int end = numberOfName-1; end >=1; --end)
	{
		for (int current = 0; current < end; ++current)
		{
			if (*(ptr + current) > *(ptr + current + 1))
				std::swap(*(ptr + current), *(ptr + current + 1));
		}
	}
	*/

	std::sort(ptr, ptr + numberOfName);

	//output
	std::cout << "Here is your sorted list:\n";
	for (int i = 0; i < numberOfName; ++i)
		std::cout << *(ptr + i)<<"\n";


}


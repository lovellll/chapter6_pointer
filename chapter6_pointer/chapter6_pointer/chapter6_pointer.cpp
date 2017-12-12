// chapter6_pointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

bool searchName(std::string name,std::string (&array)[8])
{
	for (const auto &ref : array)
		if (name == ref)
			return true;
		else
			return false;

}

int main()
{
	std::string array[] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg",  "Holly" };
	std::cout << "please input one name \n";
	std::string name; 
	std::getline(std::cin, name);
	
	bool isFind = searchName(name, array);
	if (isFind)
		std::cout << "we find " << name << "\n";
	else
		std::cout << "we did not find " << name << "\n";

    return 0;
}


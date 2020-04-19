#include <iostream>
#include <string>
#include "GeneralList.hpp"

int main() 
{
	List<int> IntListA;
	IntListA.push_back(2);
	IntListA.push_front(4);
	IntListA.print();
	IntListA.print_back();

	std::cout << std::endl;

	List<int> IntListB(IntListA);
	IntListB.pop_front();
	IntListB.print();

	std::cout << std::endl;

	typedef List<std::string> StringList;

	StringList StringList;
	//test push.back function
	StringList.push_back("Good");
	StringList.push_back("Morning");
	StringList.push_back("!");
	StringList.print();
	std::cout << StringList.front() << " " << StringList.back() << std::endl;
	//test pop.back function
	StringList.pop_back();
	StringList.print();

	std::cout << std::endl;

	using FloatList = List<float>;

	FloatList FloatList;
	if(FloatList.empty()) {
		FloatList.push_front(12.9);
		FloatList.push_front(7.9);
		FloatList.push_front(6.8);
		FloatList.push_back(2.3);
	}
	FloatList.print();
	FloatList.print_back();

	FloatList FloatList2=FloatList;

	if(FloatList2==FloatList) {
		std::cout << "Float vectors are the same!" << std::endl;
	}

	FloatList2.push_front(0.9);

	if(FloatList2!=FloatList) {
		std::cout << "Float vectors are not the same!" << std::endl;
	}

	return 0;
}

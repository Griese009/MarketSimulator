#pragma once
#ifndef Person_H
#include <string>
#include <vector>
#include <iostream>

struct goods {
	std::string name;
	double value;

	goods(std::string name, double value);
};

class Person
{
	std::string firstname;
	std::string lastname;
	std::vector<goods> items{};
	double money = 0.0;

public:
	Person(std::string firstname, std::string lastname);
	Person(std::string firstname, std::string lastname, double initialMoney);
	std::string getName();
	double getMoney();
	bool addItem(goods);
	bool removeItem(int itemIndex);
	void printItems(bool printNewLine);
	double getGoodsValue();
};

#endif // !Person_H

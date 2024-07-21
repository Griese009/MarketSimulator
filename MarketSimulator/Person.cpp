#include "Person.h"


goods::goods(std::string name, double value) {
	this->name = name;
	if (value <= 0) {
		throw std::invalid_argument("a goods can not have a negative value");
	}
	this->value = value;
}


Person::Person(std::string firstname, std::string lastname) {
	this->firstname = firstname;
	this->lastname = lastname;
};

Person::Person(std::string firstname, std::string lastname, double initialMoney) {
	this->firstname = firstname;
	this->lastname = lastname;
	this->money = initialMoney;
}

bool Person::addItem(goods item) {
	this->items.push_back(item);
	return true;
};

bool Person::removeItem(int itemIndex) {
	if ((this->items.size() <= itemIndex) || (itemIndex < 0)) {
		return false;
	}
	this->items.erase(this->items.begin() + itemIndex);
	return true;
};

std::string Person::getName() {
	return this->firstname + " " + this->lastname;
};

double Person::getMoney() {
	return this->money;
}

void Person::printItems(bool printNewLine = true) {
	for (int i = 0; i < this->items.size(); i++) {
		std::cout << this->items[i].name;
		if (i < this->items.size() - 1) {
			std::cout << ", ";
		}
	}
	if (printNewLine) {
		std::cout << "\n";
	}
}

double Person::getGoodsValue() {
	double base = 0.0;
	for (int i = 0; i < this->items.size(); i++) {
		base += this->items[i].value;
	}
	return base;
};
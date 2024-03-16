#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Product
{
public:
	
	Product(const string& _name, double _price);
	virtual double GetPrice() const;
	virtual ~Product() {} 
protected:
	string name;
	double price;
};


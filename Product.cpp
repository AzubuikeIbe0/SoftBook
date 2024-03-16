#include "Product.h"


Product::Product(const string& _name, double _price) : name(_name), price(_price) {}


double Product::GetPrice() const
{
	return price;
}





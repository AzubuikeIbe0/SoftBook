#pragma once
#include "Product.h"


class Software : public Product
{
public:
    Software(const string& _name, double _price);

    double getPrice() const;
};


#include "Software.h"

Software::Software(const string& _name, double _price) : Product(_name, _price) {}


double Software::getPrice() const 
{
    return price * 1.21;
}



#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include "Product.h"
#include "Software.h"
#include "Book.h"

using namespace std;

int main()
{

    // Declare an array of 10 pointers to Product
    //array<Product*, 10> products{};
    Product* products[10];
 

    // Add 10 products to the array
    products[0] = new Software("Software 1", 23.2);
    products[1] = new Book("Book 1", 50.0);
    products[2] = new Software("Software 2", 80.0);
    products[3] = new Book("Book 2", 30.0);
    products[4] = new Software("Software 3", 120.0);
    products[5] = new Book("Book 3", 40.0);
    products[6] = new Software("Software 4", 90.0);
    products[7] = new Book("Book 4", 60.0);
    products[8] = new Software("Software 5", 110.0);
    products[9] = new Book("Book 5", 70.0);

    // Sort the array in ascending order of price
    sort(products, products + 10, [](const Product* a, const Product* b) {
        return a->GetPrice() < b->GetPrice();
       });

    // Print sorted products
    cout << "Sorted Products:" << endl;
    for (int i = 0; i < 10; ++i) {

        cout << products[i]->GetPrice() << endl;

    }

    // Clean up memory
    for (int i = 0; i < 10; ++i) {
        delete products[i];
    }


    return 0;
}



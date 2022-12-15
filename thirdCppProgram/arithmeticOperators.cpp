#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float product1 = 20.0;
    cout << "the price of product1 is: " << product1 << endl;
    float product2 = 30.3;
    cout << "the price of product2 is: " << product2 << endl;
    int total = product1 + product2;
    cout << "the total value is: " << total << endl;
    int increasedProductPrice = product1 *2;
    cout << "the price of product1 after increased is: " << increasedProductPrice << endl;
    int decreasedProductPrice = product2 - 10;
    cout << "the price of product2 after decreased is: " << decreasedProductPrice << endl;
    float productDivision = product1 / product2;
    cout << "the price of productes after division is: " << productDivision << endl;
    // float productRemainder = product1 % product2;
    // cout << "the remainder of product1 and product2 is: " << productRemainder << endl;
    float productFloorDivision = product1 // product2;
    cout << "the floor division of product1 and product2 is: " << productFloorDivision << endl;
    return 0;
}

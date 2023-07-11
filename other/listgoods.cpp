#include <iostream>
using namespace std;
struct goods
{
    int banana;
    int quentaty;
    float price;
};

int main()
{

    goods list;
    list.banana = 34;

    list.quentaty = 93;
    list.price = 23.3;
    cout << "\n list.of banana is " << list.banana;

    cout << "quentity is" << list.quentaty;
    cout << "price is" << list.price;

    return 0;
}
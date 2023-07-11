#include <iostream>
#include <math.h>
using namespace std;
int prime(int num);
int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    for (i = a; i <= b; i++)
    {

        if (prime(i) == 1)
        {

            cout << i << '\n';
        }
    }
    return 0;
}

int prime(int num)
{
    int i;

    for (i = 2; i <= sqrt(num); i++)
    {

        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
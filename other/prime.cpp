#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter anumber";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (i % n == 0)
        {
          cout<<"enter  number is not prime";
            exit(0);
        }
    }

    {

        cout << "enter number is  prime";
    }

    return 0;
}
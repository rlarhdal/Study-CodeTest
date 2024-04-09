#include <iostream>

using namespace std;

int main()
{
    int a;
    int arr[101];

    for(int i = 0; i < 10; i++)
    {
        cin >> a;
        arr[i] = a % 42;
    }
}
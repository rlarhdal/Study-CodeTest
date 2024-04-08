#include <iostream>
using namespace std;

int main()
{
    int N, X, a;
    cin >> N >> X;
    int arr[101];

    for(int i = 0; i < N; i++)
    {
        cin >> a;
        if(a < X)
            cout << a << " ";
    }
}
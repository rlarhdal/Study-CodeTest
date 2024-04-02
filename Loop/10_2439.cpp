#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int k = 1; k < N+1; k++)
    {
        for(int j = 0; j < N-k; j++)
        {
            cout << " ";
        }
        for(int i = 0; i < k; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
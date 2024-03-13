#include <iostream>
using namespace std;

main()
{
    int A, B;
    cin >> A;
    cin >> B;
    
    cout << A*(B%10) << "\n";
    cout << A*((B%100)/10) << "\n";
    cout << A*(B/100) << "\n";
    cout << A*B << "\n";

    return 0;
}
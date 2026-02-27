#include <iostream>
using namespace std;

int main()
{
    int N, ITEM, LOC = 0,K = 1;;
    int DATA[100];
    cout << "Enter number of elements: ";
    cin >> N;
    cout << "Enter elements:\n";
    for (int i = 1; i <= N; i++)
        cin >> DATA[i];
    cout << "Enter item to search: ";
    cin >> ITEM;

    K = 1;
    LOC = 0;

    while (LOC == 0 && K <= N)
    {
        if (ITEM == DATA[K])
            LOC = K;
        K = K + 1;
    }
    if (LOC == 0)
        cout << "ITEM is not in the array\n";
    else
        cout << "Location of ITEM: " << LOC << endl;
    return 0;
}

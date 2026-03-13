#include <iostream>
using namespace std;

int main()
{
    int DATA[100], N;
    int K, PTR, TEMP;
    cout << "Enter number of elements: ";
    cin >> N;
    cout << "Enter elements:" << endl;
    for (int i = 1; i <= N; i++)
    {
        cin >> DATA[i];
    }
    for (K = 1; K <= N - 1; K++)
    {
        PTR = 1;
        while (PTR <= N - K)
        {
            if (DATA[PTR] > DATA[PTR + 1])
            {
                TEMP = DATA[PTR];
                DATA[PTR] = DATA[PTR + 1];
                DATA[PTR + 1] = TEMP;
            }
            PTR = PTR + 1;
        }
    }
    cout << "Sorted array:" << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << DATA[i] << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int A[100], N, K, PTR, TEMP;

    cout << "Enter number of elements: ";
    cin >> N;
    cout << "Enter elements:" << endl;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    A[0] = -99999;
    for (K = 2; K <= N; K++)
    {
        TEMP = A[K];
        PTR = K - 1;

        while (TEMP < A[PTR])
        {
            A[PTR + 1] = A[PTR];
            PTR = PTR - 1;
        }
        A[PTR + 1] = TEMP;
    }
    cout << "Sorted array:" << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

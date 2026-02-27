#include <iostream>
using namespace std;

int main()
{
    int N,LB, UB, BEG, END, MID,ITEM,LOC = -1;
    int DATA[100];

    cout << "Enter number of elements: ";
    cin >> N;
    cout << "Enter sorted elements:\n";
    for (int i = 1; i <= N; i++)
        cin >> DATA[i];
    cout << "Enter item to search: ";
    cin >> ITEM;

    LB = 1;
    UB = N;
    BEG = LB;
    END = UB;

    while (BEG <= END)
    {
        MID = (BEG + END) / 2;
        if (DATA[MID] == ITEM)
        {
            LOC = MID;
            break;
        }
        else if (ITEM < DATA[MID])
            END = MID - 1;
        else
            BEG = MID + 1;
    }
    if (LOC == -1)
        cout << "ITEM not found\n";
    else
        cout << "ITEM found at loc: " << LOC << endl;
    return 0;
}

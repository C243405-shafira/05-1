#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n], f[n];

    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
        cin >> f[i];

    cout << "Selected Activities: ";
    int i = 0;
    cout << i << " ";
    for(int j = 1; j < n; j++)
    {
        if(s[j] >= f[i])
        {
            cout << j << " ";
            i = j;
        }
    }cout << endl;
}

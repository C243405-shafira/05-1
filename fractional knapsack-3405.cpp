#include <iostream>
#include <algorithm>
using namespace std;

struct Item
{
    int value;
    int weight;
};
bool cmp(Item a, Item b)
{
    return (double)a.value/a.weight > (double)b.value/b.weight;
}

int main()
{
    int n;
    cin >> n;
    Item a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i].value >> a[i].weight;
    int W;
    cin >> W;
    sort(a, a+n, cmp);
    double total = 0;

    for(int i = 0; i < n; i++)
    {
        if(W >= a[i].weight)
        {
            total += a[i].value;
            W -= a[i].weight;
        }
        else
        {
            total += a[i].value * ((double)W / a[i].weight);
            break;
        }
    }
    cout << total;
}

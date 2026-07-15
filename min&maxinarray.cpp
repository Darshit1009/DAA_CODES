#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> a = {10, 112, 9, 45, 70};
    int min = INT_MAX;
    int maax = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > maax)
        {
            maax = a[i];
        }
    }
    cout << min;
    cout << maax;
    // cout<<boolalpha;
    return 0;
}
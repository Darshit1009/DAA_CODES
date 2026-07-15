#include <iostream>
using namespace std;
#include <vector>
int linearSearch(vector<int> a, int target)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    cout << linearSearch(a, 4);
    return 0;
}
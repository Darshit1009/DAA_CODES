#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> ans = {1, 2, 3, 4, 5};
    int i = 0;
    int k = ans.size() - 1;
    // while (i < k)
    // {
    //     swap(ans[i], ans[k]);
    //     i++;
    //     k--;
    // }
    while (i < ans.size() / 2)
    {
        swap(ans[i], ans[ans.size() - 1 - i]);
        i++;
    }
    for (int i : ans)
    {
        cout << i;
    }
    return 0;
}

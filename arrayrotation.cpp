#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> ans = {1, 2, 3, 4, 5, 6};

    int k;
    cout << "enter the k for rotation:";
    cin >> k;
    for (int i = 1; i <= k; i++) // right rotation
    {
        int prev = ans[0];
        int temp = ans[ans.size() - 1];
        for (int i = 1; i < ans.size(); i++)
        {
            int first = ans[i];
            ans[i] = prev;
            prev = first;
        }
        ans[0] = temp;
    }
    int tempo = ans[0];
    for (int i = 0; i < size - 1; i++) // left rotation
    {
        ans[i] = ans[i + 1];
    }
    ans[ans.size() - 1] = tempo;

    for (int i : ans)
    {
        cout << i;
    }

    return 0;
}

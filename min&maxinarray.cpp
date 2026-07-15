#include <iostream>
using namespace std;
#include <vector>
pair<int, int> minmax(int a[], int size)
{
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    return {min, max};
}
int main()
{
    // vector<int> a = {10, 112, 9, 45, 70};
    int a[5]={2,1,3,4,8};
    pair<int,int> ans=minmax(a,5);
    
       cout<<ans.first<<" "<<ans.second<<" "<<"\n";
    
    // int min = INT_MAX;

    // int maax = INT_MIN;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (a[i] < min)
    //     {
    //         min = a[i];
    //     }
    //     if (a[i] > maax)
    //     {
    //         maax = a[i];
    //     }
    // }
    // cout << min;
    // cout << maax;
    // cout<<boolalpha;
    return 0;
}
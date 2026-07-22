#include <iostream>
using namespace std;
#include <vector>
// bool isSort(vector<int> question)
// {
//    for(int i=0;i)
// }
int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of array";
    cin >> size;
    int a[size] = {0};
    cout << "Enter the array Element one by one :";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < size - 1; j++)
    {
        bool isSwap = false;
        for (int k = 0; k < size - 1 - j; k++)
        {
            if (a[k] > a[k + 1])

            {
                isSwap = true;
                int temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
        if (!isSwap)
            break;
    }
    cout << endl
         << "array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
// 1 2 5 7 8
// write a program to implement rotation of array element of user choice user will provide direction and number of times needed

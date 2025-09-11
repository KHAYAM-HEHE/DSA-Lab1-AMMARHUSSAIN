#include <iostream>
#include <vector>
using namespace std;

vector<int> getIndices(const int arr[], int size, int key)
{
    vector<int> indices;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            indices.push_back(i);
        }
    }

    return indices;
}

void printIndices(const vector<int> &indices)
{
    if (indices.empty())
    {
        cout << "Not found";
    }
    else
    {
        for (int index : indices)
        {
            cout << index << " " ;
        }
    }
    cout << "\n";
}
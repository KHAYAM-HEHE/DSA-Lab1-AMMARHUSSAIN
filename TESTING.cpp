#include <iostream>
#include <vector>

#include "TASK_7.cpp"
#include "TASK_8.cpp"
using namespace std;


int main()
{
    
    int arr1[] = {1, 4, 4, 4, 5, 4};

    vector<int> ind1 = getIndices(arr1, 6, 4);
    vector<int> ind2 = getIndices(arr1, 6, 1);

    cout << "Test 1 \n";
    printIndices(ind1);

    cout << "Test 2 \n";
    printIndices(ind2);


    cout << "PART 2 \n";


    cout << "Test 1" << task8("abcdefjhi","abc") << endl;
    cout << "Test 2" << task8("abcdefjhi","ijk") << endl;
    cout << "Test 3" << task8("abcdefjhi","jkl") << endl;
    cout << "Test 4" << task8("abcdefjhi","") << endl;
    return 0;
}
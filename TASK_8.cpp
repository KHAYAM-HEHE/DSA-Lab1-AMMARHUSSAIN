#include <iostream>
using namespace std;

int task8(string text,string pattern) {
    int tl = text.length();
    int pl = pattern.length();

    bool found = false ;

    if (tl == 0 || pl == 0)
    {
        cout<<"ERROR";
        return 0;
    }
    for(int i = 0 ; i < tl ; i++)
    {
        int j ;
        for( j =0;j<pl;j++)
    {
         if (text[i+j] != pattern[j]) {
                break;
            }
        }
        if (j==pl) {
        cout<<"Pattern found at index "<<i<<endl;
            found = true;
        }
    
    }
    if(!found)
    {
        return -1;
    }
}
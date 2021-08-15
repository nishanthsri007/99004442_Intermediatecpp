#include <iostream>
#include <iterator>
#include <map>
using namespace std;
 
void printFrequency(string str)
{
    map<char, int> M;
 
    for (int i = 0; str[i]; i++)
    {
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }
        else
        {
            M[str[i]]++;
        }
    }
 
    for (auto& it : M) {
        cout << it.first << ' ' << it.second << '\n';
    }
}
 
// Driver Code
int main()
{
    string str = "geeksforgeeks";
 
    // Function call
    printFrequency(str);
    return 0;
}
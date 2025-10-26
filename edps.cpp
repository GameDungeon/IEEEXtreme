#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    int * a = new int[n];
    
    int zeroes;
    string paren = "";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            zeroes++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(zeroes > a[i])
        {
            cout << "No";
            return 1;
        }
        
    }
    
}
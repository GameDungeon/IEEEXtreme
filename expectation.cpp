#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main() {
    vector<bool> consida;
    vector<int> valuez;
    
    int n, k;
    
    cin >> n;
    cin >> k;
    
    for(int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        
        valuez.push_back(v);
        consida.push_back(0);
    }

    for (int i = 0; i < pow(2, n); i++)
    {
        int holder = 0; //make int max
        for (int j = 1; j < i; j*2)
        {
            holder = valuez[i] & j;
            
        }
        
    }
    
    
}
#include <cstdlib>
#include <string>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int t; 

    cin >> t;
    vector<vector<char>> seqs = {};
    vector<char> fort = {1, 1, 2, 0, 1, 2};
    string line;
    for (int i = 0; i < t; i++)
    {
        getline(cin, line);
        seqs.push_back({});
        for(int j = 0; j < line.length(); j++)
        {
            seqs[i].push_back(line.at(j));
        }
    }
    
    
    for (int i = 0; i < t; i++)
    {
        vector<int> output = {};
        int mark = 0;
        
        for (int j = 0; j < seqs[i].size()/6; j++)
        {
            int iter;
            for (int k = 0; k < fort.size(); k++)
            {
                bool gloop;
                
                while (gloop)
                {
                    if (seqs[i][iter] == fort[iter])
                    {
                        /* code */
                    }
                
                }
            }
            
            
        }
        
    }
    
}
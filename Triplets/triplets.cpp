#include <iostream>
#include <vector>

using namespace std;

int * process(int);

int main() {
    
    //input block
    int t;
    cin >> t;
    
    vector<int> n{};
    int input;

    for(int i = 0; i < t; i++)
    {
        cin >> input;
        n.push_back(input);
    }

    //process block
    int a, b, c;
    int * abc;
    for (int i = 0; i < t; i++)
    {
        abc = process(n[i]);
        if (abc[0] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abc[0] << " " << abc[1] << " " << abc[2] << endl;
        }
        
    }
    
}

int * process(int n)
{
    bool tru1;
    bool tru2;
    int abc[3];
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
                tru1 = (a+b+c == 2*n);
                tru2 = (a|b|c == n);
                if (tru1 && tru2)
                {
                    abc[0] = a;
                    abc[1] = b;
                    abc[2] = c;
                    return abc;
                }
                
            }
            
        }
        
    }
    abc[0] = -1;
    return abc;
}

/* previous solution
#include <iostream>
#include <vector>

using namespace std;

int * process(int);

int main() {
    
    //input block
    int t;
    cin >> t;
    
    vector<int> n{};
    int input;

    for(int i = 0; i < t; i++)
    {
        cin >> input;
        n.push_back(input);
    }

    //process block
    for (int i = 0; i < t; i++)
    {
    int a, b ,c;
    bool tru1;
    bool tru2, tru3;
    bool solved = false;
    int abc[3];
    for (a = 1; a < 2*n[i]; a++)
    {
        for (b = 1; b < 2*n[i]; b++)
        {
            for (c = 1; c < 2*n[i]; c++)
            {
                tru1 = ((a+b+c) == 2*n[i]);
                tru2 = ((a^b^c) == n[i]);
                tru3 = !((a==b)||(a==c)||(b==c));
                if (tru1 && tru2 && tru3)
                {
                    abc[0] = a;
                    abc[1] = b;
                    abc[2] = c;
                    solved = true;
                    break;
                }
                
            }
            if(solved) break;
        }
        if(solved) break;
    }
    
    
        if (solved == false)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abc[0] << " " << abc[1] << " " << abc[2] << endl;
        }
        
    }
    
}*/
#include <iostream>

using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    int ** vars = new int * [t];
    
    for(int i = 0; i < t; i++)
    {
        vars[i] = new int[7];
        for(int j = 0; j < 7; j++)
        {
            cin >> vars[i][j];
            
        }
    }
    
    for(int i = 0; i < t; i++)
    {
        int lamb;
        int x3, y3;
        if(vars[i][3] == vars[i][5])
        {
            cout << "POINT_AT_INFINITY\n";
        }
        else
        { //got these equations from wikipedia
            lamb = (vars[i][6] - vars[i][4])/(vars[i][5]-vars[i][3]);   
            x3 = lamb*lamb - vars[i][3] - vars[i][5];
            y3 = lamb*(vars[i][3] - x3) - vars[i][4];
        }
        cout << x3 << " " << y3 << endl;
    }
}



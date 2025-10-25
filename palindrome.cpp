#include <cstdlib>
#include <iostream>
#include <cstring>


using namespace std;

struct Noude {
    int value;
    bool dwn, crs;
    Noude * down;
    Noude * across;
};

int main() {
    
    //parsing
    int n, m;
    cin >> n;
    cin >> m;
    
    char ** puzz = new char * [n];
    int ** gluzz = new int  * [n];
    Noude ** nluzz = new Noude * [n];
    
    for(int i = 0; i < n; i++){
        puzz[i] = new char[m];
        gluzz[i] = new int[m];
        nluzz[i]  = new Noude[m];
        cin.getline(puzz[i], m);
        for(int j = 0; j < m; j++)
        {
            if(puzz[i][j] != '.')
            {
                gluzz[i][j] = (int)(puzz[i][j] - 48);
                nluzz[i][j].value = gluzz[i][j];
            }
            else
            {
                gluzz[i][j] = -1;
            }
        }
    }
    
    
    //calc ing (for those new to the stream) (calc is short for calculator) (just using slang)
    
    //linking them jawns
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
            if (gluzz[i][j] != -1)
            {
                int top = i;    //upper part of word
                int bott = i;   //bottom part of word
                                //total length = bottom - top
                if (i != 0)
                {
                    bool there = true;
                    while(top > 0 && there)
                    {
                        there = false;
                        top--;
                        if(gluzz[top][j] >= 0)
                        {
                            there = true;
                        }
                    }
                }

                if (i != n)
                {
                    bool there = true;
                    while(bott < n - 1  && there)
                    {
                        there = false;
                        bott++;
                        if(gluzz[bott][j] <= n)
                        {
                            there = true;
                        }
                    }
                }
                
                int tot = bott - top;
                
                //only connect if in top half. connect both to each other
                if((top + tot/2) > i)
                { //redo
                    nluzz[i][j].down = nluzz[bott - (i-top)] + j;
                    nluzz[bott - (i-top)][j].down = nluzz[i] + j;
                }
                
                
                int left = j;    //upper part of word
                int rite = j;   //bottom part of word
                                //total length = bottom - top
                if (j != 0)
                {
                    bool there = true;
                    while(left > 0 && there)
                    {
                        there = false;
                        left--;
                        if(gluzz[i][left] >= 0)
                        {
                            there = true;
                        }
                    }
                }

                if (j != n)
                {
                    bool there = true;
                    while(right < (n - 1)  && there)
                    {
                        there = false;
                        bott++;
                        if(gluzz[bott][j] <= n)
                        {
                            there = true;
                        }
                    }
                }
                
                int tot = bott - top;
                
                //only connect if in top half. connect both to each other
                if((top + tot/2) > i)
                { //redo
                    nluzz[i][j].down = nluzz[bott - (i-top)] + j;
                    nluzz[bott - (i-top)][j].down = nluzz[i] + j;
                }
                


            }
            
        }
        
    }
    


    
}
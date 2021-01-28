#include <bits/stdc++.h>

using namespace std;

int maxx = -1, ile = 0;


int main()
{
    ifstream in("ciagi.txt");
    int a;

    while (in >> a) 
    {
        vector <int> v(a);
        for(int i=0; i<a; i++){
            in >> v[i];
        }
        bool ok = true;
        for (int j = 2; j < a; j++)
        {
            if (v[j - 1] - v[j - 2] != v[j] - v[j - 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            ile++;
            maxx = max(maxx, v[1] - v[0]);

        }

    }
    cout << "Ciagow arytmetycznych: " << ile << "\nNajwieksza roznica: " << maxx;

   
    
    return 0;
}



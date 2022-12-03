#include <bits/stdc++.h>

using namespace std;
ifstream fin("data.in");
ofstream fout("data.txt");

vector<char> cuvinte;

int main()
{
    int T;
    fin>>T;
    for(int NRTESTS=1; NRTESTS<=T; NRTESTS++)
    {
        int n,nrschimbari=0;
        cuvinte.clear();
        fin>>n;
        for(int i=1; i<=n; i++)
        {
            char x;
            fin>>x;
            if(x=='O' || x=='X')
                cuvinte.push_back(x);
        }
        for(int i=1; i<cuvinte.size(); i++)
        {
            if(cuvinte[i]!=cuvinte[i-1])
                nrschimbari++;
        }
        fout<<"Case #"<<NRTESTS<<": "<<nrschimbari<<endl;
    }
    return 0;
}

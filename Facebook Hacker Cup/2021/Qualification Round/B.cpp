#include <bits/stdc++.h>

using namespace std;

ifstream fin("data.in");
ofstream fout("data.txt");
int c0[100], c1[100], r0[100], r1[100];
char m[100][100];
vector<int> coloanecu1,liniicu1;
int main()
{
    long long nr_tests;
    fin>>nr_tests;
    for(int T=1; T<=nr_tests; T++)
    {
        int nrxs=100;
        int nrpos=0;
        int n;
        char c;
        fin>>n;
        int NUMAR=n-1;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                fin>>c;
                m[i][j]=c;
                if(c=='X')
                {
                    r1[i]++;
                    c1[j]++;
                }
                if(c=='O')
                {
                    r0[i]++;
                    c0[j]++;
                }
            }

        for(int i=1; i<=n; i++)
        {
            if(c0[i]==0)
            {
                if(nrxs>n-c1[i])
                {
                    nrxs=n-c1[i];
                    nrpos=1;
                }
                else if(nrxs==n-c1[i])
                {
                    nrpos++;
                }
                //cout<<c1[i]<<" "<<n-1<<" "<<NUMAR<<" coloana"<<endl;
                if(c1[i]==NUMAR)
                {
                    coloanecu1.push_back(i);
                    //cout<<"BAGAT COLOANA"<<endl;
                }
            }
            if(r0[i]==0)
            {
                if(nrxs>n-r1[i])
                {
                    nrxs=n-r1[i];
                    nrpos=1;
                }
                else if(nrxs==n-r1[i])
                {
                    nrpos++;
                }
                //cout<<r1[i]<<" "<<n-1<<" "<<NUMAR<<" linie"<<endl;
                if(r1[i]==NUMAR)
                {
                    liniicu1.push_back(i);
                    //cout<<"BAGAT LINIE"<<endl;
                }
            }
        }
        for(int i=0; i<liniicu1.size(); i++)
            for(int j=0; j<coloanecu1.size(); j++)
                if(m[liniicu1[i]][coloanecu1[j]]=='.')
                    nrpos--;
        if(nrpos!=0) fout<<"Case #"<<T<<": "<<nrxs<<" "<<nrpos<<'\n';
        else fout<<"Case #"<<T<<": "<<"Impossible"<<'\n';
        memset(c0,0,sizeof(c0));
        memset(c1,0,sizeof(c1));
        memset(r0,0,sizeof(r0));
        memset(r1,0,sizeof(r1));
        memset(m,0,sizeof(m));
        liniicu1.clear();
        coloanecu1.clear();
    }
    return 0;
}

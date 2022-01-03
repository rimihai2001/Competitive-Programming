#include <bits/stdc++.h>

using namespace std;
ifstream fin("data.in");
ofstream fout("data.txt");
int main()
{
    int nrtests;
    fin>>nrtests;
    for(int T=1; T<=nrtests; T++)
    {
        unordered_map<char,int> alfabet;
        string s;
        int nrsec=1000000;
        fin>>s;
        int nrvoc=0, nrcos=0;
        for(int i=0; i<s.size(); i++)
        {
            alfabet[s[i]]++;
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                nrvoc++;
            else nrcos++;
        }
        for(auto i:alfabet)
            if(i.first=='A'||i.first=='E'||i.first=='I'||i.first=='O'||i.first=='U')
                nrsec=min(nrsec,(nrvoc-i.second)*2+nrcos);
            else nrsec=min(nrsec,(nrcos-i.second)*2+nrvoc);
        if(nrvoc==0) nrsec=min(nrsec, nrcos);
        if(nrcos==0) nrsec=min(nrsec, nrvoc);
        if(T!=nrtests) fout<<"Case #"<<T<<": "<<nrsec<<endl;
        else fout<<"Case #"<<T<<": "<<nrsec;
    }
    return 0;
}


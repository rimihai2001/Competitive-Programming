#include <bits/stdc++.h>

using namespace std;

ifstream fin("data.in");
ofstream fout("data.txt");

int m[51][51];

int main()
{
    int T;
    fin>>T;
    for(int NRTESTS=1; NRTESTS<=T; NRTESTS++)
    {
        int n,m,a,b;
        fin>>n>>m>>a>>b;
        if(a<n+m-1 || b<n+m-1)
            fout<<"Case #"<<NRTESTS<<": Impossible"<<endl;
        else
        {
            fout<<"Case #"<<NRTESTS<<": Possible"<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    if(i==1) fout<<1<<" ";
                    else if(j==1 and i<n) fout<<1<<" ";
                    else if(j==m and i<n) fout<<1<<" ";
                    else if(j==1 and i==n) fout<<b-(n+m-2)<<" ";
                    else if(j==m and i==n) fout<<a-(n+m-2)<<" ";
                    else fout<<max(a,b)<<" ";
                }
                fout<<endl;
            }
        }
    }
    return 0;
}

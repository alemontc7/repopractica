#include <iostream>
#include <vector>
#include <map>
#include <set>
#define f first
#define s second
#define forin(i, n) for(int i = 0; i < n; i++)
#define int long long

//pacha 2880 fan club
#define tm 50000 

unsigned long hashito(string str)
{
    unsigned long i = 0;
    for (int j = 0; str[j]; j++)
        i += str[j];
    return i % tm;
}

using namespace std;
signed main()
{
    int a; string ss;
    map<int, pair<int, string>> m;
    cin>>a;
    while(a--)
    {
        cin>>ss;
        m[hashito(ss)].f++;
        m[hashito(ss)].s = ss; 
    }


}
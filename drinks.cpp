#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }

    float sum = 0;

    for(int i =0; i<n; i++)
    {
        sum += v[i];
    }
    
    float ans = sum/n;
    cout<<ans<<endl;

    return 0;
}
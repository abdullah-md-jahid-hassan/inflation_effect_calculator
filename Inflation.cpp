#include <bits/stdc++.h>
using namespace std;
int main ()
{
    s:
    int y;
    double tk, in;
    cout<<"Enter The Amount: ";
    cin>>tk;
    cout<<"Enter The Inflation: ";
    cin>>in;
    cout<<"Enter The year: ";
    cin>>y;
    for (int i=1; i<=y; i++)
    {
        tk-=(tk*in/100);
        cout<<"\nYear "<<i<<": Reduced Value = "<<tk;
    }
    cout<<"\n\nFinal Reduced Value: "<<tk<<"\n\n\n\n\n";
    goto s;
}

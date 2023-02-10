#include <iostream>
#include <chrono>

using namespace std;

int c;

int Rbinsearch(int a[], int l, int r, int x)
{
    while(l<=r)
    {
        if()
    }
}

int main()
{
    int a[50], n, x;
    c=0;
    cout<<"Enter no. of elem: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" elem: ";
        cin>>a[i];
    }
    cout<<"Enter elem to be searched: ";
    cin>>x;
    bool result = Ibinsearch(a, 0, n-1, x);
    (result)? cout<<"Element is present" : cout<<"Element is not present";
    cout<<endl;
    cout<<c;
    return 0;
}

#include <iostream>
#include <chrono>

using namespace std;

int c;

//Iterative Binary Search
bool Ibinsearch(int a[], int low, int high, int x)
{
    while(low<=high)
    {
        c++;
        int mid=(low+high)/2;
        c++;
        if(x==a[mid])
        {
            c++;
            return true;
        }
        if(x>a[mid])
        {
            c++;
            low=mid+1;
        }
        else
        {
            c++;
            high=mid-1;
        }
    }
    c++;
    c++;
    return false;
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


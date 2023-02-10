#include <iostream>
using namespace std;

int step_count;

int lin_search(int a[], int n, int x)
{
    int i;
    step_count++;
    for(i=0;i<n;i++)
    {
        step_count++;
        step_count++;
        if(a[i] == x)
        {
            step_count++;
            return i;
        }
    }
    step_count++;
    step_count++;
    return -1;
}

int main()
{
    int a[5], n, x;
    step_count=0;
    cout<<"Enter no. of elem: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" elem: ";
        cin>>a[i];
    }
    cout<<"Enter elem to be searched: ";
    cin>>x;
    int result = lin_search(a, n, x);
    (result==-1)? cout<<"Element is not present" : cout<<"Element present at index "<<result;
    cout<<endl;
    cout<<step_count;
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the frame" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the input frame " << endl;
    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
    }

    int parity;
    cout << "Enter 0-odd and 1-even for parity check" << endl;
    cin >> parity;

    int sum = 0;
    if(parity == 1)
    {
    for(int i=0;i<n-1;i++)
    {
        if(a[i] == 1)
        sum++;
    }
    if(sum % 2 == 0)
    a[n-1] = 0;
    else
    a[n-1] = 1;
    }
    if(parity == 0)
    {
    for(int i=0;i<n-1;i++)
    {
        if(a[i] == 1)
        sum++;
    }
    if(sum % 2 == 0)
    a[n-1] = 1;
    else
    a[n-1] = 0;
    }

    cout << "Output frame is " << endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
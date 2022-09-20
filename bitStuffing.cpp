#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the frame" << endl;
    cin >> n;
    int a[n];
    cout << "Input the frame" << endl;
    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
        if(!(a[i] == 0 || a[i] == 1))
        {
            cout << "Invalid Input" << endl;
            return 0;
        }
    }

int stuff;
    cout << "Enter the bit you want to stuff" << endl;
    cin >> stuff;
    if(!(stuff == 1 || stuff == 0))
    {
            cout << "Invalid Input" << endl;
            return 0;
    }
int position;
cout << "Enter the position " << endl;
cin >> position;

for(int i=n;i>position-1;i--)
{
      a[i] = a[i-1];
}
a[position-1] = stuff;

cout << "Output frame is:- ";
for(int i=0;i<n;i++)
cout << a[i] << " ";


    return 0;
}
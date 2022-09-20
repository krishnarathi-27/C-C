#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array " << endl;
    cin >> n;
    int A[n],max,min,i;
    cout << "Enter the elements in the array " << endl;
    for(i=0;i<n;i++)
    cin >> A[i];
    max=A[0];
    min=A[0];
    for(i=1;i<n;i++)
    {
        if(min>A[i])
        min=A[i];
        else if(max<A[i])
        max=A[i];

    }
    cout << "The minimum and maximum of the array is " << min << " " << max << endl;
    return 0;
}
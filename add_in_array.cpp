#include<iostream>

using namespace std;

int main()
{
    int array[20],i,x,position,n ;

    cout << "Enter te number of elements in the array " << endl;
    cin >> n;

    cout << "Enter the elements : " << endl;
    for(i=0;i<n;i++)
    {
        cin >> array[i];
    }

cout << " The elements are : " << endl;
for(i=0;i<n;i++)
{
    cout << array[i] << endl;
}

cout << "Enter the element you want to add and at which position " << endl;
cin >> x >> position;
 n++;

for(i=n;i>=position;i--)
{
    array[i]=array[i-1];
}

array[position]=x;


for(i=0;i<n;i++)
{
    cout << array[i] << endl;
}
return 0;
}

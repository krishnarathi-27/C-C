#include <bits/stdc++.h>
#include<iostream>

using namespace std;
/*
void sorted(int A[], int n)
{
 int hash[n]={0};
 for(int i=0;i<n;i++)
  hash[A[i]]++;
  for(int i=0;i<n;i++)
  {
      if(hash[i]>1)
      {     cout << hash[i];
          //cout << "The number which is duplicated in array is : " << i << " and number of times " <<  hash[i] ;
          break;
      }
  }
}*/

void unsorted(int A[],int n)
{
    int H[n]={0};
    for(int i=0;i<n;i++)
    H[A[i]]++;
    for()
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array " << endl;
    cin >> n;
    int A[n],i;
    for(i=0;i<n;i++)
    cin >> A[i];
  
    //sorted(A,n);
    unsorted(A,n);
    return 0;
}
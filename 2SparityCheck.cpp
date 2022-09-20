#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the frame" << endl;
    cin >> n;

    int a[n][n];
    cout << "Enter the input frame" << endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)

        cin >> a[i][j];
    }

    int parity;
    cout << "Enter 0-odd and 1-even for parity check" << endl;
    cin >> parity;

    for(int i=0;i<n-1;i++)
    {
        int sum = 0;
       for(int j=0;j<n-1;j++)
       {
           if(a[i][j] == 1)
           
           sum++;
       }
       if(parity == 1)
       {
       if(sum%2 == 0)
       a[i][n-1] = 0;
       else
       a[i][n-1] = 1;
       }
       if(parity == 0)
       {
        if(sum%2 == 0)
       a[i][n-1] = 1;
       else
       a[i][n-1] = 0;
       }
    }

   for(int i=0;i<n-1;i++)
    {
        int sum = 0;
       for(int j=0;j<n-1;j++)
       {
           if(a[j][i] == 1)
           
           sum++;
       }
       if(parity == 1)
       {
       if(sum%2 == 0)
       a[n-1][i] = 0;
       else
       a[n-1][i] = 1;
       }
       if(parity == 0)
       {
        if(sum%2 == 0)
       a[n-1][i] = 1;
       else
       a[n-1][i] = 0;
       }
    }
int count=0,count1=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i][n-1] == 1)
        count ++;
    }
     for(int i=0;i<n-1;i++)
    {
        if(a[n-1][i] == 1)
        count1 ++;
    }

    if((count%2 == 0 && count1%2 == 0) || (count%2 == 1 && count1%2 == 1))
    {
        if(count%2 == 0)
        {
            if(parity==1)
            a[n-1][n-1] = 0;
            else
            a[n-1][n-1] = 1;
        }
        if(count%2 == 1)
        {
            if(parity==0)
            a[n-1][n-1] = 1;
            else
            a[n-1][n-1] = 0;
        }
    }
    cout << "Output frame is " << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//To generate the fibonacci series of a given number
/*
#include<iostream>
using namespace std;

int main(){
 int num1=0,num2=1,nextterm=0,n,i;
 cout << "Enter a  number " << endl;
 cin >> n;
 cout << num1 <<" "<< num2 <<" ";

 for(i=3;i<=n;i++)
 {
     nextterm=num1+num2;
     cout << nextterm << " " ;
     num1=num2;
     num2=nextterm;


 }
return 0;
}

*/

// Calculate the fibonacci series using recursions 

#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1 || n==0)
    return n;

    return fib(n-1) + fib(n-2);
}

int main(){

int n;

cout << "Enter the numbers you want to calculate the fibonacci series " << endl;

cin >> n;

int result = fib(n);

cout << "The fibonacci series is " << result << endl;
return 0;
}
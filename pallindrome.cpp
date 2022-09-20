//The number is pallindrome or not.
#include<iostream>
using namespace std;

int main(){
int n,num,rev=0,remainder;
cout << "Enter a number:" << endl;
cin >> num;
n=num;
while(n!=0){
    remainder=n%10;
    rev=rev*10+remainder;
    n=n/10;
} 
 cout << "Reversednumber is :"<< rev << endl;
 if(rev==num)
 cout << "The number is pallindrome " << endl;
 else
 cout << "The number is not a pallindrome " << endl;

return 0;
}
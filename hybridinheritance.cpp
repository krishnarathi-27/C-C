#include<iostream>

using namespace std;

class Customer
{
    public:

    char name[20];
    
    void inputname();
    void displayname();


};

class b_name1 : virtual public Customer
{
    public:
    
    char b_name[15];
    
    void inputbname1();
    void displaybname1();
};

class b_name2 : public virtual Customer

{
    
    public:
    
    char b_name2[15];
    
    void inputbname2();
    void displayname2();

};

class account : public b_name1, public b_name2
{
    public:
    
    char actype[15];
    
    void input();
    void display();

};

void Customer :: inputname()
{
    cout << "Enter the name of the customer " << endl;
    cin >> name;

}

void Customer :: displayname()
{
    cout << "The customer name is  : " << name << endl ;

}

void b_name1 :: inputbname1()
{
    Customer :: inputname();

    cout << "Enter the name of bank ypu have account in " << endl;
    cin >> b_name;

}

void b_name1 :: displaybname1()
{
    Customer :: displayname();
    
    cout << "The bank name is " << b_name << endl;

}

void b_name2 :: inputbname2()
{
 

    cout << "Enter the another bank name " << endl;
    cin >> b_name2;

}

void b_name2 :: displayname2()
{



    cout << "The other bank name is  " << b_name2 << endl;
}

void account :: input()
{
   inputbname1();
   inputbname2();
   cout << "Enter the type of account you have " << endl;
   cin >> actype;
}

void account :: display()
{
    displaybname1();
    displayname2();
    
    cout << "The type of account is " << actype << endl;

}

int main()
{
    account a;

    cout << "Enter the details " << endl;
    a.input();

    cout << "The details you entered are as follows " << endl;
    a.display();

    return 0;
    
}
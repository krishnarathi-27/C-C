#include<iostream>

using namespace std;

class Student
{
    int roll_no;
    char name[15];

    public:
    void inputname();
    void displayname();
};

class Arts: public Student
{
    char arts[10],arts1[10];

    public:
     void inputarts();
     void displayarts();


};

class Science : public Student
{
   char sc[10],sc1[10];

   public:
   void inputscience();
   void displayscience();
};

class Commerce : public Student
{
   char com[10],com1[10];

   public:
   void inputcom();
   void displaycom();

};

void Student :: inputname()
{
    cout << "Enter the name of Student " << endl;
    cin >> name;
    cout << "Enter the roll no of student " << endl;
    cin >> roll_no;
}

void Student ::displayname()
{
    cout << "Name of student is " << name <<endl;
    cout << "Roll no of student is " << roll_no << endl;
}

void Arts :: inputarts()
{
    Student :: inputname();
    cout << "Name of first subject in arts " << endl;
    cin >> arts;
    cout << "Name of second subject in arts " << endl;
    cin >> arts1;
}
void Arts :: displayarts()
{
    Student :: displayname();
    cout << "Name of first subject in arts is  " <<  arts << endl ;
    cout << "Name of second subject in arts is  " << arts1 <<  endl;
    
}

void Science :: inputscience()
{
    Student :: inputname();
    cout << "Name of first subject in science " << endl;
    cin >> sc;
    cout << "Name of second subject in science " << endl;
    cin >> sc1;

}

void Science ::displayscience()
{
    Student ::displayname();
    cout << "Name of first subject in science is  " <<  sc << endl ;
    cout << "Name of second subject in science is  " << sc1 <<  endl;

}

void Commerce :: inputcom()
{
    Student :: inputname();
    cout << "Name of first subject in commerce " << endl;
    cin >> com;
    cout << "Name of second subject in commerce " << endl;
    cin >> com1;

}

void Commerce ::displaycom()
{
    Student ::displayname();
    cout << "Name of first subject in commerce is  " <<  com << endl ;
    cout << "Name of second subject in commerce is  " << com1 <<  endl;
}


int main()
{

    Arts a;
    cout << "Enter data for arts students : " << endl;
    a.inputarts();
    a.displayarts();

    Science s;
    cout << "Enter data for science students : " << endl;
    s.inputscience();
    s.displayscience();

    Commerce c;
    cout << "Enter data for commerce for commerce students : " << endl;
    c.inputcom();
    c.displaycom();
    
    return 0;
}

#include<iostream>
#include<string> 
using namespace std;
int main()
{      
cout<<"the number   of     
times"<<endl; 
int n;
int a, b,kilo;       
string name; 
string print; 
cin>>n; 
for(int i=1;i<=n;i++)
{
cout<<"1 .give  the  example"<<i<<endl;  
cin>>print; 
cout<<print<<endl; n
}
cout<<"2.give the value  of a,b"s<<endl ;
cin>>a>>b;
cout<<"the  sum of a  and b: "<<a+b<<endl;
cout<<"3. give the name of person"<<endl;
cin>>name;
cout<<name<<endl;
cout<<"5.give the kilometers"<<endl;
cin>>kilo;
int meter=kilo*1000;
cout<<"meters"<<meter<<endl;
int celcius;
cout<<"Give the celcius = "<<endl;
cin>>celcius;
float faren=(celcius*(9/5))+32;
cout<<"fahrenhit = "<<faren<<endl;

} 
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "The  Largest number is: " << a << endl;
    } else if (b > a) {
        cout << "The  Least  number  is: " << b << endl;
    } else {
        cout << "Both  numbers   are equal." << endl;
    }

    return 0;
}













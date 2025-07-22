#include<iostream>
using namespace std;

class car{
    public:
    string name;
    string model;
    string color;
    float price;
};

int main(){
car c1;
car c2;
cout<<"The name of the first car u drove plus the model, the color and the price of it.\n";
    cout<<"Name: ";
    cin>>c1.name;
    cout<<endl;
    cout<<"Model: ";
    cin>>c1.model;
    cout<<endl;
    cout<<"Color: ";
    cin>>c1.color;
    cout <<endl;
    cout<<"Price: ";
    cin>>c1.price;
    cout<<"\n\n";
    cout <<"So, the car u drove is "<<c1.name<<" its model "<<c1.model<<" its color "<<c1.color<<" it has a price of "<<c1.price<<"in birr.";
    
    cout<<"The name of the second car u drove plus the model, the color and the price of it.\n";
    cout<<"Name: ";
    cin>>c2.name;
    cout<<endl;
    cout<<"Model: ";
    cin>>c2.model;
    cout<<endl;
    cout<<"Color: ";
    cin>>c2.color;
    cout <<endl;
    cout<<"Price: ";
    cin>>c2.price;
    cout<<"\n\n";
    cout <<"So, the car u drove is "<<c2.name<<" its model "<<c2.model<<" its color "<<c2.color<<" it has a price of "<<c2.price<<"in birr.";
    return 0;}

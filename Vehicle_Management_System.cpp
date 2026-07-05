/*BEGINNER LEVEL
using Inheritance concept we make a 
vehical mangement system which improve us inheritance concept in real wortld senerio
Problem Staement :Create a base class vehicle and derive threee classes:1.CAR,2.BIKE,3.TRUK
Each vehicle should have:
BRAND
MODEL
START THE VEHICLE
STOP THE VEHICLE
DISPLAY VECHICAL DETAILS*/


#include<iostream>
using namespace std;

class Vehicle{
protected:
    string brand;
    string model;

    public:
    Vehicle(string b,string m){
        brand=b;
        model=m;

    }
    void start(){
        cout<<brand<<" "<<model<<" is starting."<<endl;
    }
    void stop(){
        cout<<brand<<" "<<model<<" is stoping."<<endl;
    }
    void displayDetails(){
        cout<<"brand"<<" "<<brand<<endl;
        cout<<"model"<<" "<<model<<endl;

    }
};

//child class1
class car:public Vehicle{
    public:
    car(string b,string m):Vehicle(b,m){}
    void fueltype(){
        cout<<"Fuel Type: Petrol"<<endl;
    }
} ;
//class2
class bike:public Vehicle{
    public:
    bike(string b,string m):Vehicle(b,m){}

    void helmetrequired(){
        cout<<"Helmet Required: Yes"<<endl;
    }
};
//class3
class truck:public Vehicle{
    public:
    truck(string b,string m):Vehicle(b,m){}

    void loadcapacity(){
        cout<<"load capacity:20 tons"<<endl;
    }
};

int main(){
    car c("Toyota","Fortuner");

    cout<<".........CAR..........."<<endl;

    c.displayDetails();
    c.start();
    c.fueltype();
    c.stop();
    cout<<endl;


    bike b("honda","shine");
    cout<<".........BIKE..........."<<endl;

    b.displayDetails();
    b.start();
    b.helmetrequired();
    b.stop();
    cout<<endl;


    truck t("Tata","Signa");
    cout<<".........TRUCK..........."<<endl;

    t.displayDetails();
    t.start();
    t.loadcapacity();
    t.stop();
    return 0;


}
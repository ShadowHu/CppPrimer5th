#include<iostream>
using namespace std;

class Person{
    string name;
    string address;

    const string getName(){ return name;  }
    const string getAddress(){ return address; }
};

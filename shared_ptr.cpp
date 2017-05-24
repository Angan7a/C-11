#include<iostream>
#include<memory>
using namespace std;


class Dog {
    string name;
    public:
    Dog(string name) : name(name) { cout << "Utworzylem psa " << name << endl; }
    void bark() { cout << "Szczekam" << endl; }
    ~Dog() { cout << "Zniszczylem psa " << name << endl; }
};

int main()
{
    shared_ptr<Dog> p = make_shared<Dog>("Szarik");    
    shared_ptr<Dog> p1 = make_shared<Dog>("Azor");    
    
    shared_ptr<Dog> p2 = p;    
    cout << p.use_count() << endl;    
    p->bark();
    p1->bark();
    return 0; 
}


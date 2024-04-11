#include<iostream>
using namespace std;


class Human{
     public:
     int weight;
     int height;
     int age;
     public:
     int getAge(){
        return this->age;

     }
     int setWeight(int w){
        this->weight=w;
     }

};

class Male: protected Human{
    public:
    string color;  // we can  access parentclass in this case as it is a protected access modifier

    void sleep(){
        cout<<"Male sleeping"<< endl;
    }
};
int main(){
    Male m1;
    //cout<<m1.height<<endl; // //this is not possible
   // cout<<object1.age<<endl;
   // cout<<object1.weight<<endl;
   // cout<<object1.height<<endl;
   // cout<<object1.color<<endl;
    //object1.sleep();
   // object1.setWeight(84);
    //cout<< object1.weight<< endl;

    




    
}
#include<iostream>
using namespace std;


class Human{
     protected:
    
     int height;
     public:
     int weight;
     int age;
     public:
     int getAge(){
        return this->age;

     }
     int setWeight(int w){
        this->weight=w;
     }

};

class Male: public Human{
    public:
    string color;

    void sleep(){
     cout<<"Male sleeping"<< endl;
    }
    int getHeight(){
        return this->height;

    }
    int setheight(int h){
        height =h;
    }
};
int main(){
    Male m1;
    m1.setheight(6);
    cout<< m1.getHeight()<< endl;

    //male object1;
    //cout<<object1.age<<endl;
    //cout<<object1.weight<<endl;
    //cout<<object1.height<<endl;
    //cout<<object1.color<<endl;
    // object1.sleep();
    //object1.setWeight(84);
    //cout<< object1.weight<< endl;
//
    




    
}
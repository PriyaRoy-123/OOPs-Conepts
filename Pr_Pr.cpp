#include<iostream>
using namespace std;


class Human{
     protected:
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
    string color;

    void sleep(){
        cout<<"Male sleeping"<< endl;
    }
    int getweight(){
        return this->weight;
        
    }
    int setweight(int w){
        weight=w;
    }
};
int main(){
    Male m1;
    m1.setweight(50);

    cout<<m1.getweight()<<endl;
    //cout<<m1.height>> endl;////we can't access this here
   // Male object1;
   // cout<<object1.age<<endl;
   // cout<<object1.weight<<endl;
   // cout<<object1.height<<endl;
   // cout<<object1.color<<endl;
   // object1.sleep();
   // object1.setWeight(84);
   // cout<< object1.weight<< endl;

    

return 0;


    
}
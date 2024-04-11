#include<iostream>
using namespace std;


class Human{
     private:
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

class Male: private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<< endl;
    }
    int  getHeight(){
       // return this->height;//// it shows  error
    }
     int setheight(int h){
       // height =h;//// it shows error

    }
};
int main(){
    Male m1;
     m1.setheight(5);
    cout<< m1.getHeight()<< endl;
    //cout<<m1.height>>endl; // can't access this outside the class
    //cout<<object1.age<<endl;
    //cout<<object1.weight<<endl;
    //cout<<object1.height<<endl;
//   // cout<<object1.color<<endl;
    //object1.sleep();
    //object1.setWeight(84);
    //cout<< object1.weight<< endl;
    






    
}
#include<iostream>
using namespace std;


class Hero {
    // properties
    private :
    int  health;
    public:
    char level;
    void print(){
        cout<< level<< endl;

    }
    

    
    

    int  getHealth(){
        return health;


    }
    int  getLevel(){
         return level;

    }
    void setHealth( int h){
    
            health=h;
        }
        

    

    void setlevel(char ch){
        level=ch;

    }


};


int main(){
    // creation of object

    Hero ramesh;
    //static allocation

    Hero a;
    a.setHealth(80);
    a.setlevel('B');
    cout<<"level is "<< a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;
    //Dynamic allocation
    Hero * b=new Hero;
    b->setlevel('A');
    b->setHealth(70);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;
    cout<<"Size of Ramesh is "<< sizeof(ramesh)<<endl;
    //cout<<" Ramesh health is:"<< ramesh.getHealth()<<endl;
    ramesh.setHealth(70);

    //ramesh.health=70;
    ramesh.level='A';

    cout<<"health is:"<< ramesh.getHealth()<<endl;
    cout<<"level is:"<<ramesh.level<<endl;
    return 0;
}
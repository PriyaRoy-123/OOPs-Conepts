#include<iostream>
#include<string.h>
using namespace std;

class Hero {
    // properties
    private :
    int  health;
 public:
 char *name;
 char level;
 static  int timeToComplete;
 //simple constructor
 Hero(){
    cout<<"Simple constructor called"<< endl;
    name=new char[100];
}
//paramerterised Constructor
Hero(int health){
    this->health=health;
}
Hero(int health,char level){
    this->level=level;
    this->health=health;
}
// Copy Constructor
Hero(Hero&  temp){
    char*ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
cout<<"Copy Constructor called"<<endl;
this->health=temp.health;
this->level=temp.level;

}
void print(){
    cout<<endl;
    cout<<"[Name:"<< this->name<<" ,";
    cout<<"health "<<this->health <<" ,";
    cout<<"level"<<this->level<<"]";
    cout<<endl;
}
int getHealth(){
    return health;

}
char getlevel(){
    return level;
}
void setHealth(int h){
    health =h;
}
void setLevel(char ch){
    level=ch;
}
void setname(char name[]){
     strcpy(this->name,name);

}
// Destructor
~Hero(){
    cout<< "Destructor bhai called"<< endl;
}
};
int Hero:: timeToComplete =5;
int main(){
    cout<<Hero::timeToComplete<< endl;//In static datatype,it it not required to define a variable in main function
    Hero a;// we try to chck whether it is running or not when we define a vaiabe in main function
    cout<< a.timeToComplete<<endl; //Not recommended


    Hero b;
    b.timeToComplete=10;
    cout<< b.timeToComplete<< endl; //Not recommanded
    cout<< a.timeToComplete<<endl; //Not recommended
    //static
    //Hero a;

    //Dynamic
   // Hero *b =new Hero();
    //manually destructor call
   // delete b;
    //return 0;
}
   // Hero hero1;
   // hero1.setHealth(12);
   // hero1.setLevel('D');
    //char name[7]="Babbar";
   // hero1.setname(name);
    //hero1.print();
   // //use default copy constructor
   // Hero hero2(hero1);
   // hero2.print();
    //hero hero2=hero1;

   // hero1.name[0]='G';
   // hero1.print();
//

   // hero2.print();



    
//}

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
};
int main(){
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]="Babbar";
    hero1.setname(name);
    hero1.print();
    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();
    //hero hero2=hero1;

    hero1.name[0]='G';
    hero1.print();


    hero2.print();
    hero1=hero2;
    hero1.print();

    hero2.print();



    
}

#include<iostream>
using namespace std;
class Hero {
    // properties
    private :
    int  health;
 public:
 char level;
 //simple constructor
 Hero(){
    cout<<"Simple constructor called"<< endl;
}
//paramerterised Constructor
Hero(int health){
    this->health=health;
}
Hero(int health,char level){
    this->level=level;
    this->health=health;
}
//Copy Constructor
Hero(Hero&  temp){
    cout<<"Copy Constructor called"<<endl;
    this->health=temp.health;
    this->level=temp.level;

}
void print(){
    cout<<"health "<<this->health <<endl;
    cout<<"level"<<this->level<<endl;
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
};
int main(){
    Hero S(70,  'C');
    S.print();
    //copy Constructor
    Hero R(S);
    R.print();
}

#include <iostream>
using namespace std;

class Enemy {
protected:
    int attackPower;
public:
    virtual void attack(){}
};

class Ninja: public Enemy
{
public:
    void attack(){
        cout<<"I am ninja -"<<attackPower<<endl;
    }
};

class Monster: public Enemy
{
public:
    void attack(){
        cout<<"I am Monster -"<<attackPower<<endl;
    }
};


int main (){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
    // enemy1.attack();
    // enemy2.attack();
}
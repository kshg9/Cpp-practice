#include <iostream>
using namespace std;

class Enemy {
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower=a;
    }
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

    enemy1->setAttackPower(4);
    enemy2->setAttackPower(26);
    // enemy1.attack();
    // enemy2.attack();

    n.attack();
    m.attack();
}
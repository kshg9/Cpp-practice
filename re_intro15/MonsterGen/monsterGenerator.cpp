#include "Random.h"
#include <string>
#include <string_view>
#include <iostream>

class Monster{
    public:
    enum Type {
        Dragon,
        Goblin,
        Orge,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        max_monster_type
    };
    Monster(Type type, std::string_view name, std::string_view roar,int hitpoint)
    :m_type{type},m_name{name},m_roar{roar},m_hitpoint{hitpoint}
    {}

    std::string_view getTypeString(){
        switch (m_type) {
            case Dragon: return "Dragon";
            case Goblin: return "Goblin";
            case Orge: return "Orge";
            case Skeleton: return "Skeleton";
            case Troll: return "Troll";
            case Vampire: return "Vampire";
            case Zombie: return "Zombie";
            default: return "???";
        }
    }
    void print() {
       std::cout<<m_name<<" the "<<getTypeString()<<" has "<<m_hitpoint<<" hit points and says "<<m_roar<<'\n'; 
    }
    private:
    Type m_type{};
    std::string m_name{"???"};
    std::string m_roar{"???"};
    int m_hitpoint{};
};

namespace MonsterGenerator {
    
    std::string_view getName(int n)
	{
        switch (n)
        {
            case 0:  return "Blarg";
            case 1:  return "Moog";
            case 2:  return "Pksh";
            case 3:  return "Tyrn";
            case 4:  return "Mort";
            case 5:  return "Hans";
            default: return "???";
        }
    }

    std::string_view getRoar(int n)
	{
        switch (n)
        {
            case 0:  return "*ROAR*";
            case 1:  return "*peep*";
            case 2:  return "*squeal*";
            case 3:  return "*whine*";
            case 4:  return "*growl*";
            case 5:  return "*burp*";
            default: return "???";
        }
    }
   Monster generate() 
	{
		return Monster{
            static_cast<Monster::Type>(Random::get(0, Monster::max_monster_type-1)),
            getName(Random::get(0,5)),
            getRoar(Random::get(0,5)),
            Random::get(0, 100)
            };
	}
};

int main(){
    Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}
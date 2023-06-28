#pragma once
#include "../Character.hpp"
#include "../Monsters/Monster.hpp"

class Fighter : public Character {
    public:
        Fighter() {};
        Fighter(std::string name, ElementalAttribute element, int maxhp, int atk, int def, int spd);
        virtual ~Fighter() {};
        void setAlive(bool alive);
        void aliveMessage();
        
        void selectAttack(Monster* monster);
        void normalAttack(Monster* monster);
        void heal(Fighter* fighter);
};

inline void Fighter :: setAlive(bool const alive) {
    this->isAlive = alive;
    this->aliveMessage();
}

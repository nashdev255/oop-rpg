#pragma once
#include <string>
#include <vector>
#include <random>
#include "../../Includes/CharacterInclude.hpp"
#include "Monster.hpp"
#include "../Fighters/Fighter.hpp"

class Slime : public Monster {
    public:
        // General
        Slime();
        Slime(std::string name, int maxhp, int atk, int def, int spd);
        virtual ~Slime() {};

        // trigger
        void randomAction(Fighter* fighter);

        // attacks
        void normalAttack(Fighter* fighter);
        void elementalAttack(Fighter* fighter);
        void bodySlamAttack(Fighter* fighter);
        void heal(Monster* monster);

        // ed method
        void healed(int point);

};

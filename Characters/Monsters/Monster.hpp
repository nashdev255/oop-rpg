#pragma once
#include <string>
#include <vector>
#include "../../Includes/CharacterInclude.hpp"
#include "../Character.hpp"
#include "../Fighters/Fighter.hpp"

class Monster : public Character {
    public:
        // General
        Monster() {};
        Monster(std::string name, int maxhp, int atk, int def, int spd);
        virtual ~Monster() {};

        // messages
        virtual void deadMessage();

        // action methods
        virtual void randomAction(Fighter* fighter);

        // ed methods
        void damaged(int point);

};

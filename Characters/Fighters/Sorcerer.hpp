#pragma once
#include "./Fighter.hpp"

class Sorcerer : public Fighter {
    private:
    public:
        Sorcerer(std::string name, ElementalAttribute element,int maxhp, int atk, int def, int spd);
        virtual ~Sorcerer();
};

Sorcerer :: Sorcerer(std::string name, ElementalAttribute element, int maxhp, int atk, int def, int spd) : Fighter(name, element, maxhp, atk, def, spd) {

}
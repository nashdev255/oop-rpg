#pragma once
#include "./Fighter.hpp"

class Fencer : public Fighter {
    private:
    public:
        Fencer(std::string name, ElementalAttribute element, int maxhp, int atk, int def, int spd);
        virtual ~Fencer();
};

Fencer :: Fencer(std::string name, ElementalAttribute element, int maxhp, int atk, int def, int spd) : Fighter(name, element, maxhp, atk, def, spd) {

}

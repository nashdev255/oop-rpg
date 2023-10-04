#include "./Includes/MainInclude.hpp"

int main(int isDevelopersMode, char* argv[]) {
    Fencer* lumine = new Fencer("Lumine", ElementalAttribute::Dendro, 1000, 100, 100, 100);
    Sorcerer* nahida = new Sorcerer("Nahida", ElementalAttribute::Dendro, 1000, 100, 100, 100);
    Fencer* nilou = new Fencer("Nilou", ElementalAttribute::Hydro, 1000, 100, 100, 100);
    Sorcerer* barbara = new Sorcerer("Barbara", ElementalAttribute::Hydro, 1000, 100, 100, 100);
    Party* party = new Party(lumine, nahida, nilou, barbara);
    
    Slime* slime = new Slime();
    
    BattleField* battlefield = new BattleField(party, slime);

    delete lumine;
    delete nahida;
    delete nilou;
    delete barbara;
    delete slime;
    delete battlefield;
    return 0;
}

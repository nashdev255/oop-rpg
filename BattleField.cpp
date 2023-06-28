#include "BattleField.hpp"

BattleField :: BattleField(Party* const party, Monster* const monster) {
    this->party = party;
    this->monster = monster;
    // std::cout << typeid(monster).name() << std::endl;
    this->selectFighter();
    this->initTurn();
}

void BattleField :: initTurn() {
    if((this->selectedFighter)->getSpd()>=(this->monster)->getSpd()) {
        this->setTurn(true);
    } else {
        this->setTurn(false);
    }
    this->action();
}

void BattleField :: setTurn(bool const turn) {
    this->fighterTurn = turn;
}

void BattleField :: switchTurn() {
    this->fighterTurn = !this->fighterTurn;
}

void BattleField :: endTurn() {
    if(this->fighterTurn) {
        std::cout << "your turn ends..." << std::endl;
    } else {
        std::cout << (this->monster)->getName() << "'s turn ends..." << std::endl;
    }
    std::cout << std::endl;
    this->switchTurn();
    this->action();
}

void BattleField :: action() {
    if(this->fighterTurn) {
        std::cout << "it's " << (this->selectedFighter)->getName() << "'s turn!" << std::endl;
        this->selectFighterAttack();
    } else {
        std::cout << "the opponent's turn!" << std::endl;
        this->randomMonsterAttack();
    }
    this->endTurn();
}

void BattleField :: selectFighter() {
    std::cout << "select your Fighter" << std::endl;
    std::cout << "<party members>" << std::endl;
    std::vector<Fighter*> fighters = (this->party)->getFighters();
    for(int i=0;i<fighters.size();i++) {
        std::cout << fighters[i]->getName() << std::endl;
    }
    bool flag = true;
    while(flag) {
        std::string name;
        std::cout << ">>";
        std::cin >> name;
        for(int i=0;i<fighters.size();i++) {
            if(name==fighters[i]->getName()) {
                selectedFighter = fighters[i];
                flag = false;
                break;
            }
        }
        if(flag) { std::cout << "type error" << std::endl; }
    }
    std::cout << std::endl;
}

void BattleField :: selectFighterAttack() {
    (this->selectedFighter)->selectAttack(this->monster);
}

void BattleField :: randomMonsterAttack() {
    (this->monster)->randomAction(this->selectRandomFighter());
}

Fighter* BattleField :: selectRandomFighter() {
    std::vector<Fighter*> fighters = (this->party)->getFighters();

    std::random_device rand;
    std::mt19937 gen(rand());
    std::uniform_int_distribution<> randomMethod(1, fighters.size()-1);

    int method = randomMethod(gen);
    
    return (this->party)->getFighters()[method];
}

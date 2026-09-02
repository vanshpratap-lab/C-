#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int score;

public:
    Player() {
        name = "Unknown";
        score = 0;
        std::cout << "Default Constructor called." << std::endl;
    }

    Player(std::string p_name, int p_score) : name(p_name), score(p_score) {
        std::cout << "Parameterized Constructor called for " << name << "." << std::endl;
    }

    Player(const Player& other) : name(other.name + "_Copy"), score(other.score) {
        std::cout << "Copy Constructor called." << std::endl;
    }

    void display() const {
        std::cout << "Player: " << name << " | Score: " << score << "\n\n";
    }
};

int main() {

    Player p1; 
    p1.display();


    Player p2("Alice", 95); 
    p2.display();


    Player p3(p2); 
    p3.display();

    return 0;
}
}

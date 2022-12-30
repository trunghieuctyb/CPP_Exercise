#include <stdexcept>
#include <iostream>
#include <vector>
class Platformer {
private:
    std::vector<int> floor;
    int posit;
public:
    Platformer(int n, int position) {
        posit = position;
        for(int i = 0; i < n; i++){
            floor.push_back(i);
        }
        // throw std::logic_error("Waiting to be implemented");
    }
    void jumpLeft() {
        floor.erase(floor.begin() + posit);
        posit = posit - 2;;
        // throw std::logic_error("Waiting to be implemented");
    }
    void jumpRight() {
        floor.erase(floor.begin() + posit);
        posit++;
        // throw std::logic_error("Waiting to be implemented");
    }
    int position() {
        return floor[posit];
        // throw std::logic_error("Waiting to be implemented");
    }
};
#ifndef RunTests
int main(){
    Platformer platformer(6, 3);
    std::cout << platformer.position() << std::endl; // should print 3
    platformer.jumpLeft();
    std::cout << platformer.position() << std::endl; // should print 1
    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 4
}
#endif

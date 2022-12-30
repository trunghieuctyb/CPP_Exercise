#include <iostream>
#include <unordered_map>
#include <functional>
#include <vector>
class Ship
{
private:
    std::vector<int> containers;
public:
    Ship(int containerCount, std::function<int(int)> fillContainer){
        for (int i = 0; i < containerCount; i++){
            containers.push_back(fillContainer(i));
        }
    }
    int peekContainer(int containerIndex){
        return containers[containerIndex];
    }
};

#ifndef RunTests
int main(){
    Ship ship(10, [](int containerIndex) { return containerIndex; });
    for (int i = 0; i < 10; i++) {
        std::cout << "Container: " << i << ", cargo: " << ship.peekContainer(i) << "\n";
    }
}
#endif

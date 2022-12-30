#include <stdexcept>
#include <functional>
class ReptileEgg;
class Reptile{
public:
    virtual ~Reptile() {};
    virtual ReptileEgg* lay() = 0;
};
class ReptileEgg{
private:
    int hatchCount = 0;
    std::function<Reptile* ()> hatch_egg;
public:
    ReptileEgg(std::function<Reptile* ()> createReptile)
        : hatch_egg(createReptile){
        throw std::logic_error("Waiting to be implemented");
    }
    Reptile* hatch(){
        if(hatchCount > 0){
            throw std::logic_error("Waiting to be implemented");
        }
        hatchCount++;
        return hatch_egg();
    }
};
class FireDragon : public Reptile{
public:
    FireDragon(){}
    ReptileEgg* lay(){
        // throw std::logic_error("Waiting to be implemented");
        return new ReptileEgg([]() -> Reptile*{return new FireDragon;});
    }
};
#ifndef RunTests
int main()
{
    Reptile* fireDragon = new FireDragon();
    ReptileEgg* egg = fireDragon->lay();
    Reptile* childDragon = egg->hatch();
}
#endif

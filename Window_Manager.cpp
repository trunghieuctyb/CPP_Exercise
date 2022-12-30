#include <iostream>
#include <string>
#include <vector>

class WindowManager{
private:
    std::vector<std::string> tab;
public:
    void open(const std::string windowName){
        int exist = 0; // kiem tra xem tab da tung bat hay chua
            for(int i = 0; i < tab.size(); i++){
                if(tab[i] == windowName){
                    exist = i;
                }
            }
        if(exist == 0){
            tab.push_back(windowName);
        }
        else{
            swap(tab[exist], tab.back());
        }
    }

    void close(const std::string windowName){
        for(int i = 0; i < tab.size(); i++){
            if(tab[i] == windowName){
                tab.erase(tab.begin() + i);
            }
        }
    }

    std::string getTopWindow(){
        return tab.back();
    }
};

#ifndef RunTests
int main(){
    WindowManager wm;
    wm.open("Calculator");
    wm.open("Browser");
    wm.open("Player");
    wm.close("Browser");
    std::cout << wm.getTopWindow();
}
#endif

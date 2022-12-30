#include <iostream>
#include <unordered_map>
#include <string>

class Archive{
    class Record{
    public:
        std::string title;
        std::string content;
        Record(std::string title, std::string content){
            this->title = title;
            this->content = content;
        }

    };
private:
    std::unordered_map<int, Record*> records;
public:
    void add(int id, std::string title, std::string content){
        records[id] = new Record(title, content);
    }
    void remove(int id, std::string& title, std::string& content){
        std::unordered_map<int, Record*>::iterator it = records.find(id);
        Record* doc = it->second;
        title = doc->title;
        content = doc->content;
        delete it->second; // giai phong vung nho
        records.erase(it);
    }
    void clear(){
        std::unordered_map<int, Record*>::iterator it;
        for(it = records.begin(); it != records.end(); ++it){
            delete it->second;
        }
        records.clear();
    }
};

#ifndef RunTests
int main(){
    Archive archive;
    archive.add(123456, "Hamlet", "Hamlet, Prince of Denmark.");
    archive.add(123457, "Othello", "Othello, the Moore of Venice.");
    std::string title, content;
    archive.remove(123456, title, content);
    std::cout << title << '\n';
    std::cout << content << std::endl;
    archive.clear();
}
#endif

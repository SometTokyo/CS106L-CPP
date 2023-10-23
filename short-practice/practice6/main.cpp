#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

using std::map;        using std::vector;
using std::ifstream;   using std::stringstream;
using std::string;     using std::cout;
using std::endl;


map<string,map<int,string>> createMap(string filename){
    map<string,map<int,string>> csMap;
    string line;
    string name, university;
    int year;
    ifstream in(filename);

    while (getline(in,line)){
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, university, ',');
        ss >> year;
        csMap[name][year] = university;
    }

    return csMap;
}

void printMap(map<string,map<int,string>> csMap){
    string alum;
    for(auto iter = csMap.begin(); iter!= csMap.end(); ++iter){
        auto &[name,map] = *iter;
        for(auto iter1 = map.begin(); iter1!= map.end(); ++iter1){
            auto &[year, university] = *iter1;
            alum = (university == "Stanford University") ? "is" : "is not";
            cout << name << ", " << year << ", " << alum << " an alum of Stanford." << endl;
        }
    }
}

int main() {
    string filename = "lecture6_exercise_w23.csv";
    map csMap = createMap(filename);
    printMap(csMap);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string ID;
    int gearPrefix;  
    string somemovie;
    string someday;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    getline(cin, ID);

    if (ID.length() >= 2) {
        gearPrefix = stoi(ID.substr(0, 2)) - 12;
        cout << "Fahsai: I think you may be GEAR " << gearPrefix << ". I have a free movie ticket for you." << endl;
        cout << "Fahsai: Let's go to the cinema together!!!" << endl;
        cout << "Fahsai: What movie do you want to watch?" << endl;
        cout << name << ": ";
        getline(cin, somemovie);
        cout << "Fahsai: So....which day are you free to go with me?" << endl;
        cout << name << ": ";
        getline(cin, someday);
        cout << "Fahsai: " << someday << "....that is OK!!! I'm looking forward to watching " << somemovie << " with you." << endl;
        cout << name << ": ";
        getline(cin, somemovie);  // Reading the additional line ("May the Force be with you krub" or "We will do as we promised, it’ll take not too long...")
        cout << "Fahsai: 555+ see you " << someday << ". Bye Bye \\(^ ^)/" << endl;
    } else {
        cout << "Fahsai: It seems your ID is not long enough to determine the GEAR." << endl;
    }

    return 0;
}


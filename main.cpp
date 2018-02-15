#include <iostream>
#include <vector>
#include <queue>
#include <fstream>

using namespace std;

int main() {
    vector<queue<string>> cores;
    string eventType, sEventTime;
    int eventTime;
    ifstream in("input10.txt");

    if(in.is_open()) {
        while(in >> eventType) {
            in >> sEventTime;
            eventTime = atoi(sEventTime.c_str());
            // place event in corresponding queue depending on core
        }
    }
    else {
        cout << "file did not open" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

class Channel {
    int subscribers;
    int views;

public:
    
    Channel() {
        subscribers = 1000;
        views = 2000;
    }

    
    Channel(int s, int v) {
        subscribers = s;
        views = v;
    }

    
    Channel operator+(Channel obj) {
        Channel result;
        result.subscribers = subscribers + obj.subscribers;
        result.views = views + obj.views;
        return result;
    }

    void showData() {
        cout << "Subscribers = " << subscribers
             << ", Views = " << views << endl;
    }
};

int main() {

    Channel first(1200, 2500);
    Channel second(800, 2500);

    Channel total = first + second;

    cout << "Parameterized Constructor Output:" << endl;
    cout << "***** Subscribers & Views of First and Second Channel *****" << endl;

    first.showData();
    second.showData();

    cout << "************ Total Subscribers & Views ************" << endl;
    total.showData();

    Channel defaultChannel;

    cout << endl << "Default Constructor Output:" << endl;
    defaultChannel.showData();

    return 0;
}
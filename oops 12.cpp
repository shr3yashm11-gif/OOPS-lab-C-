
#include <iostream>
using namespace std;

class Device {
public:
    virtual void show() {
        cout << "Device class function called" << endl;
    }

    virtual ~Device() {}
};

class Smartphone : public Device {
public:
    void smartphoneFeature() {
        cout << "Smartphone feature accessed" << endl;
    }
};

int main() {

    // 1. static_cast
    cout << "===== 1. static_cast =====" << endl;

    int a = 9, b = 2;

    cout << "Integer division: " << a / b << endl;

    cout << "Floating division: "
         << static_cast<double>(a) / b << endl;

    double price = 249.85;

    cout << "Double to int: "
         << static_cast<int>(price) << endl;

    char letter = 'A';

    cout << "Char to int: "
         << static_cast<int>(letter) << endl;


    // 2. dynamic_cast
    cout << "\n===== 2. dynamic_cast =====" << endl;

    Device* d1 = new Smartphone();
    Device* d2 = new Device();

    Smartphone* s1 = dynamic_cast<Smartphone*>(d1);
    Smartphone* s2 = dynamic_cast<Smartphone*>(d2);

    if (s1 != nullptr) {
        cout << "Valid cast: ";
        s1->smartphoneFeature();
    }

    if (s2 == nullptr) {
        cout << "Invalid cast: returned nullptr" << endl;
    }

    delete d1;
    delete d2;


    // 3. const_cast
    cout << "\n===== 3. const_cast =====" << endl;

    int value = 40;

    const int* constPtr = &value;

    int* modifiablePtr = const_cast<int*>(constPtr);

    *modifiablePtr = 75;

    cout << "Value after const_cast: "
         << value << endl;


    // 4. reinterpret_cast
    cout << "\n===== 4. reinterpret_cast =====" << endl;

    int number = 65;

    unsigned char* bytePtr =
        reinterpret_cast<unsigned char*>(&number);

    cout << "Integer value: " << number << endl;

    cout << "First byte (character): "
         << static_cast<char>(*bytePtr) << endl;

    return 0;
}

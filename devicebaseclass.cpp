#include "devicebaseclass.h"
#include <iostream>

using namespace std;

DeviceBaseClass::DeviceBaseClass() : deviceID(0)
{

}

void DeviceBaseClass::setDeviceID()
{

    cout << "Set Device ID: ";
    cin >> deviceID;
    while (cin.fail() || deviceID < 0 || deviceID > 9999) {
        cout << "Invalid input. Please enter a valid Device ID (0-9999): ";

        // Puhdista syötepuskuri, jotta vältetään ikuinen silmukka
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> deviceID;
    }
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}

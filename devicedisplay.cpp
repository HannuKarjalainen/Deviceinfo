#include "devicedisplay.h"
#include <iostream>

using namespace std;

DeviceDisplay::DeviceDisplay() : displayResolution(0)
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Set Display Resolution (1-10): ";
    cin >> displayResolution;
    while (cin.fail() || displayResolution < 1 || displayResolution > 10) {
        cout << "Invalid input. Please enter a valid Display Resolution (1-10): ";

        // Puhdista syötepuskuri, jotta vältetään ikuinen silmukka
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> displayResolution;
    }
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}

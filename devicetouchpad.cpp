#include "devicetouchpad.h"
#include <iostream>

using namespace std;

DeviceTouchPad::DeviceTouchPad() : touchPadSensitivity(0) {}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Set Touch Pad Sensitivity (1-5): ";
    cin >> touchPadSensitivity;
    while (cin.fail() || touchPadSensitivity < 1 || touchPadSensitivity > 5) {
        cout << "Invalid input. Please enter a valid Touch Pad Sensitivity (1-5): ";

        // Puhdista syötepuskuri, jotta vältetään ikuinen silmukka
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> touchPadSensitivity;
    }
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}

#include "devicemouse.h"
#include <iostream>

using namespace std;

DeviceMouse::DeviceMouse() : primaryButton(0)
{

}

void DeviceMouse::setPrimaryButton()
{

    cout << "Set Mouse Primary Button (1 for left, 2 for right): ";
    cin >> primaryButton;
    while (cin.fail() || primaryButton < 1 || primaryButton > 2) {
        cout << "Invalid input. Please enter a valid Primary Button (1 or 2): ";

        // Puhdista syötepuskuri, jotta vältetään ikuinen silmukka
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> primaryButton;
    }
 }

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}

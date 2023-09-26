#include "mydeviceui.h"
#include <iostream>

using namespace std;

void MyDeviceUI::MydeviceUI()
{

}

MyDeviceUI::~MyDeviceUI()
{
    delete mouse;
    delete touchPad;
    delete display;
}

void MyDeviceUI::showMenu()
{
    int choice;
    do
    {
        cout << "Device Menu" << endl;
        cout << "===========" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show Devices Information" << endl;
        cout << "5: Finish" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            setMouseInformation();
            break;
        case 2:
            setTouchPadInformation();
            break;
        case 3:
            setDisplayInformation();
            break;
        case 4:
            showDeviceInformation();
            break;
        case 5:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 5);
}

void MyDeviceUI::setMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl;
    mouse->setDeviceID();
    mouse->setPrimaryButton();
    cout << "Mouse Information Set." << endl;
}

void MyDeviceUI::setTouchPadInformation()
{
    cout << "SET TOUCH PAD INFORMATION" << endl;
    touchPad->setDeviceID();
    touchPad->setTouchPadSensitivity();
    cout << "Touch Pad Information Set." << endl;
}

void MyDeviceUI::setDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl;
    display->setDeviceID();
    display->setDisplayResolution();
    cout << "Display Information Set." << endl;
}

void MyDeviceUI::showDeviceInformation()
{
    cout << "DEVICE INFORMATION" << endl;
    cout << "=================" << endl;
    cout << "Mouse ID: " << mouse->getDeviceID() << ", Primary Button: " << mouse->getPrimaryButton() << endl;
    cout << "Touch Pad ID: " << touchPad->getDeviceID() << ", Sensitivity: " << touchPad->getTouchPadSensitivity() << endl;
    cout << "Display ID: " << display->getDeviceID() << ", Resolution: " << display->getDisplayResolution() << endl;
}

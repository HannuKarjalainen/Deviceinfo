#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H

#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
public:
    void MydeviceUI();
    ~MyDeviceUI();
    void showMenu();
    void setMouseInformation();
    void setTouchPadInformation();
    void setDisplayInformation();
    void showDeviceInformation();

private:
    DeviceMouse* mouse = new DeviceMouse();
    DeviceTouchPad* touchPad = new DeviceTouchPad();
    DeviceDisplay* display = new DeviceDisplay();
};

#endif // MYDEVICEUI_H

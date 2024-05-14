#include <mbed.h>
#include "utils.h"

static BufferedSerial serial_port(USBTX, USBRX, 230400);

FileHandle *mbed::mbed_override_console(int fd)
{
    return &serial_port;
}

int main()
{

    while (1)
    {
        utils::getCurrent();
        ThisThread::sleep_for(1s);
    }
}

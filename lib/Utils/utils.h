#ifndef UTILS_H
#define UTILS_H

#include <mbed.h>
#include "ports_v5.0.h"

namespace utils{

    void getCurrent();

    extern AnalogIn VREF;
    extern AnalogIn VOUT;
}

#endif

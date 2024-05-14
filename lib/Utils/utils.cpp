#include "utils.h"

#define SENSITIVITY 0.025

namespace utils {
    AnalogIn VREF(V_OUT_CURR);
    AnalogIn VOUT(V_REF_CURR);

    void getCurrent()
    {
        double value1 = VOUT.read()*3.3;
        double value2 = VREF.read()*3.3;
        double current = (value1 - value2) / SENSITIVITY;
        printf("Current: %f\n", current);
    }
}
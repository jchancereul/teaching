#include "math.h"

struct Complexe
{
    Complexe(double _rho, double _theta);
    ~Complexe();

    double rho, theta;
    double module();
    
    double getReel();
    void setReel(double _reel);
    double getImag();
    void setImag(double _imag);
    
    double getArgument();
};

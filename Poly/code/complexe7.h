#include "math.h"

class Complexe
{
    public:
        Complexe(double _rho, double _theta);
        ~Complexe();

        double module();
        double getReel();
        void setReel(double _reel);
        double getImag();
        void setImag(double _imag);
        double getArgument();
	static unsigned int compteur;


    private:
        double rho, theta;


};


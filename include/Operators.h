#ifndef OPERATORS_H
#define OPERATORS_H


class Operators
{
    public:
        Operators();
        virtual ~Operators();

        double VolumeOfEarth(){
        double r=6371000;
        const double pi=3.141592653589793;
        double volume=(4.0*pi*r*r*r)/3.0;
        return volume;
    }

    protected:

    private:

};

#endif // OPERATORS_H

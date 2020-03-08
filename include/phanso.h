#include <iostream>
using namespace std;
class FRACTION 
{

private:
    int numerator, denominator;
    int findGreatCommonDivisor( int a, int b);
    void abridgedFraction();
public:
    void Input();
    void Output();
    void Add( FRACTION B );
    void Subtract( FRACTION B);
    void Multipy( FRACTION B );
    void Divine ( FRACTION B );
    FRACTION()
    {
        this->denominator = 1;
        this->numerator = 0;
    }
    FRACTION( int numerator, int denominator )
    {
        this->denominator = denominator;
        this->numerator = numerator;
    }
};
#include "phanso.h"


void FRACTION:: Input()
{
    cout << " Input Numerator And Denominator " << endl;
    cin >> this->numerator >> this->denominator;
}
void FRACTION:: Output()
{
    cout << this->numerator << "/" << this->denominator << endl;
}
void FRACTION:: Add( FRACTION B )
{
    this->numerator = this->numerator * B.denominator + this->denominator * B.numerator;
    this->denominator = this->denominator * B.denominator;
    abridgedFraction();
}
void FRACTION:: Subtract( FRACTION B )
{
    this->numerator = this->numerator * B.denominator - this->denominator * B.numerator;
    this->denominator = this->denominator * B.denominator;
    abridgedFraction();
}
void FRACTION:: Multipy( FRACTION B )
{
    this->numerator = this->numerator * B.numerator;
    this->denominator = this->denominator * B.denominator;
    abridgedFraction();
}
void FRACTION:: Divine( FRACTION B )
{
    this->numerator = this->numerator *  B.denominator;
    this->denominator = this->denominator * B.numerator;
    abridgedFraction();
}
int FRACTION::findGreatCommonDivisor( int a, int b )
{
    if( a < 0 || b < 0 )
    return 1;    
    if( a == b )
    {
        return a;
    }
    else if( a > b )
    {
        return findGreatCommonDivisor( a - b, b);
    }
    else
    {
        return findGreatCommonDivisor( a, b - a);
    }
}
void FRACTION::abridgedFraction()
{
    int denominatorchung = findGreatCommonDivisor( this->numerator, this->denominator );
    this->numerator /= denominatorchung;
    this->denominator /= denominatorchung;
}


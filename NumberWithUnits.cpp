/**
 * Implementation of the NumberWithUnits class.
 * 
 * @author Tzion Benizmino
 */

#include "NumberWithUnits.hpp"

using namespace std;
using namespace ariel;

        void NumberWithUnits::read_units(std::ifstream& input)
        {}
        //binary + operetors
        NumberWithUnits ariel::operator+ (const NumberWithUnits& n1, const NumberWithUnits& n2)
        {
            return NumberWithUnits(0 , " ");
        }
        /*unary +*/
        NumberWithUnits NumberWithUnits:: operator+() const
        {
            return NumberWithUnits(0,"");
        }

    /******************************************************************/
        //binary - operetors
        NumberWithUnits ariel::operator- (const NumberWithUnits& n1, const NumberWithUnits& n2)
        {
            return NumberWithUnits(0 , " ");
        }
        /*unary -*/
        NumberWithUnits NumberWithUnits:: operator- () const
        {
            return NumberWithUnits(0,"");
        }

    /******************************************************************/
        // postfix increment:
        NumberWithUnits NumberWithUnits:: operator++(int flag_for_postfix_increment)
        {
            NumberWithUnits copy = *this;
            //this++
            return NumberWithUnits(0,"");
        }

    /******************************************************************/
        // postfix decrement:
        NumberWithUnits NumberWithUnits:: operator--(int flag_for_postfix_increment)
        {
            NumberWithUnits copy = *this;
            //this--
            return NumberWithUnits(0,"");    
        }

    /******************************************************************/
        bool ariel::operator== (const NumberWithUnits& c1, const NumberWithUnits& c2){return false;}
        bool ariel::operator!= (const NumberWithUnits& c1, const NumberWithUnits& c2){return false;}
        bool ariel::operator>= (const NumberWithUnits& c1, const NumberWithUnits& c2){return false;}
        bool ariel::operator<= (const NumberWithUnits& c1, const NumberWithUnits& c2){return false;}
        bool ariel::operator>  (const NumberWithUnits& c1, const NumberWithUnits& c2){return false;}
        bool ariel::operator<  (const NumberWithUnits& c1, const NumberWithUnits& c2){return false;}

        //----------------------------------
        // friend global IO operators
        //----------------------------------
        ostream& ariel::operator<< (std::ostream& output, const NumberWithUnits& c) {
            return (output << "  ");
        }

        istream& ariel::operator>> (std::istream& input , NumberWithUnits& n)
        {
            return input;
        }

        //----------------------------------
        // multiplication operators
        //----------------------------------
        NumberWithUnits  ariel::operator* (double x,const NumberWithUnits& n)
        {
            return NumberWithUnits(0,"");
        }
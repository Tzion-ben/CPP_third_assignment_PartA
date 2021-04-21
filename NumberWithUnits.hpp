#pragma once

#include<iostream>
//#include <unordered_map>


namespace ariel{
    class NumberWithUnits{

        private :
            int _amount;
            std::string _unitType;


        public:
            /*prametrize constractor*/
            NumberWithUnits (const int& amount,
                            const std::string& unitType)
                            :_amount(amount), _unitType(unitType)
                            {}

            /*will read the file with units*/        
            static void read_units(std::ifstream& input);

            //binary + operetors
            friend NumberWithUnits operator+ (const NumberWithUnits& n1, const NumberWithUnits& n2);
            /*in line implemention */
            NumberWithUnits& operator+= (const NumberWithUnits& other) 
            {
                return *this;
            }
            /*unary +*/
            NumberWithUnits operator+() const;

        /******************************************************************/
            //binary - operetors
            friend NumberWithUnits operator- (const NumberWithUnits& n1, const NumberWithUnits& n2);
            /*in line implemention */

            NumberWithUnits& operator-= (const NumberWithUnits& other) 
            {
                return *this;
            }
            /*unary -*/
            NumberWithUnits operator- () const;

        /******************************************************************/
            // prefix increment:
            NumberWithUnits& operator++() 
            {
                return *this;
            }
            // postfix increment:
            NumberWithUnits operator++(int flag_for_postfix_increment);

        /******************************************************************/
            // prefix decrement:
            NumberWithUnits& operator--()
            {
                return *this;
            }
            // postfix decrement:
            NumberWithUnits operator--(int flag_for_postfix_increment);

        /******************************************************************/
            friend bool operator== (const NumberWithUnits& c1, const NumberWithUnits& c2);
            friend bool operator!= (const NumberWithUnits& c1, const NumberWithUnits& c2);
            friend bool operator>= (const NumberWithUnits& c1, const NumberWithUnits& c2);
            friend bool operator<= (const NumberWithUnits& c1, const NumberWithUnits& c2);
            friend bool operator>  (const NumberWithUnits& c1, const NumberWithUnits& c2);
            friend bool operator<  (const NumberWithUnits& c1, const NumberWithUnits& c2);

            //----------------------------------
            // friend global IO operators
            //----------------------------------
            friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& n);
            friend std::istream& operator>> (std::istream& input , NumberWithUnits& n);

            //----------------------------------
            // multiplication operators
            //----------------------------------
            friend NumberWithUnits  operator* (double x,const NumberWithUnits& n);
    };
}
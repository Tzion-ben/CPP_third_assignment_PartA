/*
* AUTHORS: <Tzion Beniaminov>
*/

#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <string>

using namespace ariel;


TEST_CASE("Good tests for functions") {
    NumberWithUnits a{2, "km"};   // 2 kilometers
    NumberWithUnits b{5, "km"};   // 8 kilometers

    //a+b
    NumberWithUnits a_plus_b_outLine{8, "km"};   // 8 kilometers
    CHECK((a+b) == a_plus_b_outLine );

    //a-b
    NumberWithUnits a_minus_b_outLine{3, "km"};   // 3 kilometers
    CHECK((a-b) == a_minus_b_outLine );

    //a+=
    NumberWithUnits a_plus_b_inLine{8, "km"};   // 8 kilometers
    CHECK((a+=b) == a_plus_b_inLine );

    //a-=
    NumberWithUnits a_minus_b_inLine{3, "km"};   // 3 kilometers
    CHECK((a-=b) == a_minus_b_inLine );

    //- unary
    NumberWithUnits a_minus_unary{3, "km"};   // 3 kilometers
    NumberWithUnits b_minus_unary{-3, "km"};   // 3 kilometers
    CHECK((-a) == b_minus_unary );

    //+ unary
    NumberWithUnits a_plus_unary{3, "km"};   // 3 kilometers
    NumberWithUnits b_plus_unary{3, "km"};   // 3 kilometers
    CHECK((+a) == b_plus_unary );

    //a-- & --a
    NumberWithUnits a_plus_post_pref{3, "km"};   // 3 kilometers
    CHECK((a++) == a_plus_post_pref );
    CHECK((++a) == a_plus_post_pref );

    //a++ & ++a
    NumberWithUnits a_minus_post_pref{2, "km"};   // 2 kilometers
    CHECK((a--) == a_minus_post_pref );
    CHECK((--a) == a_minus_post_pref );

    //== operator
    NumberWithUnits a_equal{2, "km"};   // 2 kilometers
    NumberWithUnits b_equal{2, "km"};   // 2 kilometers
    CHECK(a_equal == b_equal );

    //!= operator
    NumberWithUnits a_not_equal{2, "km"};   // 2 kilometers
    NumberWithUnits b_not_equal{3, "km"};   // 3 kilometers
    CHECK(a_not_equal != b_not_equal );

    //>= operator
    NumberWithUnits a_greater_than_or_equal_to{3, "km"};   // 3 kilometers
    NumberWithUnits b_greater_than_or_equal_to{2, "km"};   // 2 kilometers
    NumberWithUnits c_greater_than_or_equal_to{3, "km"};   // 3 kilometers
    NumberWithUnits d_greater_than_or_equal_to{3, "km"};   // 3 kilometers
    CHECK(a_greater_than_or_equal_to >= b_greater_than_or_equal_to );
    CHECK(c_greater_than_or_equal_to >= d_greater_than_or_equal_to );


    //<= operator
    NumberWithUnits a_less_than_or_equal_to{3, "km"};   // 3 kilometers
    NumberWithUnits b_less_than_or_equal_to{2, "km"};   // 2 kilometers
    NumberWithUnits c_less_than_or_equal_to{3, "km"};   // 3 kilometers
    NumberWithUnits d_less_than_or_equal_to{3, "km"};   // 3 kilometers
    CHECK(a_less_than_or_equal_to <= b_less_than_or_equal_to );
    CHECK(c_less_than_or_equal_to <= d_less_than_or_equal_to );

    //< operator
    NumberWithUnits a_less_than{3, "km"};   // 3 kilometers
    NumberWithUnits b_less_than{2, "km"};   // 2 kilometers
    CHECK(a_less_than_or_equal_to < b_less_than_or_equal_to );

    //> operator
    NumberWithUnits a_greater_than{3, "km"};   // 3 kilometers
    NumberWithUnits b_greater_than{2, "km"};   // 2 kilometers
    CHECK(a_less_than_or_equal_to > b_less_than_or_equal_to );

    //* operator
    NumberWithUnits a_mult{3, "km"};   // 3 kilometers
    NumberWithUnits b_mult{6, "km"};   // 2 kilometers
    CHECK((2.0*a_mult) == b_mult );
}


TEST_CASE("Bad tests") {
    //units not match
    NumberWithUnits a_km{3, "km"};   // 3 kilometers
    NumberWithUnits b_ils{2, "ILS"};   // 2 shekels
    
    CHECK_THROWS((a_km+b_ils));
    CHECK_THROWS((a_km-b_ils));
    CHECK_THROWS((a_km+=b_ils));
    CHECK_THROWS((a_km-=b_ils));
    
}

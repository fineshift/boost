
// Copyright (C) 2009-2012 Lorenzo Caminiti
// Distributed under the Boost Software License, Version 1.0
// (see accompanying file LICENSE_1_0.txt or a copy at
// http://www.boost.org/LICENSE_1_0.txt)
// Home at http://www.boost.org/libs/local_function

#include <boost/config.hpp>
#ifndef BOOST_NO_CXX11_AUTO_DECLARATIONS
#   error "auto-declarations not allowed (using `auto` as storage classifier)"
#else

#include <boost/local_function.hpp>
#include <boost/detail/lightweight_test.hpp>

int main(void) {
    int BOOST_LOCAL_FUNCTION( (auto int x) (register int y) ) {
        return x + y;
    } BOOST_LOCAL_FUNCTION_NAME(add)

    BOOST_TEST(add(1, 2) == 3);
    return boost::report_errors();
}

#endif // AUTO_DECLARATIONS


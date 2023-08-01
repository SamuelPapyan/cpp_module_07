/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:27:27 by spapyan           #+#    #+#             */
/*   Updated: 2023/07/27 19:26:49 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// class Awesome {
// public:
//     Awesome(void): _n(0) {}
//     Awesome(int n): _n(n) {}
//     Awesome & operator=(Awesome& a) { _n = a._n; return *this;}
//     bool    operator==(Awesome const & rhs) const {return _n == rhs._n;}
//     bool    operator!=(Awesome const & rhs) const {return _n != rhs._n;}
//     bool    operator>(Awesome const & rhs) const {return _n > rhs._n;}
//     bool    operator<(Awesome const & rhs) const {return _n < rhs._n;}
//     bool    operator>=(Awesome const & rhs) const {return _n >= rhs._n;}
//     bool    operator<=(Awesome const & rhs) const {return _n <= rhs._n;}
//     int get_n() const {return _n;}
// private:
//     int _n;
// };

// std::ostream& operator<<(std::ostream& o, const Awesome &a) {o << a.get_n(); return o;}

int main(void)
{
    std::cout << "==========TEST 1===========" << std::cout;
    int a = 2;
    int b = 3;

    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min(a, b) = " << min(a, b) << std::endl;
    std::cout << "max(a, b) = " << max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "min(c, d) = " << min(c, d) << std::endl;
    std::cout << "max(c, d) = " << max(c, d) << std::endl;

    // std::cout << "=============TEST 2=============" << std::endl;

    // Awesome a1(2), b1(4);
    // std::cout << "a1 = " <<  a1 << " b1 =  " << b1 << std::endl;
    // std::cout << "max(a1, b1) = " << max(a1, b1) << std::endl;
    // std::cout << "min(a1, b1) = " << min(a1, b1) << std::endl;

    return 0;
}
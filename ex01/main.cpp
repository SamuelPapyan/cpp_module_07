/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:37:41 by spapyan           #+#    #+#             */
/*   Updated: 2023/07/27 19:42:31 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define N 5

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }


template<typename T>
void    print(T &i)
{
    std::cout << i << std::endl;
}

int main(void)
{
    std::cout << "============TEST 1===============" << std::endl;
    int arr1[] = {1,2,3,4,5};

    std::cout << "arr1:" << std::endl;
    iter(arr1, N, &print);

    double  arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "\narr2:" << std::endl;
    iter(arr2, N, &print);

    char    arr3[] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "\narr3:" << std::endl;
    iter(arr3, N, &print);

    std::string arr4[] = {"one", "two", "three", "four", "five"};

    std::cout << "\narr4:" << std::endl;
    iter(arr4, N, &print);

    // std::cout << "==================TEST 2=================" << std::endl;

    // int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    // Awesome tab2[5];
    // iter( tab, 5, print );
    // iter( tab2, 5, print );

    return 0;
}

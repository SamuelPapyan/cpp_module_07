/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spapyan <spapyan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:37:37 by spapyan           #+#    #+#             */
/*   Updated: 2023/07/27 19:42:38 by spapyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T, typename U>
void    iter(T *arr, size_t size, void (*f)(U &))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
}

template<typename T>
void    iter(T *arr, size_t size, void (*f)(T &))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
}

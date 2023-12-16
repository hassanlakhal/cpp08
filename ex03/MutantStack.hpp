/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/16 22:37:13 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include<iterator>
#include<vector>

template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() 
        {
            return std::stack<T>::c.begin();
        }
        iterator end() 
        {
            return std::stack<T>::c.end();
        }
};


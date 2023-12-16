/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/16 01:16:12 by hlakhal-         ###   ########.fr       */
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
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    iterator begin()
    {
        return std::stack<T>::c.begin();
    }

    iterator end()
    {
        return std::stack<T>::c.end();
    }

    const_iterator begin() const
    {
        return std::stack<T>::c.begin();
    }

    const_iterator end() const
    {
        return std::stack<T>::c.end();
    }
};


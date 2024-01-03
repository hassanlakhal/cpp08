/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/01/03 02:10:53 by hlakhal-         ###   ########.fr       */
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
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        const_iterator begin() const 
        {
            return this->c.begin();
        }
        const_iterator end() const
        {
            return this->c.end();
        }
        MutantStack()
        {    
        }
        MutantStack(const MutantStack& other)
        {
            *this = other;    
        }
        MutantStack& operator=(const MutantStack& other)
        {
            if(this != other){}
            return *this;   
        }
        ~MutantStack(){}
};


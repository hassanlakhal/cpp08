/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/01/04 04:02:39 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include<iterator>
#include<vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> 
{
    public:
        typedef typename std::stack<T, Container>::container_type::iterator iterator;
        typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        const_iterator cbegin() const 
        {
            return this->c.cbegin();
        }
        const_iterator cend() const
        {
            return this->c.cend();
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


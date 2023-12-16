/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/16 07:46:14 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include<iterator>
#include<vector>

template <typename T>
class MutantStack : public std::stack<T> 
{
    private :
        std::vector<T> data;
    public:
        typedef typename std::vector<T>::iterator iterator;
        typename std::vector<T>::iterator begin() 
        {
            return data.begin();
        }
        typename std::vector<T>::iterator end() 
        {
            return data.end();
        }
        void push(const T& element) 
        {
            data.push_back(element);
        }
        T size() const
        {
            return data.size();
        }
        T top() const
        {
            if (data.empty())
                throw std::runtime_error("this stack is empty ! ");
            return data.back();
        }
        T pop() 
        {
            T element = top();
            data.pop_back();
            return element;
        }
};


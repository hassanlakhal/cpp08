/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:56:37 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/01/03 03:06:28 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> tab;
public:
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    Span& operator=(const Span& other);
    ~Span();
    template<typename Iterator>
    void addRange(Iterator first, Iterator last)
    {
        if (std::distance(first,last) > N)
            throw std::runtime_error("out of rang !!");
        tab.insert(tab.end(),first,last);
        if (tab.size() >= N)
            throw std::runtime_error("out of rang !!"); 
    }
    template<typename Container>
    void displayNumbers(Container& arr)
    {
        typename Container::iterator it = arr.begin();
        while (it != arr.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
    } 
};



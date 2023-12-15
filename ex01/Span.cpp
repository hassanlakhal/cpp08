/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:56:34 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/15 01:21:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span()
{
    
}
Span::Span(unsigned int N) :N(N)
{
    
}

Span::Span(const Span& other)
{
    
}

Span& Span::operator=(const Span& other)
{
    return *this;
}

Span::~Span()
{
    
}

int Span::longestSpan()
{
    std::vector<int> sortTab = tab;
    std::sort(sortTab.begin(),sortTab.end());
    int maxSpan = sortTab[sortTab.size() - 1] - sortTab[0];
    return maxSpan; 
}

int Span::shortestSpan()
{
    std::vector<int> sortTab = tab;
    std::sort(sortTab.begin(),sortTab.end());
    int minSpan = sortTab[1] - sortTab[0];
    for (size_t i = 2; i < sortTab.size(); ++i)
    {
        int d = sortTab[i] - sortTab[i - 1];
        minSpan = std::min(minSpan,d);
    }
    return minSpan;
}

void Span::addNumber(int num)
{
    tab.push_back(num);
    if (tab.size() > N)
        throw std::runtime_error("out of rang !!");
}
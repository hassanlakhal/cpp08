/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:56:37 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/15 01:10:56 by hlakhal-         ###   ########.fr       */
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
};



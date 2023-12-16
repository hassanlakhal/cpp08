/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:56:26 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/15 21:46:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    unsigned int N = 10;
    Span sp = Span(N);
    try
    {
        srand(time(NULL));
        std::cout << "list : { ";
        for (size_t i = 0; i < N; i++)
        {  
            int num = rand() % 100 + 1;
            std::cout << num << " ";
            sp.addNumber(num);
        }
        std::cout << "} " << std::endl;
        std::cout << "---------------\n";
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
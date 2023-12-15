/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:15:04 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/14 22:58:42 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>
int main()
{
    std::vector<int>vec;
    vec.push_back(10);
    vec.push_back(1);
    vec.push_back(17);
    vec.push_back(18);
    vec.push_back(17);
    try
    {
        easyfind(vec,89);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:14:53 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/18 17:27:18 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<algorithm>
template<typename T>

void easyfind(T tab, int x)
{
    typename T::iterator itr;
    itr = std::find(tab.begin(),tab.end(),x);
    if (itr != tab.end())
    {
        std::cout << "Element : " << x ;
        std::cout << " fond in index " << itr - tab.begin() << std::endl;  
    }
    else
        throw std::runtime_error("number not fond !!");
}

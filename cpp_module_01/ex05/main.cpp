/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:44:03 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/16 09:58:24 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl hi;
	hi.complain( "DEBUG");
	hi.complain( "INFO");
	hi.complain( "WARNING");
	hi.complain( "ERROR");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 23:41:58 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/02 23:41:59 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Harl_HPP_
#define _Harl_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Harl
{
	private	:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public	:
		void complain( std::string level );

		//	DataType	attributes.
};


#endif

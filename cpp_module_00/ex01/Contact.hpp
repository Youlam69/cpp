/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:07:38 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/01 01:35:56 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		void set_infos(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string get_info();
		void print_contact(int index);
		~Contact();
};



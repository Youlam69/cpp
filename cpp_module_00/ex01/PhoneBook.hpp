/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:08:09 by ylamraou          #+#    #+#             */
/*   Updated: 2023/05/01 00:08:16 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int 	n_contacts;

	public:
		PhoneBook();
		void add(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		void search(int index);
		int print_contacts();
		~PhoneBook();

		void get_infos(int index);
	
};

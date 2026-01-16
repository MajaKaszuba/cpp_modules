/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:16:59 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 16:26:08 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	AForm();
	AForm(const std::string &name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	const std::string &getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat &b);
	void execute(const Bureaucrat &executor) const;

	virtual void executeConcrete() const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	
	friend std::ostream &operator<<(std::ostream &os, const AForm &f);
};


#endif

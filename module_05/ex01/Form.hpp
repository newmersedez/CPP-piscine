#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const unsigned int	grade_to_sign;
	const unsigned int	grade_to_execute;

	Form();
	Form& operator=(const Form& copy);

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class SignedException : public std::exception
	{
		virtual const char* what() const throw();
	};

	Form(std::string name, unsigned int gts, unsigned int gte);
	Form(const Form& copy);
	~Form();

	const std::string& getName() const;
	bool getIsSigned() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& stream, const Form& form);

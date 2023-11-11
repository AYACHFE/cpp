/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachfenn <aachfenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:04:36 by aachfenn          #+#    #+#             */
/*   Updated: 2023/11/09 14:25:49 by aachfenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	
	if (getcheck())
	{
		if (getexec() > executor.getGrade())
		{
			std::ofstream tree;
			tree.open(target + "_shrubbery");
			if (tree.is_open())
			{
				tree <<"------------------------------------------------ " << endl;	
				tree << "             _{\\ _{\\{\\/}/}/}__ " << endl;
				tree << "            {/{/\\}{/{/\\}(\\}{/\\} _ " << endl;
				tree << "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ " << endl;
				tree << "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} " << endl;
				tree << "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/} " << endl;
				tree << "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} " << endl;
				tree << "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} " << endl;
				tree << "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} " << endl;
				tree << "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} " << endl;
				tree << "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} " << endl;
				tree << "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) " << endl;
				tree << "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} " << endl;
				tree << "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} " << endl;
				tree << "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} " << endl;
				tree << "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) " << endl;
				tree << "           {/{/{\\{\\/}{/{\\{\\{\\(_)/} " << endl;
				tree << "            {/{\\{\\{\\/}/}{\\{\\\\}/} " << endl;
				tree << "             {){/ {\\/}{\\/} \\}\\} " << endl;
				tree << "             (_)  \\.-'.-/ " << endl;
				tree << "         __...--- |'-.-'| --...__ " << endl;
				tree << "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ " << endl;
				tree << "-\"    ' .  . '    |.'-._| '  . .  '   jro " << endl;
				tree << ".  '-  '    .--'  | '-.'|    .  '  . ' " << endl;
				tree << "         ' ..     |'-_.-| " << endl;
				tree << " .  '  .       _.-|-._ -|-._  .  '  . " << endl;
				tree << "             .'   |'- .-|   '. " << endl;
				tree << " ..-'   ' .  '.   `-._.-´   .'  '  - . " << endl;
				tree << "  .-' '        '-._______.-'     '  . " << endl;
				tree << "       .      ~, " << endl;
				tree << "   .       .   |\\   .    ' '-. " << endl;
				tree << "   ___________/  \\____________ " << endl;
				tree << "  /  Why is it, when you want \\ " << endl;
				tree << " |  something, it is so damn   | " << endl;
				tree << " |    much work to get it?     | " << endl;
				tree << " |          by AYAC            | " << endl;
				tree << "  \\___________________________/ " << endl;
				tree << " " << endl;
				tree << "------------------------------------------------ " << endl;
				tree.close();
				cout << "Tree is in '" << target + "_shrubbery" << " FILE" << endl; 
			}
			else
				std::cerr << "file coudn't open" << endl;
			return ;
		}
		else
			throw (1);
	}
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm("ShrubberyCreationForm", 145, 137) ,target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) {
	target = copy.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &shru) {
		target = shru.target;
	return (*this);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:18:13 by tomartin          #+#    #+#             */
/*   Updated: 2022/01/21 10:03:10 by tomartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

int	check_replace_strings(char **argv)
{
	std::string tmpfile(argv[1]);
	std::string tmps2(argv[2]);
	std::string	tmps3(argv[3]);

	if(tmpfile.size() <= 0)
	{
		std::cerr << "file name is empty" << std::endl;
		return (1);
	}
	if(tmps2.size() <= 0 || tmps3.size() <= 0)
	{
		std::cerr << "s1 or s2 in empty" << std::endl;
		return (1);
	}
	return 0;
}

std::string	generate_output_str(char *arg2)
{
	std::string	tmp_output_file(arg2);

	tmp_output_file += ".replace";
	return(tmp_output_file);
}


int	open_infile(char *arg2, std::ifstream& file_in)
{
	file_in.open(arg2);
	if (!file_in.is_open())
	{
		std::cerr << "Can not open input file" << std::endl;
		return (42);
	}
	return (0);
}

int	open_outfile(std::string str_o, std::ofstream& file_out, std::ifstream& i_f)
{
	file_out.open(str_o, std::ios::trunc);
	if (!file_out.is_open())
	{
		std::cerr << "Can not open output file" << std::endl;
		i_f.close();
		return (42);
	}
	return (0);
}

void	ft_replace(std::ifstream& f_in, std::ofstream& f_out, char *s1, char *s2)
{
	std::string		line, tmp;
	std::string		st_1(s1);
	std::string		st_2(s2);

	while(std::getline(f_in, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			tmp = &line[i];
			if(!tmp.find(st_1))
			{
				f_out << st_2;
				i += st_1.length() - 1;
			}
			else
				f_out << line[i];
		}
		if (!f_in.eof())
			f_out << std::endl;
	}
}

void	to_close(std::ifstream& f_in, std::ofstream& f_out)
{
	f_in.close();
	f_out.close();
}
	
int	main(int argc, char **argv)
{
	std::string		output;
	std::ifstream	f_in;
	std::ofstream	f_out;

	if (argc != 4)
	{
		std::cerr << "Bad number argunments" << std::endl;
		return (42);
	}
	if (check_replace_strings(argv)) return (42);
	output = generate_output_str(argv[1]);
	if (open_infile(argv[1], f_in)) return (42);
	if (open_outfile(output, f_out, f_in)) return (42);
	ft_replace(f_in, f_out, argv[2], argv[3]);
	to_close(f_in, f_out);
	return (0);
}

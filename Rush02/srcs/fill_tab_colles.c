/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab_colles.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 12:24:19 by nboute            #+#    #+#             */
/*   Updated: 2016/08/20 17:37:52 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../includes/colle_2.h"

void	ft_tab_colle00(int a, int b, char *str)
{
	int i;
	int l;
	int x;

	l = 0;
	i = 0;
	while (i < ((a + 1) * b))
	{
		x = (i - l) % a;
		if ((x == 0 && l == 0) || (x == a - 1 && l == 0)
				|| (x == 0 && l == b - 1) || (x == a - 1 && l == b - 1))
			str[i] = 'o';
		else if (l == 0 || l == b - 1)
			str[i] = '-';
		else if (x == 0 || x == a - 1)
			str[i] = '|';
		else
			str[i] = ' ';
		if (x + 1 == a)
			str[++i] = '\n';
		if (x + 1 == a)
			l++;
		i++;
	}
	str[i] = '\0';
}

void	ft_tab_colle01(int a, int b, char *str)
{
	int i;
	int l;
	int x;

	l = 0;
	i = 0;
	while (i < ((a + 1) * b))
	{
		x = (i - l) % a;
		if ((x == 0 && l == 0)
				|| (a != 1 && b != 1 && x == a - 1 && l == b - 1))
			str[i] = '/';
		else if ((x == 0 && l == b - 1) || (x == a - 1 && l == 0))
			str[i] = '\\';
		else if (l == 0 || l == b - 1 || x == 0 || x == a - 1)
			str[i] = '*';
		else
			str[i] = ' ';
		if (x + 1 == a)
			str[++i] = '\n';
		if (x + 1 == a)
			l++;
		i++;
	}
	str[i] = '\0';
}

void	ft_tab_colle02(int a, int b, char *str)
{
	int i;
	int l;
	int x;

	l = 0;
	i = 0;
	while (i < ((a + 1) * b))
	{
		x = (i - l) % a;
		if ((x == 0 && l == 0) || (x == a - 1 && l == 0))
			str[i] = 'A';
		else if ((x == 0 && l == b - 1) || (x == a - 1 && l == b - 1))
			str[i] = 'C';
		else if (l == 0 || l == b - 1 || x == 0 || x == a - 1)
			str[i] = 'B';
		else
			str[i] = ' ';
		if (x + 1 == a)
			str[++i] = '\n';
		if (x + 1 == a)
			l++;
		i++;
	}
	str[i] = '\0';
}

void	ft_tab_colle03(int a, int b, char *str)
{
	int i;
	int l;
	int x;

	l = 0;
	i = 0;
	while (i < ((a + 1) * b))
	{
		x = (i - l) % a;
		if ((x == 0 && l == 0) || (x == 0 && l == b - 1))
			str[i] = 'A';
		else if ((x == a - 1 && l == b - 1) || (x == a - 1 && l == 0))
			str[i] = 'C';
		else if (l == 0 || l == b - 1 || x == 0 || x == a - 1)
			str[i] = 'B';
		else
			str[i] = ' ';
		if (x + 1 == a)
			str[++i] = '\n';
		if (x + 1 == a)
			l++;
		i++;
	}
	str[i] = '\0';
}

void	ft_tab_colle04(int a, int b, char *str)
{
	int i;
	int l;
	int x;

	l = 0;
	i = 0;
	while (i < ((a + 1) * b))
	{
		x = (i - l) % a;
		if ((x == 0 && l == 0)
				|| (a != 1 && b != 1 && x == a - 1 && l == b - 1))
			str[i] = 'A';
		else if ((x == 0 && l == b - 1) || (x == a - 1 && l == 0))
			str[i] = 'C';
		else if (l == 0 || l == b - 1 || x == 0 || x == a - 1)
			str[i] = 'B';
		else
			str[i] = ' ';
		if (x + 1 == a)
			str[++i] = '\n';
		if (x + 1 == a)
			l++;
		i++;
	}
	str[i] = '\0';
}

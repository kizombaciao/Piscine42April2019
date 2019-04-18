/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:29:04 by cchao             #+#    #+#             */
/*   Updated: 2019/04/07 20:29:49 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	if (!*s1 && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 == *s2 && *s1 && *s2)
		return (match(s1 + 1, s2 + 1));
	if (!*s1 && !*s2)
		return (1);
	return (0);
}
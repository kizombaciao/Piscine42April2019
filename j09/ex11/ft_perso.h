/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:32:39 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 14:34:51 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PERSO_H
#define		FT_PERSO_H

enum   		e_profession
{
    SAVE_THE_WORLD
};

typedef struct s_perso
{
    char 		*name;
    double 		life;
    int 		age;
    enum e_profession profession;

}   		t_perso;

#endif

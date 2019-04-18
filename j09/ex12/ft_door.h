/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchao <cchao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:39:01 by cchao             #+#    #+#             */
/*   Updated: 2019/04/05 14:39:04 by cchao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
#define FT_DOOR_H

#define TRUE 1
#define FALSE 0
#define OPEN 1
#define CLOSE 0
#define EXIT_SUCCESS 0

typedef int t_bool;

typedef struct s_door
{
    int state;
}       t_door;

void ft_putchar(char c);
void ft_putstr(char *str);
t_bool open_door(t_door *door);
t_bool close_door(t_door *door);
t_bool is_door_open(t_door *door);
t_bool is_door_close(t_door *door);

#endif
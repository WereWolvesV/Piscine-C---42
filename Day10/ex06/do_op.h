/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 19:05:33 by jechoque          #+#    #+#             */
/*   Updated: 2017/07/17 20:50:45 by jechoque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_div(int a, int b);
int		ft_mlt(int a, int b);
int		ft_add(int a, int b);
int		ft_mod(int a, int b);
int		ft_sub(int a, int b);

#endif

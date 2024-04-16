/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:34:40 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 23:12:57 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long size_t;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);

#endif
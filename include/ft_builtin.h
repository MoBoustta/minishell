/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 20:23:55 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/04 19:22:35 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BUILTIN_H
# define FT_BUILTIN_H

# include "minishell.h"
# include "global_utils.h"

int		ft_cd(int ac, char **av);
int		ft_echo(int ac, char **av);
int		ft_export(int ac, char **av);
int		ft_unset(int ac, char **av);
int		ft_exit(int ac, char **av);
int		ft_env(int ac, char **av);
int		ft_pwd(int ac, char **av);

#endif
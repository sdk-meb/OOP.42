/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_util.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:59:27 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/25 10:12:42 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_UTIL_HPP
# define    CAST_UTIL_HPP

# include<iostream>
# include<cstdlib>
# include<cmath>

void    convert( std::string str );

# define INFF   std::numeric_limits<float>::infinity()
# define INF    std::numeric_limits<double>::infinity()
# define nINFF  -std::numeric_limits<float>::infinity()
# define nINF   -std::numeric_limits<double>::infinity()


# endif

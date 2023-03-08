/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:07:40 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2023/03/08 12:40:25 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

//Funcion encargada de rellenar el vector auxiliar
static void	ft_loadvector(char const *s, char c, int *arrayt, t_size_t	frases)
{
	t_size_t	auxi;
	t_size_t	i;
	t_size_t	j;

	arrayt[0] = frases;
	i = 0;
	j = 0;
	while (s[i] && j <= frases)
	{
		auxi = 0;
		while (s[i] != c && s[i++])
			auxi++;
		if (auxi == 0)
			arrayt[0]--;
		arrayt[++j] = auxi;
		i++;
	}
}

/*
*	Crea un vector de enteros donde el primer entero se reserva 
*	para el tamaño del mismo el resto de valores representa el 
*	tamaño de la string
*	@param s: String que cortar
*	@param c: Caracter separador
*
*	@return arrayt:	Devuelve el vector generado	
*/	
static int	*ft_countchar(char const *s, char c)
{
	t_size_t	i;
	t_size_t	frases;
	int			*arrayt;

	i = -1;
	frases = 0;
	while (s[++i])
	{
		if (s[i] == c)
			frases++;
	}
	arrayt = ft_calloc(frases, sizeof(int));
	ft_loadvector(s, c, arrayt, frases);
	return (arrayt);
}

//Encargada de rellenar la matriz creada
static void	ft_loadmatix(char const *s, char c, int *arrayt, char **arraystr)
{
	t_size_t	i;
	int			k;
	int			j;

	j = 0;
	i = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] != c && s[i] && j <= arrayt[0])
			arraystr[j][k++] = s[i++];
		if (s[i] != '\0')
			i++;
	}
}

/*
*	ft_split se encarga de generar una matrix de strings utilizando
*	como separador el char "c" sobre la string "s"
*	@param s: String que cortar
*	@param c: Caracter separador
*
*	@return	arraystr:	Devuelve la matriz de strings
*/	
char	**ft_split(char const *s, char c)
{
	int			k;
	int			*arrayt;
	char		**arraystr;

	arrayt = ft_countchar(s, c);
	arraystr = ft_calloc((arrayt[0] + 1), sizeof(char *));
	k = 0;
	while (k <= arrayt[0])
	{
		arraystr[k] = ft_calloc((arrayt[k + 1] + 1), sizeof(char));
		k++;
	}
	if (arraystr == NULL)
		return (NULL);
	ft_loadmatix(s, c, arrayt, arraystr);
	return (arraystr);
}

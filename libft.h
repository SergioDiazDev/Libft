/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:49:45 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/10/19 17:23:49 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

//ft_isalpha.h
int			ft_isalpha(int c);
//int			ft_isdigit(int c);
//ft_isdigit.h
int			ft_isdigit(int c);
//ft_isalnum.h
int			ft_isalnum(int c);
//ft_isascii.h"
int			ft_isascii(int c);
//ft_isprint.h
int			ft_isprint(int c);
//ft_memset
typedef unsigned long	t_size_t;
void		*ft_memset(void *str, int c, t_size_t n);
//ft_strlen.h
t_size_t	ft_strlen(const char *str);
//ft_bzero
void		ft_bzero(void *s, t_size_t n);
//ft_memcpy
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
//ft_memmove
void		*ft_memmove(void *str1, const void *str2, t_size_t n);
//ft_strlcpy
t_size_t	ft_strlcpy(char *dest, const char *src, t_size_t size);
//ft_strlcat
t_size_t	ft_strlcat(char *dest, const char *src, t_size_t size);
//ft_toupper
//int			ft_isupper(int c);
int			ft_toupper(int c);
//ft_tolower
//int			ft_islower(int c);
int			ft_tolower(int c);
//ft_strchr
char		*ft_strchr(const char *str, int c);
//ft_strrchr
char		*ft_strrchr(const char *str, int c);
//ft_strncmp
int			ft_strncmp(const char *str1, const char *str2, t_size_t n);
//ft_memchr
void		*ft_memchr(const void *str, int c, t_size_t n);
//ft_memcmp
int			ft_memcmp(const void *str1, const void *str2, t_size_t n);
//ft_strnstr
char		*ft_strnstr(const char *big, const char *little, t_size_t len);
//ft_atoi
int			ft_atoi(const char *str);
//ft_calloc
void		*ft_calloc(t_size_t nmemb, t_size_t size);
//ft_strdup
char		*ft_strdup(const char *s);
//ft_substr
// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.
char		*ft_substr(char const *s, unsigned int start, t_size_t len);
//ft_strjoin
// Reserva (con malloc(3)) y devuelve una nueva
// string, formada por la concatenación de ’s1’ y
// ’s2’.
char		*ft_strjoin(char const *s1, char const *s2);
//ft_strtrim
// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)
char		*ft_strtrim(char const *s1, char const *set);
//ft_split
// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.
char		**ft_split(char const *s, char c);
//ft_itoa
// Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.
char		*ft_itoa(int n);
//ft_strmapi
// A cada carácter de la string ’s’, aplica la
// función ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y el propio carácter. Genera
// una nueva string con el resultado del uso sucesivo
// de ’f’
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//ft_striteri
// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y la dirección del propio
// carácter, que podrá modificarse si es necesario.
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
//ft_putchar_fd
// Envía el carácter ’c’ al file descriptor
// especificado.
void		ft_putchar_fd(char c, int fd);
//ft_putstr_fd
//Envía la string ’s’ al file descriptor
// especificado.
void		ft_putstr_fd(char *s, int fd);
//ft_putendl_fd
void		ft_putendl_fd(char *s, int fd);
//ft_putnbr_fd
//Envía el número ’n’ al file descriptor dado.
void		ft_putnbr_fd(int n, int fd);
//BONUS
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
//ft_lstnew_bonus
// Crea un nuevo nodo utilizando malloc(3). La
// variable miembro ’content’ se inicializa con el
// contenido del parámetro ’content’. La variable
// ’next’, con NULL.
t_list		*ft_lstnew(void *content);
//ft_lstadd_front_bonus
// Añade el nodo ’new’ al principio de la lista ’lst’.
void		ft_lstadd_front(t_list **lst, t_list *new);
//ft_lstsize_bonus
//Cuenta el número de nodos de una lista.
int			ft_lstsize(t_list *lst);
//ft_lstlast_bonus
//Devuelve el último nodo de la lista.
t_list		*ft_lstlast(t_list *lst);
//ft_lstadd_back_bonus
//Añade el nodo ’new’ al final de la lista ’lst’.
void		ft_lstadd_back(t_list **lst, t_list *new);
//ft_lstdelone_bonus
// Toma como parámetro un nodo ’lst’ y libera la
// memoria del contenido utilizando la función ’del’
// dada como parámetro, además de liberar el nodo. La
// memoria de ’next’ no debe liberarse.
void		ft_lstdelone(t_list *lst, void (*del)(void*));
//ft_lstclear_bonus
// Elimina y libera el nodo ’lst’ dado y todos los
// consecutivos de ese nodo, utilizando la función
// ’del’ y free(3).
// Al final, el puntero a la lista debe ser NULL.
void		ft_lstclear(t_list **lst, void (*del)(void*));
//ft_lstiter_bonus
// Itera la lista ’lst’ y aplica la función ’f’ en el
// contenido de cada nodo.
void		ft_lstiter(t_list *lst, void (*f)(void *));
//ft_lstmap_bonus
// Itera la lista ’lst’ y aplica la función ’f’ al
// contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta.
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
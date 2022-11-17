/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-2____ft_strcspn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/01/11 15:57:20 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** **

Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Точно воспроизведите поведение функции strcspn(man strcspn).


Функция должна быть обьявлена следующим образом:

size_t	ft_strcspn(const char *s, const char *reject);


** ************************************************************************** */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(reject, s[i]))
			break;
		i++;
	}
	return (i);
}


/* ************************************************************************** **


P.S 


Функция 'strcspn()' выполняет поиск любого символа из строки 'reject', который 
входит в строку 's', и возвращает количество символов до первого найденного 
символа входящего в строку 'reject'.

Поиск учитывает и завершающий нуль-символ, поэтому, если функция возвращает 
длину строки 's', это значит, что ни один из символов строки 'reject' не 
входит в состав начала строки 's'.


#include <stdio.h>
#include <string.h>

int		main(void)
{
   // Массив со строкой для поиска
   char str[] = "1234567890";

   // Набор символов, которые не должны входить в искомый сегмент
   char sym[] = "9876";

   // Определяем длину начального сегмента, не содержащего символы “9876”
   printf ("Длина сегмента: %ld\n", ft_strspn(str, sym));

   return (0);
}



Вывод в консоль:
Длина сегмента: 6



** ************************************************************************** */
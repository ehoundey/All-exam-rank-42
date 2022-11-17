/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-0____ft_strcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/01/03 21:59:25 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** **


Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Воспроизведите поведение функции strcpy (man strcpy).


Ваша функция должна быть объявлена ​​следующим образом:

char    *ft_strcpy(char *s1, char *s2);



Сама функция `ft_strcpy` копирует данные из строки, на которую указывает 
аргумент `s2`, в строку, на которую указывает аргумент `s1`, пока не 
встретится символ конца строки (нулевой символ). Копирование производится 
вместе с символом конца строки.

Так же функция после копирования возвращает указатель на ту строку, 
в которую были скопированы данные.

Если строки перекрываются, результат копирования будет не определен.



** ************************************************************************** */
/* ************************************************************************** */



char    *ft_strcpy(char *s1, char *s2)	/* Принимаем адреса строк в указатели `s1` и `s2` */
{
	int		i;			/* обьявляем переменную для счетчика */

	i = 0;				/* инициализируем счетчик для старта с нулевой позиции */
	while (s2[i])		/* цикл будет копировать второй массив в первый пока не дойдет 
						 * до '\0' */
	{
		s1[i] = s2[i];	/* копируем символ из нулевой позиции первой строки в нулевую 
						 * позицию второй строки и дальше по мере увеличения переменной i */
		i++;			/* увеличиваем счетчик для перехода к след ячейке массива */
	}
	s1[i] = '\0';		/* если дошли до сюда значит содержимое массива скопировано и в следующей 
						 * ячейке массива нужно поставить завершающий символ */
	return (s1);		/* Возвращаем адресс строки в которую мы копировали данные */
}


/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */


char    *ft_strcpy(char *s1, char *s2)	/* Принимаем адреса строк в указатели `s1` и `s2` */
{
	char	*temp;		/* обьявляем указатель для хранения адреса результирующей строки */

	temp = s1;			/* Инициализируем счетчик для старта с нулевой позиции */
	while (*s2)			/* цикл будет копировать второй массив в первый пока не дойдет 
						** до символа конца строки '\0' */
	{
		*s1 = *s2;		/* копируем символ из нулевой позиции первой строки в нулевую 
						** позицию второй строки и дальше по мере увеличения переменной i */
		s1++;			/* увеличиваем счетчик для перехода к адресу след ячейки массива */
		s2++;			/* увеличиваем счетчик для перехода к адресу след ячейки массива */
	}
	s1 = '\0';			/* если дошли до сюда значит содержимое массива скопировано и в следующей 
						** ячейке массива нужно поставить завершающий символ */
	return (temp);		/* Возвращаем адресс строки в которую мы копировали данные */
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:46:16 by ejuarros          #+#    #+#             */
/*   Updated: 2024/01/26 21:32:39 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_bonus/ft_printf_bonus.h"
#include <stdio.h>

int	main(void)
{
	//int	len;
	//int	lentgh;
/*
	printf("Test printf normal:\n");
	len = ft_printf("Hello World!");
	printf("\n");
	lentgh = printf("Hello World!");
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test printf vacio:\n");
	len = ft_printf("");
	printf("\n");
	lentgh = printf("");
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test printf nulo:\n");
	len = ft_printf((char *)0);
	printf("\n");
	lentgh = printf((char *)0);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test args solos:\n");
	len = ft_printf("%c%s%p%d%i%u%x%X%%", 'a', "bcde", &len, 12345, -12345, 12345, -12345, -12345);
	printf("\n");
	lentgh = printf("%c%s%p%d%i%u%x%X%%", 'a', "bcde", &len, 12345, -12345, 12345, -12345, -12345);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test args en string:\n");
	len = ft_printf("!%c!%s!%p!%d!%i!%u!%x!%X!%%!", 'a', "bcde", &len, 12345, -12345, 12345, -12345, -12345);
	printf("\n");
	lentgh = printf("!%c!%s!%p!%d!%i!%u!%x!%X!%%!", 'a', "bcde", &len, 12345, -12345, 12345, -12345, -12345);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test args incompletos:\n");
	len = ft_printf("!XX%", 'a');
	printf("\n");
	lentgh = printf("!XX%", 'a');
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test char:\n");
	len = ft_printf("XX%cXX%3cXX%-3cXX%0+ #.cXX%-3cXX", 'a', 'b', 'c', 'd', 0);
	printf("\n");
	lentgh = printf("XX%cXX%3cXX%-3cXX%0+ #.cXX%-3cXX", 'a', 'b', 'c', 'd', 0);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test string:\n");
	len = ft_printf("XX%sXX%3sXX%-3.2sXX%0+ #.sXX%sXX%sXX%.4sXX", "Hola", "Hola", "Hola", "Hola", "", (char *)0, (char *)0);
	printf("\n");
	lentgh = printf("XX%sXX%3sXX%-3.2sXX%0+ #.sXX%sXX%sXX%.4sXX", "Hola", "Hola", "Hola", "Hola", "", (char *)0, (char *)0);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test pointer:\n");
	len = ft_printf("XX%+pXX%#pXX%3pXX%-3pXX%03pXX%pXX% pXX%.8pXX%p", &len, &len, &len, &len, &len, &len, &len, &len, (int *)0);
	printf("\n");
	lentgh = printf("XX%+pXX%#pXX%3pXX%-3pXX%03pXX%pXX% pXX%.8pXX%p", &len, &len, &len, &len, &len, &len, &len, &len, (int *)0);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test decimal:\n");
	len = ft_printf("XX%+dXX%#dXX%3dXX%-3dXX%03dXX%dXX% dXX%.8dXX%dXX%dXX%dXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 2147483647);
	printf("\n");
	lentgh = printf("XX%+dXX%#dXX%3dXX%-3dXX%03dXX%dXX% dXX%.8dXX%dXX%dXX%dXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 2147483647);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test unsigned:\n");
	len = ft_printf("XX%+uXX%#uXX%3uXX%-udXX%03uXX%uXX% uXX%.8uXX%uXX%uXX%uXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 4294967295);
	printf("\n");
	lentgh = printf("XX%+uXX%#uXX%3uXX%-udXX%03uXX%uXX% uXX%.8uXX%uXX%uXX%uXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 4294967295);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test hexadecimal:\n");
	len = ft_printf("XX%+xXX% xXX%3xXX%-3xXX%03xXX%xXX%#xXX%.8xXX%xXX%xXX%xXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 4294967295);
	printf("\n");
	lentgh = printf("XX%+xXX% xXX%3xXX%-3xXX%03xXX%xXX%#xXX%.8xXX%xXX%xXX%xXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 4294967295);
	printf("\n%d\n%d\n\n", len, lentgh);

	printf("Test HEXADECIMAL:\n");
	len = ft_printf("XX%+XXX% XXX%3XXX%-3XXX%03XXX%XXX%#XXX%.8XXX%XXX%XXX%XXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 4294967295);
	printf("\n");
	lentgh = printf("XX%+XXX% XXX%3XXX%-3XXX%03XXX%XXX%#XXX%.8XXX%XXX%XXX%XXX", 12345, -12345, 12345, -12345, 12345, -12345, 12345, -12345, 0, -2147483648, 4294967295);
	printf("\n%d\n%d\n\n", len, lentgh);


	printf("Test decimal:\n");
	len = ft_printf("%#x!", 0);
	printf("\n");
	lentgh = printf("%#x!", 0);
	printf("\n%d\n%d\n\n", len, lentgh);
	return (0);
	*/

	//printf("^.^/%31.2s^.^/", NULL);

	//printf("\nOriginal:\n");
	//printf("%5%");
	//ft_printf("\nMine:\n");
	//ft_printf("%5%");
	
}
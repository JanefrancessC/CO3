/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cokeke <cokeke@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:51:07 by cokeke            #+#    #+#             */
/*   Updated: 2024/08/19 21:23:19 by cokeke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0'
			&& to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char to_find[] = "World";
	char *result = ft_strstr(str, to_find);
	char *res = strstr(str, to_find);

	if (result)
		printf("%s\n", result);
	if (res)
		printf("system strstr: %s\n", res);
	else
		printf("Not Found");
	return (0);
}
*/

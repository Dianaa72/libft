/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:19:03 by dde-luca          #+#    #+#             */
/*   Updated: 2026/10/13 22:06:57 by dde-luca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*hellow;

	hellow = malloc(size * nmemb);
	if (hellow == NULL)
		return (NULL);
	ft_memset(hellow, '\0', size * nmemb);
	return (hellow);
}

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	int		*notas;
	char	*texto;
	int		*cero;
	int		i;

	/* --- PRUEBA 1 --- */
	printf("array de 5 ints\n");
	notas = ft_calloc(5, sizeof(int));
	if (!notas)
	{
		printf("Fallo al asignar memoria\n");
		return (1);
	}

	i = 0;
	while (i < 5)
	{
		printf("notas[%d] = %d\n", i, notas[i]);
		i++;
	}

	notas[0] = 42;
	notas[4] = 99;
	printf("Despues de escribir: notas[0]=%d, notas[4]=%d\n\n", notas[0], notas[4]);
	free(notas);

	/* --- PRUEBA 2: string vacío (10 chars a cero) --- */
	printf("string de 10 chars n");
	texto = ft_calloc(10, sizeof(char));
	if (!texto)
	{
		printf("Fallo al asignar memoria\n");
		return (1);
	}
	/* Si está a cero, strlen debe dar 0 */
	printf("Longitud del string: %zu (deberia ser 0)\n", strlen(texto));
	printf("Bytes: [%d][%d][%d]...[%d]\n\n",
		texto[0], texto[1], texto[2], texto[9]);
	free(texto);

	/* --- PRUEBA 3: tamaño cero --- */
	printf("ft_calloc(0, 4)\n");
	cero = ft_calloc(0, 4);
	if (!cero)
		printf("Devuelve NULL (comportamiento valido)\n");
	else
	{
		printf("Devuelve puntero no NULL (tambien valido)\n");
		free(cero);
	}

	/* --- PRUEBA 4: overflow --- */
	printf("\noverflow\n");
	void *p = ft_calloc((size_t)-1, 2);
	if (!p)
		printf("Devuelve NULL correctamente (overflow detectado)\n");
	else
	{
		printf("NO detecta overflow (peligroso)\n");
		free(p);
	}

	return (0);
}
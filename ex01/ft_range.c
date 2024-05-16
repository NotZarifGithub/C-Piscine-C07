/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:47:13 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/16 22:04:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int *arr;
	int range;
	int i;
	
	i = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	arr = (int*)malloc(sizeof(int) * range);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

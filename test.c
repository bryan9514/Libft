/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:44:29 by brturcio          #+#    #+#             */
/*   Updated: 2024/10/09 15:44:38 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
        char *a,*b;
        a=malloc(100*sizeof(char));
        b=(a+25);
        strcpy(a,"This is just a test");
        strcpy(b,"And this is another test, longer test string.");
        printf("a: %s\nb: %s\n",a,b);
        printf("Now, I am copying b in a, and lets see what happen...\n");
        memcpy(a,b,75);
        printf("a: %s\nb: %s\n",a,b);
}

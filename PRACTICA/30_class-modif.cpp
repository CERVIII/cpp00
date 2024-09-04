/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-modif.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:41:48 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 13:54:30 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

class Punto
{
	private:						//Atributos
		int	x;
		int	y;
	public:							//Metodos
		Punto();					//Constructor
		void setPunto(int, int);
		int getPuntoX();
		int getPuntoY();
};

Punto::Punto()
{
	
}

//Establecemos los valores a los atributos
void	Punto::setPunto(int _x, int _y)
{
	x = _x;
	y = _y;
}

int	Punto::getPuntoX()
{
	return (x);
}

int Punto::getPuntoY()
{
	return (y);
}

int	main()
{
	Punto punto1;

	punto1.setPunto(15, 10);
	std::cout << punto1.getPuntoX() << std::endl;
	std::cout << punto1.getPuntoY() << std::endl;
}

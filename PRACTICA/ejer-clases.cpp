/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejer-clases.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:08:04 by pcervill          #+#    #+#             */
/*   Updated: 2024/08/30 19:17:31 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Rectangulo {
	private:						// Atributos
		float largo;
		float ancho;
	public:							// Metodos
		Rectangulo(float, float);	// Constructor
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho)
{
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro()
{
	float _perimetro;
	
	_perimetro = 2*largo + 2*ancho;
	std::cout << "El perimetro del rectangulo es: " << _perimetro << std::endl;
}

void Rectangulo::area()
{
	float _area;

	_area = largo * ancho;
	std::cout << "El area del rectangulo es: " << _area << std::endl;
}

int	main(void)
{
	Rectangulo r1 = Rectangulo (11, 7);
	
	r1.perimetro();
	r1.area();
}

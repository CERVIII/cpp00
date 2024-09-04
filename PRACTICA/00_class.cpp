/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clases.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 18:54:13 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 15:25:05 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

// Declaración de la clase
class Persona
{
	private:						// Atributos privados
		int		edad;
		std::string	nombre;
	public:							// Métodos públicos
		Persona(int, std::string);	// Constructor
		void leer();
		void correr();
		
};

//Constructor, inicializa los atributos de la clase
Persona::Persona(int _edad, std::string _nombre)
{
	edad = _edad;
	nombre = _nombre;
}

//Métodos de la clase
void Persona::leer()
{
	std::cout << "Soy " << nombre << " y estoy leyendo un libro" << std::endl;
}

void Persona::correr()
{
	std::cout << "Soy " << nombre << " estoy corriendo y tengo " << edad << std::endl;
}

int	main(void)
{
	Persona p1 = Persona(25, "Juan");
	Persona p2 = Persona(30, "Maria");

	p1.leer();
	p2.correr();

	return (0);
}
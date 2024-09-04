/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-destructor.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:24:31 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 13:39:40 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

class Perro
{
	private:
		std::string	nombre;
		std::string	raza;
	public:
		Perro(std::string, std::string);	//Constructor
		~Perro();							//Destructor
		void mostrarDatos();
		void jugar();
};

//Contructor
Perro::Perro(std::string _nombre, std::string _raza)
{
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro()
{
	std::cout << "El objeto " << nombre << " ha sido destruido" << std::endl;
}

void	Perro::mostrarDatos()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Raza: " << raza << std::endl;
}

void	Perro::jugar()
{
	std::cout << "El perro " << nombre << " esta jugando" << std::endl;
}

int	main()
{
	Perro perro1("Fido", "Doberman");

	perro1.mostrarDatos();
	perro1.jugar();

}

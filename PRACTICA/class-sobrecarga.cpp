/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-sobrecarga.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:19:52 by pcervill          #+#    #+#             */
/*   Updated: 2024/08/30 19:29:35 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Fecha
{
	private:						// Atributos
		int	dia;
		int	mes;
		int	anyo;
	public:							// Metodos
		Fecha(int, int, int);		// Constructor 1
		Fecha(long);				// Constructor 2
		void mostrarFecha();
};

// Constructor 1
Fecha::Fecha(int _dia, int _mes, int _anyo)
{
	dia = _dia;
	mes = _mes;
	anyo = _anyo;
}

// Constructor 2
Fecha::Fecha(long fecha)
{
	anyo = int(fecha / 10000);
	mes = int((fecha % 10000) / 100);
	dia = int(fecha % 100);
}

void Fecha::mostrarFecha()
{
	std::cout << "La fecha es: " << dia << "/" << mes << "/" << anyo << std::endl;
}

int	main(void)
{
	Fecha f1 = Fecha(30, 8, 2024);
	Fecha f2 = Fecha(20240830);

	f1.mostrarFecha();
	f2.mostrarFecha();
}
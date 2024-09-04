/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-ejer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:58:03 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 13:20:06 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Tiempo
{
	private:
		int	hora;
		int	min;
		int	sec;
	public:
		Tiempo(int, int, int);
		Tiempo(int);
		void mostrarTiempo();
};

Tiempo::Tiempo(int _hora, int _min, int _sec)
{
	hora = _hora;
	min = _min;
	sec = _sec;
}

Tiempo::Tiempo(int _sec)
{
	hora = (_sec / 60) / 60;
	min = (_sec / 60) % 60;
	sec = _sec % 60;
}

void	Tiempo::mostrarTiempo()
{
	std::cout << "Son las " << hora << ":" << min << ":" << sec << std::endl;
}

int main(void)
{
	Tiempo	horaActual(16, 23, 30);
	Tiempo	horaMenos(55410);

	horaActual.mostrarTiempo();
	horaMenos.mostrarTiempo();
}
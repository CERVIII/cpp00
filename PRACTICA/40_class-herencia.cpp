/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-herencia.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:55:17 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 17:05:53 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

class Persona
{
	private:					//Atributos
		std::string nombre;
		int edad;
	public:						//Metodos
		Persona(std::string, int);			//Constructor
		void mostrarPersona();
};

class Alumno : public Persona
{
	private:							//Atributos
		std::string codigoAlumno;
		float notaFinal;
	public:								//Metodos
		Alumno(std::string, int, std::string, float);	//Constructor de la clase alumno
		void mostrarAlumno();
};

//Constructor de la clase Persona (CLASE PADRE)
Persona::Persona(std::string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

//Constructor de la clase Alumno (CLASE HIJO)
Alumno::Alumno(std::string _nombre, int _edad, std::string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
	
}

void Persona::mostrarPersona()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}

void Alumno::mostrarAlumno()
{
	mostrarPersona();
	std::cout << "Codigo Alumn: " << codigoAlumno << std::endl;
	std::cout << "Nota final: " << notaFinal << std::endl;
}

int main()
{
	Alumno alumno1("Alejandro", 20, "12312312", 15.6);
	
	alumno1.mostrarPersona();
}
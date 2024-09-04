/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class-herencia-ejer.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:44:37 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 17:38:32 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Persona
{
	private:
		std::string nombre;
		int edad;
	public:
		Persona(std::string, int);
		void mostrarPersona();
};

class Empleado : public Persona
{
	private:
		float sueldo;
	public:
		Empleado(std::string, int, float);
		void mostrarEmpleado();
};

class Estudiante : public Persona
{
	private:
		std::string codigoAlumno;
	public:
		Estudiante(std::string, int, std::string);
		void mostrarEstudiante();
};

class Universitario : public Estudiante
{
	private:
		int curso;
		std::string carrera;
	public:
		Universitario(std::string, int, std::string, int, std::string);
		void mostrarUniversitario();
};

Persona::Persona(std::string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

Empleado::Empleado(std::string _nombre, int _edad, float _sueldo) : Persona(_nombre, _edad)
{
	sueldo = _sueldo;
}

Estudiante::Estudiante(std::string _nombre, int _edad, std::string _codigoAlumno) : Persona(_nombre, _edad)
{
	codigoAlumno = _codigoAlumno;
}

Universitario::Universitario(std::string _nombre, int _edad, std::string _codigoAlumno, int _curso, std::string _carrera) : Estudiante(_nombre, _edad, _codigoAlumno)
{
	curso = _curso;
	carrera = _carrera;
}

void Persona::mostrarPersona()
{
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Edad: " << edad << std::endl;
}

void Empleado::mostrarEmpleado()
{
	mostrarPersona();
	std::cout << "Sueldo: $" << sueldo << std::endl;
}

void Estudiante::mostrarEstudiante()
{
	mostrarPersona();
	std::cout << "Codigo Alumno: " << codigoAlumno << std::endl;
}

void Universitario::mostrarUniversitario()
{
	mostrarEstudiante();
	std::cout << "Curso: " << curso << std::endl;
	std::cout << "Carrera: " << carrera << std::endl;
}

int main(void)
{
	Universitario p1("Pedro", 30, "aaaa", 4, "Informatica");
	Empleado p2("Juan", 22, 1600.85);


	p1.mostrarUniversitario();
	std::cout << std::endl;
	p2.mostrarEmpleado();
	return (0);
}
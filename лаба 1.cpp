/*************************
* Автор: Карнаухов Ф.А   *
* Дата:19.09.26          *
* Название: Лаба 1       *
* Вариант: 3             *
*************************/

#include <iostream>
#include <math.h>

int main() {

	const double PI = 3.141592;
	double alpha, initial_velocity, acceleration, RadianAlpha, flight_time, Maximum_Flight_Height, Maximum_Flight_Range, Radius_of_Curvature_of_the_Start_of_the_Trajectory, Radius_of_curvature_of_the_vertex_Trajectories;

	std :: cout << "alpha = ";
	std::cin >> alpha;

	std::cout << "initial_velocity = ";
	std::cin >> initial_velocity;

	std::cout << "acceleration = ";
	std::cin >> acceleration;

	RadianAlpha = alpha * PI / 180;

	flight_time = (2 * initial_velocity * sin(RadianAlpha) / acceleration);
	Maximum_Flight_Height = (pow(initial_velocity, 2) * pow(sin(RadianAlpha), 2)) / (2 * acceleration);
	Maximum_Flight_Range = (pow(initial_velocity, 2) * sin(2 * RadianAlpha)) / (acceleration);
	Radius_of_Curvature_of_the_Start_of_the_Trajectory = (pow(initial_velocity, 2)) / (acceleration * cos(RadianAlpha));
	Radius_of_curvature_of_the_vertex_Trajectories = (pow(initial_velocity, 2) * pow(cos(RadianAlpha), 2)) / acceleration;

	std::cout << "--------------------------------------------------------------------------------- " << std::endl;
	std::cout << "Flight_Time = " << flight_time << std :: endl;
	std::cout << "Maximum_Flight_Height = " << Maximum_Flight_Height << std::endl;
	std::cout << "Maximum_Flight_Range = " << Maximum_Flight_Range << std::endl;
	std::cout << "Radius_of_Curvature_of_the_Start_of_the_Trajectory = " << Radius_of_Curvature_of_the_Start_of_the_Trajectory << std::endl;
	std::cout << "Radius_of_curvature_of_the_vertex_Trajectories = " << Radius_of_curvature_of_the_vertex_Trajectories << std::endl;


}

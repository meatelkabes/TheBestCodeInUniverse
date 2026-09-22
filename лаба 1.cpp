/********************************
* Автор: Карнаухов Фёдор        *        
* Название: Линейные алгоритмы  *
* Вариант: 3                    *
********************************/

#include <iostream>
#include <math.h>
using namespace std;
int main() {

	const double PI = 3.141592;
	double alpha, initialVelocity, acceleration;

	cout << "alpha = ";
	cin >> alpha;
	cout << "initial_velocity = ";
	cin >> initialVelocity;
	cout << "acceleration = ";
	cin >> acceleration;

	double radianAlpha = alpha * PI / 180;
	double flightTime = (2 * initialVelocity * sin(radianAlpha) / acceleration);
	double maximumFlightHeight = (pow(initialVelocity, 2) * pow(sin(radianAlpha), 2)) / (2 * acceleration);
	double maximumFlightRange = (pow(initialVelocity, 2) * sin(2 * radianAlpha)) / (acceleration);
	double radiusOfCurvatureOfTheStartOfTheTrajectory = (pow(initialVelocity, 2)) / (acceleration * cos(radianAlpha));
	double radiusOfCurvatureOfTheVertexTrajectories = (pow(initialVelocity, 2) * pow(cos(radianAlpha), 2)) / acceleration;

	cout << "--------------------------------------------------------------------------------- " << endl
	     << "flight time = " << flightTime << endl
	     << "maximum flight height = " << maximumFlightHeight << endl
	     << "maximum flight range = " << maximumFlightRange << endl
	     << "radius of curvature of the start of the trajectory = " << radiusOfCurvatureOfTheStartOfTheTrajectory << endl
	     << "radius of curvature of the vertex trajectories = " << radiusOfCurvatureOfTheVertexTrajectories << endl;


}

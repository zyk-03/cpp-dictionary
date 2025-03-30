#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	
	cout << "Please enter an engineering term to define: ";
	cin >> a;
	
	if (a == "ALTERNATOR"){
		cout << "An electromechanical device that converts mechanical energy into electrical energy in the form of alternating current." << endl;
	}else if(a == "AMPERE"){
		cout << "The SI base unit of electric current." << endl;
	}else if(a == "ARMATURE"){
		cout << "The part of a machine which receives or delivers active power to the external electrical system." << endl;
	}else if(a == "CAPACITANCE"){
		cout << "The amount of electrical energy stored for a given electric potential." << endl;
	}else if(a == "CIRCUIT"){
		cout << "A complete circular path in which electricity flows through." << endl;
	}else if(a == "EFFICIENCY"){
		cout << "The ratio of output power to input power of a device." << endl;
	}else if(a == "GENERATOR"){
		cout << "A rotating electric machine used to transform mechanical energy into electric energy." << endl;
	}else if(a == "HERTZ"){
		cout << "The SI derived unit for frequency defined as the number of cycles per second of a periodic function." << endl;
	}else if(a == "HORSEPOWER"){
		cout << "TA unit of power. 1 hp = 746 W" << endl;
	}else if(a == "IMPEDANCE"){
		cout << "The ratio of the voltage to the electric current, a measure of opposition to time-varying electric current in an electric circuit." << endl;
	}else if(a == "INDUCTANCE"){
		cout << "A property in an electric circuit where a change in the current induces an electromotive force that opposes the change in current." << endl;
	}else if(a == "INSULATION"){
		cout << "The materials and parts used to insulate conductive elements of a machine.." << endl;
	}else if(a == "INVERTER"){
		cout << "A converter that changes direct electric current to single-phase or poly-phase alternating currents." << endl;
	}else if(a == "MOTOR"){
		cout << "A machine which converts electrical energy into mechanical energy." << endl;
	}else if(a == "NEWTON"){
		cout << "The force required to accelerate a mass of one kilogram at a rate of one meter per second per second." << endl;
	}else if(a == "POLES"){
		cout << "Magnetic poles created in a machine by windings." << endl;
	}else if(a == "POWER"){
		cout << "The rate at which work is performed." << endl;
	}else if(a == "REACTANCE"){
		cout << "The resistance to AC current due to capacitance or inductance." << endl;
	}else if(a == "REGULATION"){
		cout << "The amount of speed or voltage change due to load variations." << endl;
	}else if(a == "RELUCTANCE"){
		cout << "The 'resistance' of a magnetic circuit." << endl;
	}else if(a == "RESISTANCE"){
		cout << "Defined as the ratio of voltage to current." << endl;
	}else if(a == "SIGNAL"){
		cout << "An electromagnetic or electrical current that carries data from one system or network to another." << endl;
	}else if(a == "SKEW"){
		cout << "A non-parallel stator and rotor slot alignment." << endl;
	}else if(a == "SLIP"){
		cout << "The difference between the synchronous speed and the actual speed of a rotor expressed as a percentage of the synchronous speed." << endl;
	}else if(a == "SLOT"){
		cout << "A recess in a core in which the conductors of a winding may be placed." << endl;
	}else if(a == "SPECTRUM"){
		cout << "The intensity of light as it varies with wavelength or frequency." << endl;
	}else if(a == "TOLERANCE"){
		cout << "The permitted deviation between the declared value of a quantity and the measured value." << endl;
	}else if(a == "TORQUE"){
		cout << "The rotational force produced by a motor." << endl;
	}else if(a == "WATT"){
		cout << "The SI unit for power." << endl;
	}else if(a == "YOKE"){
		cout << "Part of a device, composed of magnetic material, and intended to complete a magnetic circuit." << endl;
	}else{
		cout << "No word found." << endl;
	}
	return 0;
}

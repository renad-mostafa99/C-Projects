# C-Projects
## Vehicle Control system
1. Ask the user if he/she wants -> a. Turn on/off the vehicle engine or Quit the system
2. If chose to “Quit the system”: Quit program
3. If chose to “Turn off the vehicle engine”: Ask him/her again what he/shewants to do (Requirement 1)
4. Once a choice has been chosen, print on screen the system state.
5. If chose to “Turn on the vehicle engine”, display “Sensors set menu”, menuthat simulates the vehicle sensors readings.
6. While the engine is ON, menu in requirement 5 must be always displayed andwaits for an answer.
7. Based on the answer of requirement 6 
	a. Based on traffic light data (Take it as input from console, we will assume that, this is the sensor read value)
		i. If the traffic light is ‘G’ set vehicle speed to 100 km/hr
		ii. If the traffic light is ‘O’ set vehicle speed to 30 km/hr
		iii. If the traffic light is ‘R’ set vehicle speed to 0 km /h
	b. Based on room temperature data (Take it as input from console, we will assume that this is the sensor read value)
		i. If temperature less than 10, Turn AC ON and set temperature to 20
		ii. If temperature is greater than 30, Turn AC ON and set temperature to 20
		iii. If temperature is otherwise, Turn AC OFF
	c. Based on engine temperature data (Take it as input from console, we will assume that this is the sensor read value)
		i. If temperature less than 100, Turn “Engine TemperatureController” ON and set temperature to 125
		ii. If temperature is greater than 150, Turn “Engine Temperature Controller” ON and set temperature to 125
		iii. If temperature is otherwise, Turn “Engine TemperatureController” OFF
	d. If vehicle speed is 30 km/hr
		i. Turn ON AC if it was OFF and set room temperature to:current temperature * (5/4) + 1
		ii. Turn ON “Engine Temperature Controller” if it was OFF and set engine temperature to: current temperature * (5/4) + 1
	e. Display the current vehicle state after applying 7.a to 7.d
		i. Engine state: ON/OFF
		ii. AC: ON/OFF
		iii. Vehicle Speed
		iv. Room Temperature
		v. Engine Temperature Controller State.
		vi. Engine Temperature

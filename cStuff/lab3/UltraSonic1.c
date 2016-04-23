/**This is the comment tests*/
#pragma config(Sensor, S4,     sonarSensor,         sensorSONAR)
task main()
{
	while(SensorValue(sonarSensor)>25)
	{
		motor[motorC] =50;//left motor
		motor[motorB] =50;//right motor
	}//end while

		motor[motorC] = -50;//left motor
		motor[motorB] = -50;//right motor
		wait1Msec(1000);

		motor[motorC] = -17;//left motor
		motor[motorB] = 17;//right motor
		wait1Msec(1000);

		while(SensorValue(sonarSensor)>25)
	{
		motor[motorC] =50;//left motor
		motor[motorB] =50;//right motor
	}//end while

			motor[motorC] = -50;//left motor
		motor[motorB] = -50;//right motor
		wait1Msec(1000);

		motor[motorC] = -17;//left motor
		motor[motorB] = 17;//right motor
		wait1Msec(1000);

			while(SensorValue(sonarSensor)>25)
	{
		motor[motorC] =50;//left motor
		motor[motorB] =50;//right motor
	}//end while

			motor[motorC] = -50;//left motor
		motor[motorB] = -50;//right motor
		wait1Msec(1000);

		motor[motorC] = -17;//left motor
		motor[motorB] = 17;//right motor
		wait1Msec(1000);





}//end main

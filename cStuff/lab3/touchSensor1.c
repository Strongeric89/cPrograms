#pragma config(Sensor,S1,touchSensor,sensorTouch)
//const tSensors touchSensor = (tSensors) S1; //impoting the touch sensor and naming it and assigning to pot S1

task main()
{
	while(SensorValue(touchSensor)==0)
	{
		motor[motorC] =50;//left motor
		motor[motorB] =50;//right motor
	}//end while

		motor[motorC] = -50;//left motor
		motor[motorB] = -50;//right motor
		wait1Msec(1000);
}//end main

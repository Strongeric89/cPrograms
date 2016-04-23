#pragma DebuggerWindows("nxtLCDScreen")

int a = 70;
int b = 50;
{
		//nbatteryAverage = nAverageBatteryLevel;



	displayTextLine(4, " Hello eric,craig",motorB,motorC);  // Display the text on line number 4 of 8 on the LCD
	wait1Msec(10000);														// Wait a bit otherwise program will finish and text not visible




		displayTextLine(4, "Power%d Battery%d",a,b);
		wait1Msec(10000);

		int speedLeft = motor[motorB];
		displayTextLine(4, "speed is %d",speedLeft);

	}

task main()
{
	int i = 0;

	while(i == 0)
	{
		nSyncedMotors = synchBC;
		nSyncedTurnRatio = -100;

		motor[motorB] = 50;
		wait1Msec(4000);
	}//end while


}//end main()

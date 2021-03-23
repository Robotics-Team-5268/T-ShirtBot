

#include "subsystems/Drive.h"

Drive::Drive() {
	SetName( "Drive" );
	
	speedControllerFL.SetInverted(SCFL_INVERTED);
	speedControllerBL.SetInverted(SCBL_INVERTED);
	speedControllerFR.SetInverted(SCFR_INVERTED);
	speedControllerBR.SetInverted(SCBR_INVERTED);

	diffDrive.SetSafetyEnabled(false);
}

void Drive::setMotors(float leftSpeed, float rightSpeed) {
	leftSpeed = leftSpeed * MAX_SPEED;
	rightSpeed = rightSpeed * MAX_SPEED;

	diffDrive.TankDrive(leftSpeed, rightSpeed, false);
}

// This method will be called once per scheduler runs
void Drive::Periodic() {}


void Drive::Acceleration(float leftSpeed, float rightSpeed) {
	if (-MAX_CHANGE < (leftSpeed - oldSpeedLeft) && (leftSpeed - oldSpeedLeft) < MAX_CHANGE){
		oldSpeedLeft = leftSpeed;
	} else {
		if (oldSpeedLeft < leftSpeed){
			oldSpeedLeft = oldSpeedLeft + MAX_CHANGE;
		} else {
			oldSpeedLeft = oldSpeedLeft - MAX_CHANGE;
		}
	}
	if (-MAX_CHANGE < (rightSpeed - oldSpeedRight) && (rightSpeed - oldSpeedRight) < MAX_CHANGE){
		oldSpeedRight = rightSpeed;
	} else {
		if (oldSpeedRight < rightSpeed){
			oldSpeedRight = oldSpeedRight + MAX_CHANGE;
		} else {
			oldSpeedRight = oldSpeedRight - MAX_CHANGE;
		}
	}
	setMotors(oldSpeedLeft, oldSpeedRight);
}
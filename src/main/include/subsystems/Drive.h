#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <ctre/Phoenix.h>
#include <RobotMap.h>




class Drive : public frc2::SubsystemBase {
 public:
  Drive();
  virtual void setMotors(float leftSpeed, float rightSpeed);
	void Acceleration(float leftSpeed, float rightSpeed);
 
	void Periodic();

 private:
  	WPI_VictorSPX speedControllerFL{DRIVE_SPEED_CONTROLLER_FL_CHANNEL};
	WPI_VictorSPX speedControllerBL{DRIVE_SPEED_CONTROLLER_BL_CHANNEL};
	frc::SpeedControllerGroup LeftSC{speedControllerFL, speedControllerBL};

	WPI_VictorSPX speedControllerFR{DRIVE_SPEED_CONTROLLER_FR_CHANNEL};
	WPI_VictorSPX speedControllerBR{DRIVE_SPEED_CONTROLLER_BR_CHANNEL};
	frc::SpeedControllerGroup RightSC{speedControllerFR, speedControllerBR};

	frc::DifferentialDrive diffDrive{LeftSC, RightSC};



	

	float oldSpeedLeft = 0;
	float oldSpeedRight = 0;
	const float MAX_SPEED = 0.6;
	const float MAX_CHANGE = 0.05;
    
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};

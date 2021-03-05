/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <ctre/Phoenix.h>

#include "OI.h"
#include "RobotMap.h"
namespace frc{
class Joystick; 
}
class Drive : public frc2::SubsystemBase {
 public:
  
  Drive();
  virtual void setMotors(float l_speed, float r_speed);
  WPI_TalonSRX speedControllerFL{DRIVE_SPEED_CONTROLLER_FL_CHANNEL};
	WPI_TalonSRX speedControllerBL{DRIVE_SPEED_CONTROLLER_BL_CHANNEL};
	frc::SpeedControllerGroup leftSC{speedControllerFL, speedControllerBL};

	WPI_TalonSRX speedControllerFR{DRIVE_SPEED_CONTROLLER_FR_CHANNEL};
	WPI_TalonSRX speedControllerBR{DRIVE_SPEED_CONTROLLER_BR_CHANNEL};
	frc::SpeedControllerGroup rightSC{speedControllerFR, speedControllerBR};

  frc::DifferentialDrive diffDrive{leftSC, rightSC};
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

 private:
  // Components (e.g. motor c ontrollers and sensors) should generally be
  // declared private and exposed only through public methods.
  
  
};

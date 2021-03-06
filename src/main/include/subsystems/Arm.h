/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>
#include "RobotMap.h"
#include <frc/DigitalInput.h>
class Arm : public frc2::SubsystemBase {
 public:
  Arm();
  void Move(double percent);
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

 private:
  WPI_VictorSPX motor{ARM_MOTOR};
  frc::DigitalInput toplimitSwitch{TOP_LIMIT_SWITCH};
  frc::DigitalInput bottomlimitSwitch{BOTTOM_LIMIT_SWITCH};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};

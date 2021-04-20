/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/Compressor.h>
#include <frc/DoubleSolenoid.h>
#include <frc/Solenoid.h>
#include <frc2/command/SubsystemBase.h>
#include "RobotMap.h"

class Pneumatics : public frc2::SubsystemBase {
 public:
  Pneumatics();

  void Single_Solenoid_On(int port);
  void Single_Solenoid_Off(int port);

  void Double_Solenoid_Forward();
  void Double_Solenoid_Backward();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();
  int cycle = 1;
 private:
  
  frc::Compressor mcompressor{PCM};
  frc::DoubleSolenoid dsolenoid{PCM, DOUBLE_SOLENOID_FORWARD_CHANNEL, DOUBLE_SOLENOID_REVERSE_CHANNEL};
  frc::Solenoid ssolenoid1{PCM, SINGLE_SOLENOID_1};
  frc::Solenoid ssolenoid2{PCM, SINGLE_SOLENOID_2};
  frc::Solenoid ssolenoid3{PCM, SINGLE_SOLENOID_3};
  frc::Solenoid ssolenoid4{PCM, SINGLE_SOLENOID_4};
  frc::Solenoid ssolenoid5{PCM, SINGLE_SOLENOID_5};
  frc::Solenoid ssolenoid6{PCM, SINGLE_SOLENOID_6};
};

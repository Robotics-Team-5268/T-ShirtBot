
#pragma once

#include <frc2/command/Command.h>
#include <frc/Joystick.h>
#include <frc2/command/button/JoystickButton.h>

#include "commands/ExampleCommand.h"
#include "subsystems/ExampleSubsystem.h"
#include "subsystems/Drive.h"
#include "subsystems/Flag.h"
#include "subsystems/Pneumatics.h"
#include "commands/CyclePneumatics.h"

class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();

 private:
  // The robot's subsystems and commands are defined here...
  ExampleSubsystem subsystem;
  ExampleCommand AutonomousCommand;

  Drive drive;
  Flag mflag;
  Pneumatics mpneumatics;
  
  std::shared_ptr<frc::Joystick> driverJoystick;
  std::vector<frc2::JoystickButton*> driverBtns;
  void ConfigureButtonBindings();
};


#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>
#include <frc/Joystick.h>
#include "subsystems/Drive.h"

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
class DriveWithJoystick
    : public frc2::CommandHelper<frc2::CommandBase, DriveWithJoystick> {
 public:
  DriveWithJoystick( Drive* iDrive, const std::shared_ptr<frc::Joystick>& iJoystick );

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

 private:
  Drive* drive;
  std::shared_ptr<frc::Joystick> joystick;
};

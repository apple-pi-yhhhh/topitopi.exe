mkdir C:\Users\wwwto\π\setup

bitsadmin /transfer download https://github.com/apple-pi-yhhhh/topitopi.exe/blob/main/setup/main.zip?raw=true C:\Users\wwwto\π\setup.zip

cd C:\Users\wwwto\π

call powershell -command "Expand-Archive -Force setup.zip setup"

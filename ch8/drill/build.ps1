Write-Host "Compiling drill 1"
clang 1_use.cpp 1_my.cpp -o use.exe
Write-Host "Compiling drill 2"
clang 2_drill.cpp -o 2_drill.exe -Wno-literal-conversion
Write-Host "Compiling drill 3"
clang 3_drill.cpp -o 3_drill.exe
Write-Host "Done!"
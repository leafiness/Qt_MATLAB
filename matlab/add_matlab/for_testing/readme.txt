add_matlab C++ Shared Library

1. Prerequisites for Deployment 

Verify that version 9.9 (R2020b) of the MATLAB Runtime is installed.   
If not, you can run the MATLAB Runtime installer.
To find its location, enter
  
    >>mcrinstaller
      
at the MATLAB prompt.
NOTE: You will need administrator rights to run the MATLAB Runtime installer. 

Alternatively, download and install the Windows version of the MATLAB Runtime for R2020b 
from the following link on the MathWorks website:

    https://www.mathworks.com/products/compiler/mcr/index.html
   
For more information about the MATLAB Runtime and the MATLAB Runtime installer, see 
"Distribute Applications" in the MATLAB Compiler SDK documentation  
in the MathWorks Documentation Center.

2. Files to Deploy and Package

Starting with R2018a, MATLAB Compiler SDK generates two types of C++ shared library 
 interfaces:
- legacy, using the mwArray interface
- generic, using the MATLAB Data API introduced in R2017b
MathWorks recommends the MATLAB Data API, which uses modern C++ features for efficient 
 execution and programming.
Files for the legacy interface can be found in the directory where this readme file is 
 located.
Files for the generic interface can be found in the v2\generic_interface subdirectory.

Files to Package for the Legacy Interface
=========================================
-add_matlab.dll
-add_matlab.h
-add_matlab.lib
-MCRInstaller.exe 
    Note: if end users are unable to download the MATLAB Runtime using the
    instructions in the previous section, include it when building your 
    component by clicking the "Runtime included in package" link in the
    Deployment Tool.
-This readme file

Files to Package for the Generic Interface
(in the v2\generic_interface subdirectory)
==========================================
-add_matlab.ctf (component technology file) 
-readme.txt

3. Definitions

For information on deployment terminology, go to
https://www.mathworks.com/help and select MATLAB Compiler >
Getting Started > About Application Deployment >
Deployment Product Terms in the MathWorks Documentation
Center.





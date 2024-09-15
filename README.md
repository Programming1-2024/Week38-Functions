# Week38: Functions & Headers
No tests this week. i am still having issues with Visual Studio not wanting to run tests. So i will instead try to guide you through this README file.

This week we will be working with functions and header files! You have already been introduced to functions before, so now i will focus on good structure in your code as well as documentation. An important part of the structure is header files. [Microsoft has a really good page about what headerfiles are, and how to use them well](https://learn.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-170).

## Why we use header files

In C++ your code can only access functions and variables which have been declared before them. Thus far we have done this through forward declarations at the top of our cpp files, without defining the function. `int Addition(int a, int b);` at the top of the cpp file is an example of forward declaration. A declaration tells the computer to reserve a function/variable name for future definition, but not what it does. A definition tells C++ what the function/variable does, such as
```
int Addition(int a, int b) {
  return a+b;
}
```
appearing further down in our code.

Header files is a different way to declare functions and variables, without needing to fill up the top of our cpp files. You declare a functions and variables in your header files like you would with forward declaration, but you save the definition of the functions for your cpp files. It is therefore a good practice to make a header file in pair with a cpp file of the same name, so that you can include the header file in the cpp file and also define the functions and variables in the cpp file. If you get used to working in this way now, transitioning to Unreal Engine next semester will be smoother.

After including the header file in your cpp file, you can define your functons and variables like you usually do. I recommend using Alt+Enter on a function in the header file to declare it easily. Using this way will include the namespace or class the function belongs to when you begin object oriented programming in two weeks.

## Javadoc (aka documentation)
Documenting your functions is important for both yourself rereading your code and for your team members trying to understand your code without undesrtanding the definition of your functions. [This webpage](https://developer.lsst.io/cpp/api-docs.html#cpp-doxygen-related) explains how to write your documentation, and also how to use tags. I recommend jumping to the section `Documenting Methods and Functions`, as it provides a very good outline on how to write good documentation for functions.

## Task
The purpose of this week's task is to get you used to defining functions in your cpp file, using Alt+enter. I have defined functions in MathFunctions.h and your task is to define them in MathFunctions.cpp. I recommend making more functions in the header file when you are done so that you also get o practice making the declarations.

P.S. It is very bad practice to have a variable defined in the header file like i did unless: it is declared constant or is a global variable for an object

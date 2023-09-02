# primefactorization-commandlinetool
This is a CLI tool I created for learning. The program is made in C++ and tells the user if the input number is composite or prime and applies prime factorization to it.

# Usage

Download the repo and use the following command command:

**This is a GCC command. On Linux and macOS GCC is needed, on Windows minGW is needed**

```
g++ -std=c++20 main.cpp factorization_helpers.cpp -o app
```

**With Cmake**

First cd into the project folder, Then run this:

````
cmake .
````

And then run this to build the app:

```
cmake --build .
```
A new executable binary will be created. To run it, type ./app and then the number you would like to factorize.


**Example**

```
./app 500
```

When the result appears, you will have to press enter to finish the execution of the app.

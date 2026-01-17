Hello World in C++
==================


Introduction
------------

The first program in any programming language is usually a "Hello World" program.
It just prints out text.
In C++, the code to such a simple program looks as follows. 

.. literalinclude:: ../../../lessons/01_hello_world/hello-world.cpp
   :language: cpp
   :linenos:


Compiling and runningyour program
---------------------------------
      
After writing this into a file, one needs to use a compiler to build a programm out of it.

.. code-block:: bash
		
   g++-14 -std=c++17 hello-world.cpp -o hello-world.app

Here ``g++-14`` is the GNU compiler version 14.
This might be another version on your system.
And it might just be called ``g++``.

The flag ``-std=c++17`` sets the C++ standrad to version 17.
This is not needed for this program, but for future examples.


Lastly, ``hello-world.cpp`` is the filename where the above code is written to.

After executing the compiler, a program ``hello-world.app`` is generated.
We defined it's name via the ``-o`` flag.
      
To run the program, just type ``./hello-world.app`` on the command line.
You then should get something like:

.. code-block::
   
   Hello world!
   This is a course in computational physics.


What does the C++ code do?
--------------------------

.. literalinclude:: ../../../lessons/01_hello_world/hello-world.cpp
   :language: cpp
   :linenos:
   :emphasize-lines: 3,6

All C++ programs have to contain a ``main`` function.
The code content of this (all) function(s) is wrritten between the curly braces ``{ ... }``.
Any stament in C++ ends with a semicolin ``;``.
Thus, also our definition of the ``main`` function.
The parenthesis ``( ... )`` after ``main`` are for arguments to give to the function.
Here, we do not provide arguments for simlicity, thus ther is no code between the parenthesis.

.. literalinclude:: ../../../lessons/01_hello_world/hello-world.cpp
   :language: cpp
   :linenos:
   :emphasize-lines: 4

To print something in C++ to the screen/terminal, we use ``std::cout << "abc";``.
This prints the text "abc" to the terminal prompt.
Again, the statement ends with a semicolon.
The ``std::cout`` part specifies, that the text should go the the standard output.
It is a so-called device class. 
An alernative would be the standard error output ``std::err``.
The prefix ``std`` stands for "C++ Standard Library" and is a so-called namespace, where the device is located to nut clutter all functions, etc. in one place.

Additionally, we use ``std::endl`` twice.
It just tells the program to start a new line. 
Alternatively, one could add ``\n`` in the text itself.

To tell our program to include the ``std::cout`` device and the ``std::end`` function, we need to include a library - the so-called ``iostream`` library.
This is done before we define the ``main()`` function.

.. literalinclude:: ../../../lessons/01_hello_world/hello-world.cpp
   :language: cpp
   :linenos:
   :emphasize-lines: 1




Hello World in C++
==================

The first program in any programming language is usually a "Hello World" program.
It just prints out text.
In C++, the code to such a simple program looks as follows. 

.. literalinclude:: ../../../lessons/01_hello_world/hello-world.cpp
   :language: cpp
   :linenos:

After writing this into a file, one needs to use a compiler to build a programm out of it.

.. code-block:: bash
   g++-14 -std=c++17 hello-world.cpp -o hello-world.app

Here ``g++-14```is the GNU compiler version 14.
This might be another version on your system.
And it might just be called ``g++```.

The flag ``-std=c++17`` sets the C++ standrad to version 17.
This is not needed for this program, but for future examples.


Lastly, ``hello-world.cpp`` is the filename where the above code is written to.

After executing the compiler, a program ``hello-world.app`` is generated.
We defined it's name via the ```-o`` flag.
      
To run the program, just type ``./hello-world.app`` on the command line.
You then should get something like:

.. code-block::
   Hello world!
   This is a course in computational physics.


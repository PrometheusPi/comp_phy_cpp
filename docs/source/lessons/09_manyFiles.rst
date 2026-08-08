Working with many files
=======================


Introduction
------------
Storing all your code in a single file can become very lengthy and unstructured.
Furthermore, you might want to reuse part of your code from one project in another.
You could copy past that code every time you reuse it, but than any fixes or updates to that code need to be added to all copies in older projects.
A better way is to split code into different files and reuse the code fragments as needed.
Here, we will discuss how to split code into files and combine them via linkem them together during compilation.

Structure of example code
-------------------------
The example file is simple: we have a file with the ``main()`` function called ``main.cpp``

.. literalinclude:: ../../../lessons/09_multiple_files/main.cpp
   :linenos:
   :language: cpp


We have a so-called header file ``sub_file.hpp`` hat just contains information on the interfaces

.. literalinclude:: ../../../lessons/09_multiple_files/sub_file.hpp
   :linenos:
   :language: cpp


and a file with the interface implementation called ``sub_file.cpp``.

.. literalinclude:: ../../../lessons/09_multiple_files/sub_file.cpp
   :linenos:
   :language: cpp

Compiling multiple files to one exectuable
------------------------------------------

Static link
^^^^^^^^^^^
There are multiple ways to compile and link the code in numerous files into one executable.
The simplest is by providing all files on compilation directly:

.. code-block:: bash

    g++ main.cpp sub_file.cpp


This is called a *statical link* where the entire code is translated and put into the executable.

Dynamic link
^^^^^^^^^^^^
However, there is also the option to pre-compile parts of the code into a shared library and then let the operating system dynamic link to that shared library on runtime.
For that, we need to create a on *object file* ``sub_file.o``:

.. code-block:: bash

    g++ -c -fPIC sub_file.cpp -o sub_file.o


where ``-fPIC`` enabling realtive references.

Then, we convert the onject file to a *shared object file* ``sub_file.so``:

.. code-block:: bash

    g++ -shared -o libsub_file.so sub_file.o


Then, we need to link our main code with the libary:

.. code-block:: bash

    g++ main.cpp -L. -lsub_file


To execute the program ``a.out``, we add the shared object file to the ``LD_LIBRAY_PATH``:

.. code-block:: bash

    LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
    ./a.out


For more details see this `article by Naufal Pratama <https://mprtmma.medium.com/c-shared-library-dynamic-linking-eps-1-bacf2c95d54f>`__

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

Classes
=======


Introduction
------------
Classes are complex data types, that can contain user-defined data, called attributes, and functions, called methods.


Structure of classes
--------------------
A class in C++ is defined by

.. code-block:: cpp

    class NameOfClass{
       ...
    };

Inside the curly brackets all variables/attributes and functions/methods of the class are defined.
Both attributes and methods can be defines as

+--------------+---------------------------------------------------------------------------------------------------------------------------+
| keyword      | description                                                                                                               |
+==============+===========================================================================================================================+
| ``public``   | meaning they can be accessed changed from outside of the class,                                                           |
+--------------+---------------------------------------------------------------------------------------------------------------------------+
| ``private``  | meaning they can be only accessed and changed from within the class                                                       |
+--------------+---------------------------------------------------------------------------------------------------------------------------+
| ``protected``| being similar to ``private`` but classes that inheritat (see later) can also use these attributes and methods.            |
+--------------+---------------------------------------------------------------------------------------------------------------------------+


Simple class
------------
As a simple example, let us define a class for particles.
This class will provide a 2-dimensional position of our particle, stored as ``double`` value ``x`` and ``y``, and a ``radius``.
These are ``public`` values.
Additionally, the class allows for a ``name`` of each particle, that is ``protected``.

.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 5-8,25-26
   :lines: 1-27

Constructor
^^^^^^^^^^^
A special method of a class is a constructor.
It defines how an instance of a class is setup.

.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 1
   :lines: 10-13

The name of the constructor class is the same as the class name and has no return type.
There can be multiple constructors with different input.
It is called when creating an instance of a class


.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 2
   :lines: 47-48,60-62

Methods
^^^^^^^
Functions that are provided by a class are called methods.
The constructor, for example, is a special method of the class.
A class can operate within a class and can thus e.g. access data otherwise inaccessible to a user.
An example is setting a radius:

.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 1
   :lines: 20-23

As any function, the method has a return type, in the above case ``void`` (nothing).
It also takes arguments, in thsi case a single ``double`` value.
The ``set_radius()`` method then uses an arrow ``->``, called member access through pointer to object operator, on the ``this`` object, a pointer to the current object instance, to access the member variable ``radiius`` and set it equal to ``r``.
As this methods sets a value of the class instance, it is called a "setter-method".


Another method of then simple particle class is the ``getName()`` method.
It accesses the ``private`` name attribute and returns it.

.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 1
   :lines: 15-18

Again, ``this->`` is used to access a value of the class instance, in this case the ``name`` attribute.


Inheritance
-----------
An essential aspect of object-oriented programming (OOP), which is code developement with classes, is inhertance.
It allows to derive a new class based on a base class.
The new class inheritas (takes over) attributes and methods from the base class, but can also add new attributes or methods or even overwrite them.
This allows to have many specialized classes that derive fro the same conceptial base class without having to rewrite code.

An example is that our previously defined ``BaseParticle`` class can be used as basis for a new ``ChargedParticle`` class.

.. literalinclude:: ../../../lessons/07_classes/classes.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 1
   :lines: 29-45

The addition ``: public BaseParticle`` after the class name tells the compiler that the new class inherited from that base class.
The keyword ``public`` adds the base class in the ``public`` access meaning, all public data from ``BaseParticle`` stays public in ``ChargedParticle``.

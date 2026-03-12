Control Statements
==================


Introduction
------------
In most programs, it is essential to follow different execution path depending on a state.
This capapility is essential to write programs that can nearly everything.
In C and C++, as in most other programming languages, this is solved by ``if`` ``else`` statement.
Depending on the condition in the ``if`` statement, the following code is executed.
One can define followup conditions that are checked only if the first condition is not fulfilled, the ``if else`` statement.
And one can define a condition that is only executed, if no prior condition was fulfilled, the ``else`` statement.

.. literalinclude:: ../../../lessons/06_control_statements/control.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 6,9,12
   :lines: 1-16,69-70


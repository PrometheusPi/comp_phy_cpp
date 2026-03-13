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
   :lines: 1-16,68-69


Ternary conditional operator
----------------------------
The ternary conditional operator ``condition ? expression_if_true : expression_if_false`` is a short hand form for ``if (condition) { expression_if_true; } else { expression_if_false; }`` used in C++.
An example is:

.. literalinclude:: ../../../lessons/06_control_statements/control.cpp
   :linenos:
   :language: cpp
   :emphasize-lines: 9
   :lines: 1-4,17-24,68-69

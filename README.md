# Inheritance-Priority-Test
When an inherited class derives from 2 base classes with same varible(s), when the inheritance declaration is done in the opposite order of constructor calling, this test answers which one of the variables will get priority.

Answer: It does not matter in which order the two classes are inherited or the constructors are called, if they have varibles with same name it will always give ambiguity error. 

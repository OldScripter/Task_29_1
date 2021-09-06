# Task_29_1
Animal, dogs and cats: object oriented programming principles (encapsulation, inheritance, polymorphism)

Решите задачу «Встреча животных».

Встречаясь, животные реагируют друг на друга. Реализуйте базовый класс Animal, классы-наследники Dog и Cat, и напишите функцию meeting, принимающую два указателя на базовый класс, по которому лежат элементы классов-наследников, которая выводит в консоль разные фразы в зависимости от того, какие конкретные классы встретились.

Dog + Dog → “Woof-Woof”

Dog + Cat → “Bark Meow”

Cat + Dog → “Meow Bark”

Cat + Cat → “Purr Purr”



Пример:

Animal* a = new Dog();
Animal* b = new Cat();
meeting(a,b);


Вывод:

Bark Meow



Чек-лист для проверки задачи
Функция принимает корректные типы данных, тип возвращаемого значения — void.
Решение выполнено через двойную диспетчеризацию или кастование к базовому классу.
Сигнатура функции void meeting (Animal* a, Animal* b), любая другая некорректна.

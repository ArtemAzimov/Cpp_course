# STL containers

***
## Введение

### Определение контейнеров
Контейнер в программировании - это структура данных, которая позволяет хранить и организовывать элементы в памяти компьютера. Они представляют собой объекты, обеспечивающие доступ к своим элементам, и обычно содержат методы для добавления, удаления и поиска элементов.


### Преимущества использования контейнеров
Преимущества использования контейнеров включают простоту и удобство использования, а также возможность автоматического управления памятью и поддержки динамического изменения размера контейнера.


### Различие между контейнером и массивом
Различие между контейнером и массивом состоит в том, что массивы имеют фиксированный размер, а контейнеры могут динамически менять свой размер во время выполнения программы. Также контейнеры обычно имеют методы для работы с элементами, а управление элементами массива происходит через индексы.

***
## Последовательные контейнеры в С++

В языке программирования С++ есть несколько последовательных контейнеров, которые могут использоваться для хранения данных. В данном коде использованы следующие 4 контейнера:

- Vector - контейнер, представляющий собой динамический массив элементов. Он позволяет добавлять и удалять элементы в конец контейнера за константное время, а также получать доступ к элементам по индексу. 

-  List - контейнер, представляющий собой двусвязный список элементов. Он позволяет добавлять и удалять элементы в начало и конец контейнера за константное время, а также эффективно изменять порядок элементов.

- Queue - контейнер, представляющий собой очередь элементов. В него можно добавлять элементы в конец очереди и удалять элементы из начала очереди. 

- Stack - контейнер, представляющий собой стек элементов. В него можно добавлять элементы в вершину стека и удалять элементы из вершины стека.

Каждый из этих контейнеров имеет свои преимущества и недостатки и может использоваться в зависимости от конкретных требований при написании программы.

#### Vector
[vector.cpp](./code/vector-ex.cpp)
#### List 
[list.cpp](./code/list-ex.cpp)

Использование std::list и std::vector в C++ зависит от конкретных требований проекта и характеристик данных, с которыми нужно работать.

---
Когда использовать std::list:

Если вам нужно выполнить вставку или удаление элементов в середине списка с высокой производительностью.

Если вам нужен быстрый доступ к первому или последнему элементу.

Если вы планируете часто переставлять элементы между контейнерами, так как это легко делается с помощью итераторов.

Если вы работаете с большими объемами данных, которые могут привести к проблемам с выделением памяти в std::vector.

---
Когда использовать std::vector:

Если вам нужен быстрый доступ к элементам по индексу.

Если вам нужно выполнить множество вставок и удалений элементов в конец или начало контейнера.

Если вам нужен компактный массив данных без лишних указателей и выравниваний, типичных для списков.

Если вы работаете с небольшими объемами данных, чтобы избежать издержек на создание дополнительных узлов списка и связанных с ними указателей.


Примечание: Это общее правило, и в зависимости от конкретных сценариев использования может быть рекомендовано использование другого типа контейнера. Также существуют и другие контейнеры STL, которые могут быть лучшим выбором в некоторых ситуациях.

## Адаптеры контейнеров

Адаптеры контейнеров в C++ представляют собой классы, которые обеспечивают интерфейс, совместимый с интерфейсом уже существующих контейнеров. Это позволяет использовать функционал одного контейнера в другом контейнере.


Существует два основных типа адаптеров контейнеров: 


Шаблонный класс std::stack, который представляет собой адаптер контейнера, который реализует стек.

Шаблонный класс std::queue, который представляет собой адаптер контейнера, который реализует очередь.


Примеры использования адаптеров контейнеров:

std::stack: 
[stack](stack-ex.cpp)

std::queue: 
[queue](queue-ex.cpp)

***
## Асоциативные контейнеры в С++

В языке программирования C++ также существуют ассоциативные контейнеры, которые предназначены для хранения пар ключ-значение. Ключи в ассоциативных контейнерах обычно представлены упорядоченным множеством и могут использоваться для быстрого поиска соответствующих значений.


Ниже приводятся описания нескольких основных ассоциативных контейнеров в C++:

- Map - контейнер, который хранит отображения ключ-значение в упорядоченном виде. Элементы хранятся в виде пар ключ-значение, где ключи уникальны и упорядочены по возрастанию. Функционал map обеспечивает достаточно быстрый доступ к элементам, вставку и удаление элементов.

Ex.
[Map](./code/map-ex.cpp)

- Multimap - аналогичен контейнеру Map, но позволяет хранить несколько элементов с одинаковым ключом. 

- Set - контейнер, который хранит элементы в упорядоченном виде без повторений. Каждый элемент может присутствовать только один раз в контейнере. 

Ex.
[Set](./code/set-ex.cpp)

- Multiset - аналогичен контейнеру Set, но позволяет хранить несколько элементов с одинаковым значением.

Все ассоциативные контейнеры в C++ реализованы в виде шаблонов классов, что позволяет использовать различные типы данных в качестве ключа и значения.

***
## Неупорядоченные aсоциативные контейнеры в С++ (unordered)

В языке программирования C++ также существуют неупорядоченные контейнеры, которые предназначены для хранения множества элементов. Ниже приводятся описания нескольких основных неупорядоченных контейнеров в C++:

- unordered_map - контейнер, хранящий отображения ключ-значение в неупорядоченном виде. Элементы также хранятся в виде пар ключ-значение, однако ключи могут быть любым хэшируемым типом данных. Реализация основана на хэш-таблицах, что обеспечивает очень быстрый доступ к элементам.

- unordered_multimap - аналогичен контейнеру unordered_map, но позволяет хранить несколько элементов с одинаковым ключом.

- unordered_set - контейнер, хранящий уникальные элементы в неупорядоченном виде. Каждый элемент может присутствовать только один раз в контейнере. Реализация также основана на хэш-таблицах, что обеспечивает быстрый поиск элементов.

- unordered_multiset - аналогичен контейнеру unordered_set, но позволяет хранить несколько элементов с одинаковым значением.

Все неупорядоченные контейнеры в C++ также реализованы в виде шаблонов классов, что позволяет использовать различные типы данных в качестве ключа и значения.

### Сравнение
Упорядоченные ассоциативные контейнеры имеют следующие преимущества:



Элементы всегда хранятся в определенном порядке, что облегчает поиск и перебор в определенном порядке.

Поддерживают операции, которые зависят от порядка элементов, например, поиск наименьшего или наибольшего элемента.

Подходят для использования в случаях, когда порядок элементов важен, или когда вам нужно сохранять отсортированную коллекцию элементов.


Упорядоченные ассоциативные контейнеры имеют следующие недостатки:



Вставка и удаление элементов может быть медленнее из-за необходимости поддерживать порядок.

Добавление и удаление элементов может быть более сложным, так как позиция других элементов может потребовать корректировки.

Не подходят для использования в случаях, когда порядок элементов не имеет значения.


Неупорядоченные ассоциативные контейнеры имеют следующие преимущества:



Вставка и удаление элементов может быть быстрее, так как нет необходимости поддерживать определенный порядок.

Обычно быстрее искать конкретные элементы, так как данные могут быть хешированы для более быстрого доступа.

Подходят для использования в случаях, когда порядок элементов не имеет значения.

Иногда можно получить лучшую локальность кэша и снизить объем памяти в зависимости от основной реализации контейнера.


Неупорядоченные ассоциативные контейнеры имеют следующие недостатки:



Не поддерживают какой-либо определенный порядок элементов.

Не поддерживают операции, которые зависят от порядка элементов.

Хеширование и разрешение коллизий могут быть дорогими в некоторых случаях.

Не подходят для использования в случаях, когда порядок элементов важен.


Пример использования: 


Если вам нужно поддерживать коллекцию уникальных элементов и не важен их порядок (например, список номеров социального страхования), то неупорядоченный ассоциативный контейнер может быть лучшим выбором из-за быстрых времен вставки и поиска, а также меньшей вычислительной сложности. С другой стороны, если вам нужно поддерживать отсортированную коллекцию элементов (например, список имен, отсортированных по алфавиту),



***
## Сравнение массива и контейнера
[compare-container.cpp](./code/compare-container.cpp)
Сравнение производительности доступа, добавления в массив, вектор и unordered_map.
Можно увидеть размер каждой структуры в памяти.
Пример показывает как мы можем сравнить эффективность.(Добавление в вектор и массив одинаковое)

---
# Links
[Containers docs](https://ru.cppreference.com/w/cpp/container)
# Qt_OOP

*Предпочтение для разработки было отдано языку C++ и Qt Creator.*
## Формулировка технического задания
Данное приложение представляет собой адаптацию под сформулированную концепцию продукта и предназначено для обеспечения работы авиакассы. Основные функции приложения заключаются в предоставлении каждой роли пользователей соответствующей информации.

### Функциональные требования к приложению (каждому требованию соответствует уникальный идентификатор):

- FR-01 - Приложение должно обеспечивать добавление пассажиров в систему через меню администратора

- FR-02 -	Приложение должно обеспечивать просмотр списка пассажиров через меню администратора

- FR-03 - Приложение должно обеспечивать добавление авиакомпаний в систему через меню администратора

- FR-04 - Приложение должно обеспечивать просмотр списка авиакомпаний через меню администратора

- FR-05 -	Приложение должно обеспечивать удаление авиакомпаний через меню администратора

- FR-06 -	Приложение должно обеспечивать добавление броней в систему через меню администратора

- FR-07 -	Приложение должно обеспечивать просмотр списка броней через меню администратора

- FR-08	- Приложение должно обеспечивать удаление броней через меню администратора

- FR-09 -	Приложение должно обеспечивать поиск брони через меню администратора

- FR-10 -	Приложение должно обеспечивать удаление пассажиров через меню администратора

- FR-11 -	Приложение должно обеспечивать подсчёт стоимости билета в системе через меню пользователя

- FR-12 -	Приложение должно обеспечивать возможность бронирование билетов через меню пользователя

- FR-13 -	Приложение должно обеспечивать возможность просмотра специальных предложений через меню пользователя


### Остальные требования к программе, которые не были описаны в требованиях выше, отражены в следующей таблице:

- NFR-01 -	В приложении для бронирования не могут быть зарегистрированы дети без взрослых

- NFR-02 -	В приложении должен быть реализован механизм защиты от, очевидно, неверных действий пользователя

Требуется реализовать техническое задание с использованием классов и объектов, спроектированных в разделе «Проектирование классов».

## Проектирование классов
### Классы сущностей 
- `passenger(int id,QString Name,QString Surname, QString Middle_name, QDate Datebirth,QString Telephone)` – используется для представления пассажира;

- `ticket(int id,int id_pas,int id_com, QDate Datedepar,bool Dop,QString Sity,bool Class,int Sum)` – используется для представления брони;

- `company(int id,QString Name`)` – используется для представления авиакомпании;
### Управляющие классы 
- `listcompany` – используется для хранения компании;

Функции, реализованные в классе:
````
    int tmp=0;
    static listcompany* get_instance();
    void add(company com);
    void del(int id);
    company getcom(int id);
    company get_com(int id);
    void update(company com,int id);
    int count_com();
````
- `listticket` – используется для хранения броней;

Функции, реализованные в классе: 
````
   static listticket* get_instance();
   void add(ticket tick);
   void del(int id);
   ticket gettic(int id);
   void update(ticket tick,int id);
   int count_tic();
   void del_pas(int id);
   void del_com(int id);
````
- `catalog` – используется для хранения пассажиров;

 Функции, реализованные в классе:
 ````
    static catalog* get_instance();
    void add(passenger pas);
    void del(int id);
    passenger getpas(int id);
    passenger get_pas(int id);
    void update(passenger pas,int id);
    int count_pas(); 
````
### Интерфейсные классы
- `Bron` – позволяет администратору добавлять данные о компании, просматривать, удалять данные об авиакомпании, пассажирах и броней;
- `Form2` – позволяет пользователю забронировать перелет, выбрав дополнительные функции;
- `MainW` – позволяет пользователю рассчитать стоимость;
- `Sing` – позволяет авторизоваться администратору и пользователю;
- `spezpred` – позволяет пользователю выбрать специальные предложение и забронировать;
## Используемые паттерн проектирования
На этапе проектирования был выбран порождающий паттерн проектирования– Singleton.

**Одиночка** — это порождающий паттерн, который гарантирует существование только одного объекта определённого класса, а также позволяет достучаться до этого объекта из любого места программы.

Архитектура паттерна Singleton основана на идее использования глобальной переменной, имеющей следующие важные свойства:

1.	Такая переменная доступна всегда. Время жизни глобальной переменной - от запуска программы до ее завершения.
2.	Предоставляет глобальный доступ, то есть, такая переменная может быть доступна из любой части программы.

В разрабатываемом приложении Singleton используется для реализации классов: listcompany, listticket, catalog, listforfeedback, listforticket;

 ![image](https://user-images.githubusercontent.com/79849850/233833067-75717f74-81de-47aa-9e35-74a9e7ef3773.png)

Рис.1 – UML диаграмма классов театра
## Разработка приложения
### Разработка интерфейса приложения
Интерфейс приложения разработан с учетом спроектированных интерфейсных классов.

- Форма «sing»

 ![image](https://user-images.githubusercontent.com/79849850/233833149-d3cd7ced-c7e1-463b-8b4b-2c73911f3dfa.png)

Рис.2 – Форма «sing»

- Форма «mainw»

![image](https://user-images.githubusercontent.com/79849850/233833166-31614b22-80ea-40ad-969d-e9e44d0417f5.png)

Рис.3 – Форма «mainw»
- Форма «form2»

![image](https://user-images.githubusercontent.com/79849850/233833187-84931633-dc6c-438e-9d59-004e7bd87d4c.png)

Рис.4 – Форма «form2»
- Форма «spezpred»

![image](https://user-images.githubusercontent.com/79849850/233833231-02608682-c0fd-4478-ab38-0991b18e0403.png)

Рис.5 – Форма «spezpred»
- Форма «bron»

![image](https://user-images.githubusercontent.com/79849850/233833247-3773407d-4d95-4c7c-b0d9-c8f6b9f98e94.png)

Рис. 6 – Форма «bron»

### Реализация классов
Класс `passenger` - необходим для представления пассажира и используется в классе «catalog».

[passenger.cpp](https://github.com/argo2707/Qt_OOP/blob/main/passenger.cpp)
[passenger.h](https://github.com/argo2707/Qt_OOP/blob/main/passenger.h)

Класс `catalog` - используется для работы с пассажирами. В данном классе реализованы функции добавления, поиска, просмотра, удаления пассажира, возврата размера списка.

[catalog.cpp](https://github.com/argo2707/Qt_OOP/blob/main/catalog.cpp)
[catalog.h](https://github.com/argo2707/Qt_OOP/blob/main/catalog.h)

Класс `bron` предназначен для связи интерфейса и функционала приложения. Функции предназначены для работы с администратором.

[bron.cpp](https://github.com/argo2707/Qt_OOP/blob/main/bron.cpp)
[bron.h](https://github.com/argo2707/Qt_OOP/blob/main/bron.h)

Классы `ticket`, `company`, `listcompany`, `listticket` имеют схожую логику с классами, приведёнными выше. 

[ticket.cpp](https://github.com/argo2707/Qt_OOP/blob/main/ticket.cpp)
[ticket.h](https://github.com/argo2707/Qt_OOP/blob/main/ticket.h)

[company.cpp](https://github.com/argo2707/Qt_OOP/blob/main/company.cpp)
[company.h](https://github.com/argo2707/Qt_OOP/blob/main/company.h)

[listcompany.cpp](https://github.com/argo2707/Qt_OOP/blob/main/listcompany.cpp)
[listcompany.h](https://github.com/argo2707/Qt_OOP/blob/main/listcompany.h)

[listticket.cpp](https://github.com/argo2707/Qt_OOP/blob/main/listticket.cpp)
[listticket.h](https://github.com/argo2707/Qt_OOP/blob/main/listticket.h)

Класс `calcul` используется для расчета стоимости билета. В нем обрабатывается запрос на расчет стоимости, посредством использования функции «calcul».

[calcul.cpp](https://github.com/argo2707/Qt_OOP/blob/main/Calcul.cpp)
[calcul.h](https://github.com/argo2707/Qt_OOP/blob/main/calcul.h)

Класс `form2` используется для бронирования пользователем билета. В нем обрабатывается запрос на покупку, посредством использования функций «add» класса listticket и catalog (код всего класса можно посмотреть в Приложении 1)

[form2.cpp](https://github.com/argo2707/Qt_OOP/blob/main/form2.cpp)
[form2.h](https://github.com/argo2707/Qt_OOP/blob/main/form2.h)

Класс `mainw` используется для выбора города и расчёта суммы билетов, в зависимости от количества людей, класса и городов. В нем обрабатывается запрос на расчёт стоимости и перехода на основные функции приложения, посредством использования функций «calcul» класса calcul.

[mainw.cpp](https://github.com/argo2707/Qt_OOP/blob/main/MainW.h)
[mainw.h](https://github.com/argo2707/Qt_OOP/blob/main/mainw.h)

Класс `sing` используется для авторизации. В нем обрабатывается запрос на авторизацию пользователя.

[sing.cpp](https://github.com/argo2707/Qt_OOP/blob/main/sing.cpp)
[sing.h](https://github.com/argo2707/Qt_OOP/blob/main/sing.h)

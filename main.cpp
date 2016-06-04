#include <iostream>
#include <vector>

#include "printable.h"
#include "employee.h"
#include "office.h"

using namespace std;
/*
 * Функція print друкує інформацію про кожен об'єкт у списку. Ідея полягає у тому, що функція
 * працює з нащадками класу Printable, який є базовим класом для всіх об'єктів, які можуть
 * роздрукувати інформацію про себе у консоль. Завдяки цьому ми можемо використовувати одну
 * і ту ж функцію для виводу інформації про об'єкти різних класів (головне щоб вони успадковували
 * від класу Printable). Тобто нам не потрібно змінювати функцію, чи писати її заново,
 * чи писати заново схожий код для виводу інших об'єктів - ми можемо використати функцію повторно.
 *
 * Для того, щоб функція print могла вивести інформацію про ваш клас необхідно успадкувати його
 * від класу Printable та перевизначити метод print().
 *
 * Параметер listToPrint - Список об'єктів про які необхідно вивести інформацію у консоль.
 */


void printList(std::vector <Printable > listToPrint)
{
    for (auto item: listToPrint)
    {
        item.print();
        std::cout << std::endl;
    }
}


int main()
{
    // ЗАВДАННЯ:
    // ---------
    // 1. Створіть новий клас Employee (працівник) та додайте до нього методи
    // для задання різноманітної інформації про працівника:
    //    * Ім'я
    //    * Номер телефону
    //    * Домашня адреса
    //    * Заробітна плата (число у доларах США)
    //    * З якого року працює
    // Клас має мати окремий *.h-файл з описом та окремий *.cpp файл що міститиме реалізацію.

    // 2. Для того, щоб вивести інформацію про працівника, успадкуйте його від класу Printable
    // та перевизначіть метод print(). У цьому методі виведіть усю доступну про працівника
    // інформацію у консоль.

    // 3. Створіть 2-3 об'єкта класу Employee, додайте їх до списку employeesToPrint
    // та виведіть з допомогою функції printList().
    //
    // 4. Створіть новий клас Office (офіс) який буде містити інформацію про офіси
    // нашої фірми та їх місцезнаходження. Додайте до нього методи для задання
    // різноманітної інформації:
    //    * Назва офісу
    //    * Адреса офісу
    //    * Робоча площа (у кв метрах)
    //    * Кількість працівників що працюють всередині
    // Клас має мати окремий *.h-файл з описом та окремий *.cpp файл що міститиме реалізацію.
    // 5. Створіть 2-3 об'єкта класу Office, додайте їх до списку officesToPrint
    // та виведіть з допомогою функції printList().
    // Для того, щоб вивести інформацію про офіс, успадкуйте його від класу Printable
    // та перевизначіть метод print(). У цьому методі виведіть усю доступну про офіс
    // інформацію у консоль.


    // Створіть об'єкти Employee та наповніть список тут....
      Employee Ivan;
      Employee *p;
      p=&Ivan;
      p->setEmployee(p);

      Employee Max;
      Employee *q;
      q=&Max;
      q->setEmployee(q);


    vector <Printable *> employeesToPrint;
    employeesToPrint.push_back(Ivan);
    employeesToPrint.push_back(Max);

    printList(employeesToPrint);


 cout << std::endl; // ------------

 // Створіть об'єкти Office та наповніть список тут....
    Office Google;
    Office *g;
    g=&Google;
    g->setOffice(g);

    Office Mailru;
    Office *m;
    m=&Mailru;
    m->setOffice(m);


   vector<Printable *> officesToPrint;
   officesToPrint.push_back(Google);
   officesToPrint.push_back(Mailru);

   printList(officesToPrint);

    return 0;
}

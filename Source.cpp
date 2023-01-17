#include <iostream>
#include <Windows.h>
#include <iomanip>

#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;


class Student {
public:


    

    Student(string fn = "Ella", string ln = "Snow", int age_ = 18, double avg = 0 ) { // конструктор с параметрами по умолчанию
        FN = fn;
        LN = ln;
        age = age_;

    }

    void SearchAVG() {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            arr_score[i] = rand() % 12 + 1;
        }
        for (int i = 0; i < 3; i++) {
            sum += arr_score[i];
        }
        average = (double)sum / 3.0;
    }




    void Print() {
        cout << FN << " " << LN << " " << age << " ";
        for (int i = 0; i < 3; i++)
        {
            cout << arr_score[i] << " ";
        }
        cout << average << endl;
    }

    /* double getAVG() {
         double avg = 0;
         for (int i = 0; i < 3; i++)
         {
             avg += arr_score[i];
         }
         avg /= 3;
         return avg;
     }*/

     /*  void setScore() {
           for (int i = 0; i < 3; i++)
           {
               arr_score[i] = rand() % 12 + 1;
           }
       }*/

       /* void setAVG() {
            average = getAVG();
        }*/

    bool operator() (const Student &st) {
        if (st.average > 6) return true;
    }
    
    bool foundage(int a) {
        if (a > 20) return true;
    }
    


private:
    string FN;
    string LN;
    int age;
    int arr_score[3] = {};
    double average;


};


void main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    vector <Student> v{

    Student(),
    Student("Maria", "Kovaleva", 21, 0),
    Student("Boris", "Moiseev", 19, 0),
    Student("Alla", "Akaceva", 18, 0),
    Student("Vitaly", "Ruk", 0)
    };

    for (int i = 0; i < 5; i++)
    {
        v[i].SearchAVG();
        v[i].Print();
    }

    int res = count_if(v.begin(), v.end(), v.front());
    cout << "Количество учящихся, прошедших экзамен (набравших больше 6): " << res << endl << endl;

    vector <int>::iterator it;



    


   
}
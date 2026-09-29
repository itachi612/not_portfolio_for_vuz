#include <clocale>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    string name;
    vector<int> grades;

public:
    Student(string n) : name(n) {}

    void add_grade(int g) {
        if (g >= 1 && g <= 5) {
            grades.push_back(g);
        } else {
            cout << "Неверная оценка" << endl;
        }
    }

    void show_grades() const {
        cout << "Оценки студента " << name << ": ";

        for (int grade : grades) {
            cout << grade << " ";
        }

        cout << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    Student s("Ivan");
    s.add_grade(5);
    s.add_grade(2);
    s.add_grade(4);
    s.show_grades();

    return 0;
}
#include <iostream>

using namespace std;

class Student {
    int id;
    string name;
    int age;
    string address;
    int score;
public:
    Student() {

    }
    Student(int id, string name, int age, string address, int score) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this-> setScore(score);
    }
    void setId(int id) {
        this->id = id;
    }
    int getId() {
        return id;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
    void setAddress(string address) {
        this->address = address;
    }
    string getAddress() {
        return address;
    }
    void setScore(int score) {
        if (score < 0) {
            score = 0;
        }
        if (score > 10) {
            score = 10;
        }
        this->score = score;
    }
    int getScore() {
        return score;
    }

};

int main() {
    Student st(1001, "Cuong", 18, "Dak Nong",5);
    st.setScore(-5);
    cout << st.getId() << endl;
    cout << st.getName() << endl;
    cout << st.getAge() << endl;
    cout << st.getAddress() << endl;
    cout << st.getScore() << endl;
    return 0;
}
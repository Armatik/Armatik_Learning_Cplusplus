//
// Created by Sfomc on 29.03.2023.
//

#include<iostream>
#include<string>

class studying{ // абстрактный класс
protected:
    std::string name; // имя
    std::string gender; // пол
    unsigned old; // возраст
public:
    studying() = default; // конструктор по умолчанию
    virtual std::string getInstitutionName() = 0; // виртуальный метод

    std::string getName() { // геттеры и сеттеры
        return name;
    }
    std::string getGender(){
        return gender;
    }
    unsigned getOld(){
        return old;
    }
    void setName(std::string &name){
        this->name = name;
    }
    void setGender(std::string &gender){
        this->name = name;
    }
    void setOld(unsigned &old){
        this->old = old;
    }
};

class schoolchild: public studying{ // класс школьник
private:
    std::string classLetter; // буква класса
    unsigned classNumber; // номер класса
public:

    schoolchild(const std::string &name, const std::string &gender, const unsigned &old, const std::string &classLetter, const unsigned &classNumber){ // конструктор
        this->name = name;
        this->gender = gender;
        this->old = old;
        this->classLetter = classLetter;
        this->classNumber = classNumber;
    }
    std::string getInstitutionName() { // переопределение метода
        std::string school = "Школьник. Класс: " + std::to_string(classNumber) + classLetter ;
        return school;
    }
    std::string getClassLetter() { // геттеры и сеттеры
        return classLetter;
    }
    unsigned getClassNumber(){
        return classNumber;
    }
    void setClassLetter(char &classLetter){
        this->classLetter = classLetter;
    }
    void setClassNumber(unsigned &classNumber){
        this->classNumber = classNumber;
    }
};

class student: public studying{ // класс студент
private:
    std::string facultet; // факультет
    std::string speciality; // специальность
    std::string group; // группа
public:
    student(const std::string &name, const std::string &gender, const unsigned &old, const std::string &facultet, const std::string &speciality, const std::string group){ // конструктор
        this->name = name;
        this->gender = gender;
        this->old = old;
        this->facultet = facultet;
        this->speciality = speciality;
        this->group = group;
    }
    std::string getInstitutionName() { // переопределение метода
        std::string university = "Студент. Факультет: " + facultet + ". Специальность: " + speciality + ". Группа: " + group;
        return university;
    }
    std::string getFacultet(){ // геттеры и сеттеры
        return facultet;
    }
    std::string getSpeciality(){
        return speciality;
    }
    std::string getGroup(){
        return group;
    }
    void setFacultet(std::string &facultet){
        this->facultet = facultet;
    }
    void setSpeciality(std::string &speciality){
        this->speciality = speciality;
    }
};

class graduate: public studying{ // класс аспирант
private:
    std::string sienceGroup; // научная группа
    std::string sienceLeader; // научный руководитель
public:
    graduate(const std::string &name, const std::string &gender, const unsigned &old, const std::string &sienceGroup, const std::string &sienceLeader){ // конструктор
        this->name = name;
        this->gender = gender;
        this->old = old;
        this->sienceGroup = sienceGroup;
        this->sienceLeader = sienceLeader;
    }
    std::string getInstitutionName() { // переопределение метода
        std::string university = "Аспирант. Научная группа: " + sienceGroup + ". Научный руководитель: " + sienceLeader;
        return university;
    }
    std::string getSienceGroup(){ // геттеры и сеттеры
        return sienceGroup;
    }
    std::string getSienceLeader(){
        return sienceLeader;
    }
    void setSienceGroup(std::string &sienceGroup){
        this->sienceGroup = sienceGroup;
    }
    void setSienceLeader(std::string &sienceLeader){
        this->sienceLeader = sienceLeader;
    }
};


int main(){
    system("chcp 65001");
    schoolchild school("Иванов Иван Иванович", "Мужской", 15, "А", 11); // создание объектов
    student student("Петров Петр Петрович", "Мужской", 19, "Физико-математический", "Информатика", "ИС-19-1");
    graduate graduate("Сидоров Сидор Сидорович", "Мужской", 22, "ИС-19-1", "Иванов Иван Иванович");

    std::cout << school.getInstitutionName() << std::endl; // вывод информации
    std::cout << student.getInstitutionName() << std::endl; // о студенте
    std::cout << graduate.getInstitutionName() << std::endl; // о аспиранте
}